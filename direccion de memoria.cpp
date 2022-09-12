#include <iostream>

int main() {
    int a = 5;
    int * ptr;
    ptr = &a;
    std::cout << "La direccion de memoria de a: " << &a << std::endl;
    
    return 0;

}
