#include <iostream>

int main(){
    int celsium = 54;
    std::cout << celsium << " °C" << std::endl;
    float fahrenheit  = (celsium*1.8) + 32;
    std::cout << fahrenheit  << " °F" << std::endl;
    
    return 0;
}
