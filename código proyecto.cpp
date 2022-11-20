#include <iostream>

using namespace std;

class NumeroComplejo {
    
    public:
        double real;
        double imaginario;
        
        void suma(NumeroComplejo a, NumeroComplejo b) {
            
            double real = a.real + b.real;
            double imaginario = a.imaginario + b.imaginario;
            NumeroComplejo z = NumeroComplejo(real, imaginario);
            cout << z.real << "+" << z.imaginario << "i" << endl;
        }
         
        void resta(NumeroComplejo a, NumeroComplejo b) {
            
            double real = a.real - b.real;
            double imaginario = a.imaginario - b.imaginario;
            NumeroComplejo z = NumeroComplejo(real, imaginario);
            cout << z.real << "-" << z.imaginario << "i" << endl;
        }
         
        void multiplicacion(NumeroComplejo a, NumeroComplejo b) {
            
            double real = a.real * b.real - a.imaginario * b.imaginario;
            double imaginario = a.imaginario * b.real + a.real * b.imaginario;
            NumeroComplejo z = NumeroComplejo(real, imaginario);
            cout << z.real << "+" << z.imaginario << "i" << endl;
        }
        void division(NumeroComplejo a, NumeroComplejo b) {
            
            double real = (a.real * b.real + a.imaginario * b.imaginario) / (b.real * b.real + b.imaginario * b.imaginario);
            double imaginario = (a.imaginario * b.real - a.real * b.imaginario) / (b.real * b.real + b.imaginario * b.imaginario);
            NumeroComplejo z = NumeroComplejo(real, imaginario);
            cout << z.real << "+" << z.imaginario << "i" << endl;
        }
            
            //El constructor
        NumeroComplejo(double real, double imaginario) {
        this->real = real;
        this->imaginario = imaginario;
    }
};

int main() {
    
    double realA;
    double imaginarioA;
    double realB;
    double imaginarioB;

    //input del usuario
    cout <<"Ingrese datos del primer numero complejo" << endl;
    cout <<"Parte real: "; cin >> realA;
    cout <<"Parte imaginaria:"; cin >> imaginarioA;
    
    cout <<"Ingrese datos del segundo numero complejo" << endl;
    cout <<"Parte real: "; cin >> realB;
    cout <<"Parte imaginaria: "; cin >> imaginarioB;
    
    float opcion;
    cout <<"\n1 Suma, 2 Resta, 3 Multiplicacion, 4 División "; cin >> opcion;

    NumeroComplejo a = NumeroComplejo(realA, imaginarioA);
    NumeroComplejo b = NumeroComplejo(realB, imaginarioB);

    //opciones a elegir 
    if( opcion == 1 ){
    a.suma(a, b); 
    }
    else if ( opcion == 2 ) {
    a.resta(a, b);
    }
    else if ( opcion == 3 ) {
    a.multiplicacion(a, b);
    }
    else if ( opcion == 4 ) {
    a.division(a, b);
    }
    else {
        return 0;
    }
    if ( imaginarioA == 0 ) {
        cout << realA << std::endl;
  } else if ( realA == 0 ) {
    if ( imaginarioA == 1 ) {
      std::cout << "i" << std::endl;
    } else if ( imaginarioA == -1 ) {
      std::cout << "-i" << std::endl;
    } else {
      std::cout << imaginarioA << "i" << std::endl;
    }
  } else {

    if ( imaginarioB <= -2 ) {
      std::cout << realB << " - " << (-imaginarioB) << "i" << std::endl;
    } else if ( imaginarioB == -1 ) {
      std::cout << realB << " - i" << std::endl;
    } else if ( imaginarioB == 1 ) {
      std::cout << realB << " + i" << std::endl;
    }  else {
      std::cout << realB << " + " << imaginarioB << "i" << std::endl;
    }
  }

    return 0;
}
