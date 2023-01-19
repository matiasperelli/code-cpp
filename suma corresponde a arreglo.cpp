#include <iostream>

using  namespace std;

int main() {
    int numeros[100], n, mayor=0, suma=0, resta=0;
    
    cout <<"Digite el numero de elementos: "; cin >> n;

    for(int i=1;i<=n;i++){
        cout <<"Digite un numero: "; cin >> numeros[i];
        
        if(numeros[i] > mayor){
            mayor = numeros[i];
        }
        suma += numeros[i];
    }
    
    resta = suma - mayor;
    if(resta == mayor){
    
    cout <<"La suma de los elementos es igual: " << mayor << endl;
    cout<<"Elemento ["<<mayor<<"] ---> " << resta << ". \nSe cumple la suma."<<endl;     return 0;
}
    else{
        cout <<"La suma no es igual" << endl;
    }
    
    return 0;

}
