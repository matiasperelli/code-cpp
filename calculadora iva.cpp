#include <iostream>

using namespace std;

int main() {
    int producto, iva = 0, total = 0;
    
    cout << "Ingrese el valor de un producto: "; cin>>producto;
    
    iva = producto * 0.19;
    total = producto + iva;

    cout <<"El producto con iva es: " <<total<<endl;


    return 0;
}
