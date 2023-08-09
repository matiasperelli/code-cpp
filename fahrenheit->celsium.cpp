#include <iostream>

int main() {
    float fahrenheit = 129.2;
    std::cout << fahrenheit << " °F" << std::endl;
    int celsium  = (fahrenheit - 32) * 5/9;
    std::cout << celsium  << " °C" << std::endl;
    
    return 0;
}
