#include <optional>
#include <string>
#include <string_view>

namespace game {

auto TakeNextPlaycam() -> std::optional<std::string>;
void SetNextPlaycam(std::string_view str);

}  // namespace game