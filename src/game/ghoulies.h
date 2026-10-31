#include <optional>
#include <string>
#include <string_view>

#include "cpu/x86_ops.h"

namespace game {

auto TakeNextPlaycam() -> std::optional<std::string>;
void SetNextPlaycam(std::string_view str);

void SetPlaycamAIDRaw(std::uint8_t* base, std::string_view str);

void Continue(std::uint8_t* base);

struct AssetConstructorEntry {
    x86_u32u namePtr;
    x86_u32u parentIndex;
    x86_u32u vTable;

    char* name();
};

AssetConstructorEntry AssetConstructorEntryFromId(x86_u32u index);

// the game uses 1 indexing for type ids
inline AssetConstructorEntry AssetConstructorEntryFromTypeIndex(
    x86_u32u index) {
    return AssetConstructorEntryFromId(index - 1);
};

}  // namespace game