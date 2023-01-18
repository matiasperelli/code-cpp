#include <iostream>

using  namespace std;

int main() {
    int numeros[100], n, mayor=0;
    
    cout <<"Digite el numero de elementos: "; cin >> n;

    for(int i=0;i<n;i++){
        cout << i+1 <<". Digite un numero: "; cin >> numeros[i];//para empezar desde el 1
        if(numeros[i] > mayor){
            mayor = numeros[i];
        }
    }
    
    cout <<"El numero mayor es: " << mayor << endl;
    return 0;
}
