#include <iostream>
#include <math.h> 

using namespace std;

int main() {
    float co, ca, suma= 0, hipotenusa = 0;
    
    cout <<"Ingrese valor de cateto opuesto: "; cin >> co;
    cout <<"Ingrese valor de cateto adyacente: "; cin >> ca;
    
    suma = pow(co,2) + pow(ca,2);
    hipotenusa = sqrt(suma);
    
    cout.precision(2);
    cout <<"La hipotenusa vale: " << hipotenusa << endl;
    
    return 0;
}
