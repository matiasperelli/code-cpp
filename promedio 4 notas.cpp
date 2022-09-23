#include <iostream>

using namespace std;

int main() {
    int n1, n2, n3, n4, resultado = 0;
    
    cout <<"Ingrese la nota de alumno 1: "; cin >> n1;
    cout <<"Ingrese la nota de alumno 2: "; cin >> n2;
    cout <<"Ingrese la nota de alumno 3: "; cin >> n3;
    cout <<"Ingrese la nota de alumno 4: "; cin >> n4;

    resultado = ((n1+n2+n3+n4)/4);

    cout <<"El promedio de notas entre los 4 alumnos es: " << resultado << endl;
    
    return 0;
}
