#include <iostream>
#include <stdlib.h>
using namespace std;

class Tiempo{
    private: //atributos 
        int hora,min,seg;
    public: //metodos
        Tiempo(int,int,int); //constructor 1
        Tiempo(long); //constructor 2 
        void mostrar_tiempo();
};
//constructor 1 iniciando atributos 
Tiempo::Tiempo(int _hora,int _min,int _seg){
    hora = _hora;
    min = _min;
    seg = _seg;
}
//constructor 2 iniciando atributos 
Tiempo::Tiempo(long tiempo){
    hora = int(tiempo % 100); //solo el dia
    min = int(tiempo / 100 % 100); //solo el mes
    seg = int(tiempo/10000); //solo el año

}
void Tiempo::mostrar_tiempo(){
    cout<<"La hora es: "<<hora<<":"<<min<<":"<<seg<<endl;
}


int main(){
    Tiempo t1(11,17,45);
    Tiempo t2(111811);
    
    t1.mostrar_tiempo();
    t2.mostrar_tiempo();

    return 0;
}
