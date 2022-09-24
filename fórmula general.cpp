#include <iostream>
#include <math.h> 

using namespace std;

int main() {
    float a, b, c, discriminante = 0, raiz1 = 0, raiz2 = 0;
    
    cout <<"Se tiene una expresion de la siguiente manera: ax^2 + bx + c";
    cout <<"\nIngrese el valor de a: "; cin >> a;
    cout <<"Ingrese el valor de b: "; cin >> b;
    cout <<"Ingrese el valor de c: "; cin >> c;
    
    discriminante = (pow(b,2)- 4*a*c);
    raiz1 = (-b + sqrt(discriminante))/(2*a);
    raiz2 = (-b - sqrt(discriminante))/(2*a);
    
    if(discriminante < 0){
        cout <<"Las raices son complejas";
    }
    else{
    cout.precision(2);
    cout <<"La raiz suma de la ecuación: " << raiz1 << endl;
    cout <<"La raiz resta de la ecuaciónes: "<< raiz2 << endl;
    }
    
    return 0;
}
