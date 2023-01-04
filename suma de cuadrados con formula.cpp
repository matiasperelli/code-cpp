#include <iostream>
using namespace std; 

int main() {
    int n, resultado;
    cout <<"Ingrese un numero: "; cin >> n;
    
    resultado = n*(n + 1)*(2*n + 1)/6;
    
    cout <<"La suma de cuadrados es: " << resultado;
    
    return 0;
}
