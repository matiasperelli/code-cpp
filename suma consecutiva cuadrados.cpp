#include <iostream>
using namespace std;

int main() {
    int n, cuadrado = 1, suma = 0;
    
    cout <<"Digite un numero: "; cin >> n;
    
    for(int i = 1; i <= n; i++){
        cuadrado = i*i;
        suma += cuadrado;
    }
    
    cout <<"El resultado de la suma es: " << suma << endl;
    
    return 0;
}
