#include <iostream>

using namespace std;

int main() {
    int numeros1[5];
    int numeros2[5];

    for(int i=0;i<5;i++){
    cout <<"Digite un numero: "; cin >> numeros1[i];
    }
    
    //copiando los elementos entregados hacia numeros2
    for(int i=0;i<5;i++){
        numeros2[i] = numeros1[i]*2;
        cout << numeros2[i] << endl;
    }
    
    return 0;
}
