#include <iostream>
#include <conio.h>
using namespace std;

struct complejo{
    float real, imaginario;
}z1,z2;

void datos(); //solicitar datos
complejo suma(complejo,complejo);
void resultado(complejo);

int main(){
    datos();
    complejo x = suma(z1,z2); //resultado de la suma de ambas partes
    resultado(x);
    getch();
    
    return 0;
    }

void datos(){
    cout <<"Ingrese datos del primer numero complejo: " << endl;
    cout <<"parte real: "; cin >> z1.real;
    cout <<"Parte imaginaria: "; cin >> z1.imaginario;
    
    cout <<"\nIngrese datos del segundo numero complejo: " << endl;
    cout <<"parte real: "; cin >> z2.real;
    cout <<"Parte imaginaria: "; cin >> z2.imaginario;
}

complejo suma(complejo z1,complejo z2){
    z1.real += z2.real;
    z1.imaginario += z2.imaginario;
    
    return z1;
}

void resultado(complejo x){
    cout <<"\nLa suma es: " << x.real << "+" << x.imaginario << "i" << endl;
}
