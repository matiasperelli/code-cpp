#include <iostream>
using namespace std;

int main() {
    int n, suma = 0;
    
    cout <<"Digite un numero: "; cin >> n;
    
    for(int i = 0; i <= n; i++){
        suma += i;
    }
    
    cout <<"El resultado de la suma es: " << suma << endl;
    
    return 0;
}
