#include <iostream>

using namespace std;

int main(){
    int edad;
    
    cout <<"Digite su edad: "; cin >> edad;
    
    if((edad>=18)&&(edad<=25)){ //operador "y" logico, se deben cumplir ambas 
        cout <<"Su edad esta en el rango [18-25]";
    }
    else{
        cout << "Su edad no se encuentra en dicho rango";
    }
    
    return 0;
}
