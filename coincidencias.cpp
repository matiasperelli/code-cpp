#include <iostream>

using namespace std;

int main(){
    int n1, n2, n3, n4;
    
    cout <<"Digite 3 numeros: "; cin >> n1 >> n2 >> n3;
    cout <<"Digite un cuarto numero: "; cin >> n4;
    
    if (n4==n1&&n4==n2&&n4==n3){
        cout <<"Todos los numeros coinciden" << endl;
    }
    else if (n4==n1&&n4==n2){
        cout <<"el numero ingresado coincide con "<<n1<<" y "<<n2<<" " << endl;
    }
    else if (n4==n2&&n4==n3){
        cout <<"el numero ingresado coincide con "<<n2<<" y "<<n3<<" " << endl;
    }
    else if (n4==n1&&n4==n3){
        cout <<"el numero ingresado coincide con "<<n1<<" y "<<n3<<" " << endl;
    }
    else if (n4==n1){
        cout <<"el numero ingresado coincide con "<<n1<<" "<< endl;
    }
    else if (n4==n2){
        cout <<"el numero ingresado coincide con "<<n2<<" "<< endl;
    }
    else if (n4==n3){
        cout <<"el numero ingresado coincide con "<<n3<<" "<< endl;
    }        
    else{
        cout <<"El numero ingresado no coincide con ninguno";
    }   
    return 0;
}
