#include <iostream>
using namespace std;

struct item{
    char *descripcion;//memoria dinamica
    int cantidad;
    double precioUnitario;
}

struct pedido{
    int numeroPedido;
    char* nombreCliente;
    item*items;
    int cantidadItems;
};

//a
pedido *crearPedido(int  numero,const char* cliente ,int cantidadItems){

};

//b
double calcularTotal(const pedido *p){

    for(int i=0;i<n ;i++)
}


//c
item*itemMasCaro(pedido*p);

void liberarPedido(pedido*p){
    for(int i=0;i<n;i++){
        delete[] p;
        p++;
    }


};


int main(){


liberarPedido(p);

    return 0;
}