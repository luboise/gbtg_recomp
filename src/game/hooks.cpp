// Hooks for default.xbe. A strong definition replaces the recompiled function
// at that address, for example:
//
#include <optional>
#include <string>

#include "core/log.h"
#include "cpu/x86_ops.h"
#include "ghoulies.h"

//
// X86_EXTERN_FUNC(__imp__sub_00012345);
// X86_FUNC(sub_00012345) {
//     __imp__sub_00012345(ctx, base);  // the original
// }

// set next playcam aid
X86_EXTERN_FUNC(__imp__sub_0011EB30);

X86_EXTERN_FUNC(__imp__sub_00033B50);
X86_FUNC(sub_00033B50) {
    if (auto optPlaycam{game::TakeNextPlaycam()}; optPlaycam) {
        auto playcam{optPlaycam.value()};
        LOGR("updating playcam to %s", playcam.data());
        game::SetPlaycamAIDRaw(base, playcam);
    }

    __imp__sub_00033B50(ctx, base);
}

// FindAssetHeader

static x86_u32u LastObjectParamsPtr{};
static x86_u32u LastObjectParamsSize{};

X86_EXTERN_FUNC(__imp__sub_00034D00);
X86_FUNC(sub_00034D00) {
    __imp__sub_00034D00(ctx, base);

    x86_u32u header{ctx.eax};

    if (header == 0) return;

    LOGR("%s", X86_PTR(char, header));
    LastObjectParamsPtr = X86_MEM32(header + 0x80);
    LastObjectParamsSize = X86_MEM32(header + 0x84);
}

// GetObjParams
// X86_EXTERN_FUNC(__imp__sub_00107720);
// X86_FUNC(sub_00107720) {
//     __imp__sub_00107720(ctx, base);
//     // LastObjectParamsPtr = ctx.eax;
// }

// Entity::NewObject
X86_EXTERN_FUNC(__imp__sub_00107520);
X86_FUNC(sub_00107520) {
    x86_u32u objParamsPtr{X86_MEM32(ctx.esp + 4)};

    x86_u16u typeIndex{X86_MEM16(objParamsPtr + 4)};

    auto ace{game::AssetConstructorEntryFromTypeIndex(typeIndex)};

    LOGR("spawning new entity of type %d (%s) using params at 0x%x", typeIndex,
         ace.name(), LastObjectParamsPtr);

    // static auto numIndentation{0};
    // std::string indentation;
    // for (int i{0}; i < numIndentation; i++) {
    //     indentation += "    ";
    // }

    __imp__sub_00107520(ctx, base);
}

// avatar::ctor
X86_EXTERN_FUNC(__imp__sub_0003E940);
X86_FUNC(sub_0003E940) {
    x86_u32u avatar{X86_MEM32(ctx.esp + 4)};
    x86_u32u params{X86_MEM32(ctx.esp + 8)};

    LOGR("LOADING MODEL AID: %s", X86_PTR(char, params + 0x28));

    __imp__sub_0003E940(ctx, base);
}