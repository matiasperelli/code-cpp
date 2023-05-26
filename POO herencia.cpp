#include<iostream>
#include<stdlib.h>
using namespace std;

class Persona{
    private: //atributos
        string nombre;
        int edad;
    public: //metodos
        Persona(string,int); //constructor
        void mostrarPersona(); //metodo para mostrar datos
};

class Empleado : public Persona{ //empleado es clase hija de la clase persona
                                // puedo acceder a todo lo publico de la clase padre
    private:
        double sueldo;
        int ID;
    public:
        Empleado(string, int, double, int); //consturctor clase empleado
        void mostrarEmpleado();
};

//constructor de la clase persona (clase padre)
Persona::Persona(string _nombre,int _edad){
    nombre = _nombre;
    edad = _edad;
}
Empleado::Empleado(string _nombre, int _edad, double _sueldo, int _ID) : Persona(_nombre, _edad){
    sueldo = _sueldo;
    ID = _ID;
}

void Persona::mostrarPersona(){
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Edad: "<<edad<<endl;
}

void Empleado::mostrarEmpleado(){
    mostrarPersona();
    cout<<"Sueldo: "<<sueldo<<endl;
    cout<<"ID de identificacion: "<<ID<<endl;    
}

int main(){
    Empleado e1("Matias",19,390.555,873);

    e1.mostrarEmpleado();

    return 0;
}
