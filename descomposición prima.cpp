#include <iostream>

using namespace std; 

int main() {
    int numero;
    
    cout <<"Digite un numero: "; cin >> numero;
    
    cout <<"La descomposicion en factores primos es: ";
    
    for(int i=2; i <= numero; i++){
        
        if(numero % i == 0){
            cout << i;
            
        if(numero!= i){
            cout <<"*";
        }
        
        numero/=i; //Divide el valor del primer operando por el valor del segundo operando
        i--; //corrobora que el numero no sea divisible por el mismo
        
        }
    }
    
    return 0;
}
