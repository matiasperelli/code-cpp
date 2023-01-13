#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
    int numero, dato, contador = 0;
    
    srand(time(NULL)); //generar numero aleatorio
    dato = 1 + rand() % (100); //lim_inferior + ramd() % (lim_superior + 1 - lim_inferior)
    do{
        cout <<"Digite un numero: "; cin >> numero;
        
        if(numero > dato){
            cout <<"\nDigite un numero menor:\n ";
        }
        if(numero < dato){
            cout <<"Digite un numero mayor:\n";
        }
        contador++;
    }while(numero != dato);
    
    cout <<"\nFelicidades, adivinaste el numero\n";
    cout <<"Numero de intentos; " << contador << endl;
    
    return 0;
}
