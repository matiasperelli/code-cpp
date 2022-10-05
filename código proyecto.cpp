#include <iostream>

using namespace std;

int main() {
    cout <<"Calculadora de numeros complejos" << endl;
    cout <<"\nIngrese datos del primer numero complejo: " << endl;
    
    int real1{};
    cout <<"Parte real: "; cin >> real1;
    int imaginaria1{};
    cout <<"Parte imaginaria: "; cin >> imaginaria1;
    
    cout <<"\t\nIngrese datos del segundo numero complejo: " << endl;
    int real2{};
    cout <<"Parte real: "; cin >> real2;
    int imaginaria2{};
    cout <<"Parte imaginaria: "; cin >> imaginaria2;
    
    int opcion{};
    
    cout <<"\n1 Suma, 2 Resta, 3 Multiplicacion "; cin >> opcion;
    
    int real_resultado{};
    int imaginario_resultado{};
    
    if ( opcion == 1 ) {
    real_resultado = real1 + real2;
    imaginario_resultado = imaginaria1 + imaginaria2;
  } else if ( opcion == 2 ) {
    real_resultado = real1 - real2;
    imaginario_resultado = imaginaria1 - imaginaria2;
  } else if ( opcion == 3 ) {
    real_resultado = real1*real2 - imaginaria1*imaginaria2;
    imaginario_resultado = imaginaria1*real2 + real1*imaginaria2;
  } else {
    return 0;
  }

  if ( imaginario_resultado == 0 ) {
    std::cout << real_resultado << std::endl;
  } else if ( real_resultado == 0 ) {
    if ( imaginario_resultado == 1 ) {
      std::cout << "i" << std::endl;
    } else if ( imaginario_resultado == -1 ) {
      std::cout << "-i" << std::endl;
    } else {
      std::cout << imaginario_resultado << "i" << std::endl;
    }
  } else {

    if ( imaginario_resultado <= -2 ) {
      std::cout << real_resultado << " - " << (-imaginario_resultado) << "i" << std::endl;
    } else if ( imaginario_resultado == -1 ) {
      std::cout << real_resultado << " - i" << std::endl;
    } else if ( imaginario_resultado == 1 ) {
      std::cout << real_resultado << " + i" << std::endl;
    }  else {
      std::cout << real_resultado << " + " << imaginario_resultado << "i" << std::endl;
    }
  }

  return 0;
}
