#include<iostream>
#include<stdlib.h>
using namespace std;

class Punto{
    private: //Atributos
        int x,y;
    public: //metodos
        Punto(); //constructor
        void setPunto(int,int);
        int getPuntoX(); //metodo get, muestra la informacion que contiene nustra variable
        int getPuntoY(); //metodo get, muestra la informacion que contiene nustra variable
};

Punto::Punto(){
}

//metodo set, establecer valores a los atributos
void Punto::setPunto(int _x, int _y){
    x = _x;
    y = _y;
}

int Punto::getPuntoX(){
    return x;
}

int Punto::getPuntoY(){
    return y;
}

int main(){
    Punto p1;

    p1.setPunto(2,3);
    cout<<p1.getPuntoX()<<","<<p1.getPuntoY()<<endl;

    return 0;
}
