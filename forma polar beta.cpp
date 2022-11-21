#include <iostream>
#include <cmath>
#define PI 3.14159265

using namespace std;

int main() {
    cout <<"Calculadora de numeros complejos" << endl;
    cout <<"\nIngrese datos del primer numero complejo: " << endl;
    
    float real1{};
    cout <<"Parte real: "; cin >> real1;
    float imaginaria1{};
    cout <<"Parte imaginaria: "; cin >> imaginaria1;
    
    cout <<"\t\nIngrese datos del segundo numero complejo: " << endl;
    float real2{};
    cout <<"Parte real: "; cin >> real2;
    float imaginaria2{};
    cout <<"Parte imaginaria: "; cin >> imaginaria2;
    
    float opcion{};
    
    cout <<"\n1 polar(beta) "; cin >> opcion;
    
    float real_resultado{};
    float imaginario_resultado{};
    
    if ( opcion == 1 ) {
    real_resultado = sqrt(real1*real1 + imaginaria1*imaginaria1);
    imaginario_resultado = atan(imaginaria1/real1) * 180/PI;
    cout.precision(4);
    cout <<"\nPolar del primer complejo: " << endl;
    cout << real_resultado <<"[cos(" << imaginario_resultado << ")+isin(" << imaginario_resultado << ")]" << endl;
    
    real_resultado = sqrt(real2*real2 + imaginaria2*imaginaria2);
    imaginario_resultado = atan(imaginaria2/real2) * 180/PI;
    cout.precision(4);
    cout <<"\nPolar del segundo complejo: " << endl;
    cout << real_resultado <<"[cos(" << imaginario_resultado << ")+isin(" << imaginario_resultado << ")]" << endl;
  } 
  else {
    return 0;
  }

  return 0;
}
