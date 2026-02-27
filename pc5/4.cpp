#include <iostream>
#include <fstream>
using namespace std;

struct Venta {
    int idVenta;
    int idVendedor;
    int idProducto;
    int cantidad;
    double precioUnitario;
};



int main(){
int posicion;
Venta venta1;

ifstream archivo2("ventas.dat",ios::binary);

if(! archivo2){
    cout<<"no se abrio el archivo"<<endl;
    return 1;
}

archivo2.seekg(posicion*sizeof(venta1.idProducto),ios::beg); 

    
    archivo2.read((char*)&venta1,sizeof(venta1.idProducto));



    return 0;
}




    
 /*   if (archivo.is_open()) {
        // para escribir 
        archivo.write(reinterpret_cast<char*>(&numero), sizeof(numero));
        archivo.close();
    }*/
