#include <iostream>
#include <stdlib.h>//uso de la libreria "stdlib.h" para que los programas no se cierren inmediatamente

using namespace std;

int main() {
     int i;
     
     i = 10;
     
     do{
         cout << i << endl;
         i--; //decrementa el iterador de uno en uno
     }while(i>=1);
    
    system("pause"); //system para usar la libreria
    return 0;
}
