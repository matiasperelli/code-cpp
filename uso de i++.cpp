#include <iostream>
#include <conio.h> //uso de la libreria "conio.h" para que los programas no se cierren inmediatamente

using namespace std;

int main() {
    int i;
    
    i=1; // uno porque queremos hacer que sume desde ese numero
    
    while(i<=10){
        cout << i << endl;
        i++; // aumenta el valor de "i" sumando uno
    }
    
    getch(); //getch para usar la libreria
    return 0;
}
