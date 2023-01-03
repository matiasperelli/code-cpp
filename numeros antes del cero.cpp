#include <iostream>
using namespace std; 

int main() {
    int numero, i = 0;
    
    do{
        cout <<"Ingrese un numero: "; cin >> numero;
        i++;
    }while(numero !=0 );
    cout <<"Los veces que ingreso numeros antes del cero fueron: " << i-1;

    return 0;
}
