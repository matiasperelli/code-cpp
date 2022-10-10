#include <iostream>

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
    
    cout <<"\n1 Suma, 2 Resta, 3 Multiplicacion, 4 División "; cin >> opcion;
    
    float real_resultado{};
    float imaginario_resultado{};
    
    if ( opcion == 1 ) {
    real_resultado = real1 + real2;
    imaginario_resultado = imaginaria1 + imaginaria2;
  } 
  else if ( opcion == 2 ) {
    real_resultado = real1 - real2;
    imaginario_resultado = imaginaria1 - imaginaria2;
  } 
  else if ( opcion == 3 ) {
    real_resultado = real1*real2 - imaginaria1*imaginaria2;
    imaginario_resultado = imaginaria1*real2 + real1*imaginaria2;
  } 
  else if ( opcion == 4 ) {
     real_resultado = (real1 * real2 + imaginaria1 * imaginaria2) / (real2 * real2 + imaginaria2 * imaginaria2);
     imaginario_resultado = (imaginaria1 * real2 - real1 * imaginaria2) / (real2 * real2 + imaginaria2 * imaginaria2);
     cout.precision(2);
    cout << real_resultado <<" + (" << imaginario_resultado << ")i" << endl;
  }
  else {
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
