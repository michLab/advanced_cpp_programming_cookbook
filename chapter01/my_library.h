#pragma once

namespace my_library {
    namespace config {
        inline bool show_hex = false;
    }
}

#pragma once

 // #include "config.h"

#include <iostream>
#include <iomanip>

namespace my_library {
    void my_api() {
        if (config::show_hex) {
            std::cout << std::hex << "The answer is: " << 42 << '\n';
        } else {
            std::cout << std::dec << "The answer is: " << 42 << '\n';
        }
    }
}
