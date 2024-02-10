#include <iostream>
#include <boost/chrono.hpp>

int main() {
    std::cout << "Date/Time: " << boost::chrono::system_clock::now() << std::endl;
    return 0;
}