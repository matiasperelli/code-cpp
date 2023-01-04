#include <iostream>
using namespace std;

int main() {
    int n, suma = 0;
    
    cout <<"Digite un numero: "; cin >> n;
    
    for(int i = 1; i <= n; i++){
        suma += (2*i-1);
    }
    
    cout <<"El resultado de la suma es: " << suma << endl;
    
    return 0;
}
