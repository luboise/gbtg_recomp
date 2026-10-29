#include <optional>
#include <string>
#include <string_view>

namespace game {

auto TakeNextPlaycam() -> std::optional<std::string>;
void SetNextPlaycam(std::string_view str);

void SetPlaycamAIDRaw(std::uint8_t* base, std::string_view str);

void Continue(std::uint8_t* base);

}  // namespace game