#include <iostream>
using namespace std;

 struct producto{
        int codigo;
        char*nombre;
        double precio;
        int stock;
    };

void crearProducto(int codigo, const char*nombre, double precio , int stock ){
//reserva de memoria dinamica para el nombre  
    char *nombre = new char [20];

};


producto* crearInventario(int n){

      int *product =new int [n];
    //reserva memoria n productos
    //inicializa cada producto llamando a crearProducto
    //retorna puntero al arreglo dinamico
};

producto *buscarProducto(Producto*inventario,int n;int codigoBuscado){
    //retorna un puntero al producto encontrado
    //si no existe retornar nulltpr
    for(int i=0;i<n;i++){
    if(codigobuscado == *inventario){
        cout<<"se encontro el producto"<<endl;
        return *inventario;
    }}
    else (if (codigobuscado!=*inventario){ return nullptr;})
}



int main(){
   

    return 0
}