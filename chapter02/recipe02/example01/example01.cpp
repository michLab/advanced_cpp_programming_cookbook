#include <iostream>
#include <stdexcept>

void foo(){
    std::cout << "The answer is 42\n";
}

int main() {
    std::cout << std::boolalpha;
    std::cout << "Could foo throw: " << !noexcept(foo()) << '\n';
    return 0;
}