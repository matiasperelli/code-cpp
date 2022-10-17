#include <iostream>

using namespace std;

int main() {
    int numero;
    
    cout << "Digite un numero: "; cin >> numero;
    
    if (numero%2==0){ //resuidio del numero, si es 0, detecta par
        cout <<"El numero es par";
    }
    else{
        cout <<"El numero es impar";
    }
    
    return 0;
}
