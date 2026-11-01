#include <string>
#include <vector>

#include "app/app.h"

namespace debug {

struct UiData {
    std::vector<std::string> bundles;
};

void DrawDebugWindow();
void UpdatePad(int port, input::Pad& pad);

void ToggleDebugMenu();

}  // namespace debug