#include <iostream>

using namespace std;

int main() {
    int numero, opcion;
    
    cout <<"\tBienvenido a su calculadora" << endl;
    cout <<"1. Cubo de un numero" << endl;
    cout <<"2. Paridad de un numero" << endl;
    cout <<"3. Salir" << endl; 
    cout <<"Opcion: "; cin >> opcion;
    
    switch(opcion){
        case 1:
        cout <<"Digite su numero: "; cin >> numero;
        cout <<"Su numero es "<<numero*numero*numero<<"";break;
    
    
        case 2:
        cout <<"Digite su numero: "; cin >> numero;
        
        if (numero%2==0){ 
        cout <<"El numero es par";break;
    }
    else{
        cout <<"El numero es impar";break;
    }
    }   
        
    return 0;
}
