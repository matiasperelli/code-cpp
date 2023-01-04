#include <iostream>
using namespace std;

int main() {
    int n, suma = 1;
    
    cout <<"Digite un numero: "; cin >> n;
    
    for(int i = 1; i <= n; i++){
        suma = i*-1;
    }
    
    cout <<"El resultado de la suma es: " << suma << endl;
    
    return 0;
}
