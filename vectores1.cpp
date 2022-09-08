#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

#define N 3 // número de fuerzas
#define PI 3.141592654 // Definición de Pi

struct fuerza{
    float eje_x;
    float eje_y;
};

float grados2Radianes(float angle){
    return (angle*PI/180);
}

fuerza getComponentes(float mag, float angle){
    fuerza f;
    angle = grados2Radianes(angle);
    f.eje_x = mag*cos(angle);
    f.eje_y = mag*sin(angle);
    return f;
}

float magnitudFuerza(fuerza f){
    return sqrt(pow(f.eje_x,2)+pow(f.eje_y,2));
}

fuerza getFuerza(){
    fuerza salida;
    float mag, angle;
    cout << "Ingrese la magnitud de la fuerza: ";
    cin >> mag;
    cout << "Ingrese el ángulo de la fuerza: ";
    cin >> angle;
    salida = getComponentes(mag,angle);
    return salida; 
}

int main(){

    fuerza f[N];
    int i=0;
    while (i<N){
        f[i] = getFuerza();
        i++;
    }
    fuerza total;

    for(i=0;i<N;i++){
        total.eje_x += f[i].eje_x;
        total.eje_y += f[i].eje_y;
    }
    cout << "La magnitud del vector fuerza total es "<< magnitudFuerza(total) << "[N]" << endl;

    return 0;
}
