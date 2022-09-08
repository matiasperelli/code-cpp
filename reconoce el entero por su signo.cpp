#include <iostream>
int main(){
    int x;
    
    std::cin >> x;
    if(x<0){
        std::cout << "Este es un numero negativo" << std::endl;
    }else if(x==0){
        std::cout << "Este numero es igual a cero" << std::endl;
    }else{
        std::cout << "Este es un numero positivo" << std::endl;
    }
    
    return 0;
    
}
