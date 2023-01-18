#include <iostream>

using  namespace std;

int main() {
    int numeros[100], n;
    
    cout <<"Digite el numero de elementos: "; cin >> n;

    for(int i=0;i<n;i++){
        cout <<"Digite un numero: "; cin >> numeros[i]; //elementos del vector
    }

    //ahora se veran los elementos con los indices correspondientes

    for(int i=0;i<n;i++){
        cout << i << " -> " << numeros[i] << endl; //muestra en que posicion se encuentra cada numero
    }

    return 0;
}
