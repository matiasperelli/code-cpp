#include <iostream>
using namespace std;

int main(){
    
    float a,b, resultado = 0;
    
    cout <<"Ingrese un numero: "; cin >> a;
    cout <<"Ingrese otro numero: "; cin >> b;
    
    resultado = (a/b)+1;
    
    cout.precision(3);
    cout <<"El resultado es: " << resultado << endl;

    return 0;
}
