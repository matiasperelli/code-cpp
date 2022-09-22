#include <iostream>

using namespace std;

int main() {
    int edad; //"int" porque la edad es un número
    char genero[10]; // "[]" para poder colocar un máximo de caracteres
    float altura; // "float" porque va en decimal
    
    cout <<"Ingrese su edad: "; cin >> edad;
    cout <<"Ingrese su genero: "; cin >> genero;
    cout <<"Ingrese su altura en metros: "; cin >> altura;
    
    cout << "Edad: " << edad << endl; // Muestra el dato almacenado en "edad"
    cout << "Genero: " << genero << endl; // Muestra el dato almacenado en "Genero"
    cout << "Altura: " << altura << endl; // Muesta el dato almacenado en "Altura"
    
    return 0;
}
