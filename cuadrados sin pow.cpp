#include<iostream>
using namespace std;

int main () { 
    int x, y, resultado = 1;

    cout<<"Base: "; cin>>x; cout<<"\nExponente: "; cin>>y;

    for(int i = 0; i < y; i++) { resultado = resultado*x; } 
    cout<<"El resultado es: "<<resultado<<endl;
return 0; 
    
} 
