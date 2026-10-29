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