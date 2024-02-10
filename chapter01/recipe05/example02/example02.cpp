#include <iostream>
#include <boost/log/trivial.hpp>

int main() {
    BOOST_LOG_TRIVIAL(debug) << "debug message";
    BOOST_LOG_TRIVIAL(info) << "info message";
    return 0;
}