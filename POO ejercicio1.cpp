#include <iostream>
#include <stdlib.h>
using namespace std;

class Persona{
    private: //atributos -> caracteristicas abstractas 
        int edad;
        string nombre;
    public: //metodos
        Persona(int, string); //constructor
        void comer();
        void estudiar(); 
};
//constructor iniciando atributos 
Persona::Persona(int _edad,string _nombre){
    edad = _edad;
    nombre = _nombre;
}

void Persona::comer(){
    cout<<"Soy "<<nombre<<" y estoy comiendo unas empanadas"<<endl;
}
void Persona::estudiar(){
    cout<<"Soy "<<nombre<<" y estoy estudiando POO y tengo "<<edad<<endl;

}
int main(){
    Persona p1 = Persona(19, "Matias");
    Persona p2(23, "Sofia");
    Persona p3(33,"Ignacio");

    p1.comer();
    p2.estudiar();
    p3.comer();
    p3.estudiar();

    return 0;
}
