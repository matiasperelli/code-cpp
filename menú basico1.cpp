#include <iostream>

using namespace std;

int main() {
    int saldo_inicial = 1000, opcion;
    float agregar, saldo = 0, retiro;
    
    cout <<"\tBienvenido a su cajero virtual" << endl;
    cout <<"1. Ingresar dinero en cuenta" << endl;
    cout <<"2. Retirar dinero de la cuenta" << endl;
    cout <<"3. Salir" << endl; 
    cout <<"Opcion: "; cin >> opcion;
    
    switch(opcion){
        case 1:
        cout <<"Digite la cantidad a ingresar: "; cin >> agregar;
        
        saldo = saldo_inicial + agregar;
        
        cout <<"Dinero en la cuenta: " << saldo;break;
        
        case 2:
        cout <<"Digite la cantidad a retirar: "; cin >> retiro;
        
        if(retiro > saldo_inicial){
            cout <<"El retiro supera al dinero en cuenta";
        }
        else{
            saldo = saldo_inicial - retiro;
            cout <<"Dinero en cuenta: " << saldo;
        }
    
        case 3:  break;
        
    }
    
    return 0;
}
