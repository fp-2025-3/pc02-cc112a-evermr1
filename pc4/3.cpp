#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

 struct producto{
        int codigo;
        char*nombre;
        double precio;
        int stock;
    };

producto crearProducto(int codigo, const char*nombre, double precio , int stock ){
producto p;
//reserva de memoria dinamica para el nombre 
p.nombre = new char [strlen(nombre)+1]; //+1 para incluir '\0' al final , strlen :longitud de la cadena
strcpy(p.nombre,nombre);
p.codigo=codigo;
p.precio=precio;
p.stock=stock;

return p;
};

producto* crearInventario(int n){
producto *inventario= new producto[n]; //reserva de memoria n productos
   for(int i=0;i<n;i++){ //inicializa cada producto llamando a crearProducto
    
    inventario[i]= crearProducto(100+i,"producto",rand()%1000 ,rand()%100 );}
	return inventario;//retorna puntero al arreglo dinamico0
};

producto *buscarProducto(producto*inventario,int n,int codigoBuscado){
    //retorna un puntero al producto encontrado
    //si no existe retornar nulltpr
    for(int i=0;i<n;i++){
    if(codigoBuscado == inventario[i].codigo){
        cout<<"se encontro el producto"<<endl;
        return &inventario[i];}}
    return nullptr;}

void liberarInventario(producto*inventario,int n){
	//liberacion de memoria de los nombres de los productos
	for(int i=0;i<n;i++){
		delete[] inventario[i].nombre;}
	//liberacion de memoria del inventario (productos)
	delete[] inventario;
}


int main(){
	srand(time(NULL));
	int n;
	n=10;
	producto*inventario=crearInventario(n);	
	//INVENTARIO
for(int i=0;i<n;i++){
	cout<<"CODIGO:  "<<inventario[i].codigo;
	cout<<",   "<< "NOMBRE:  "<<inventario[i].nombre<<" " <<i+1;
	cout<<",   "<<"PRECIO:  "<<inventario[i].precio;
	cout<<",   "<<"STOCK:  "<<inventario[i].stock<<endl;}	
   
int codigoBuscado=rand()%15 +100;// codigo de producto aleatorio
cout<<"buscar el producto con codigo: "<< codigoBuscado<<endl;
producto* encontrado = buscarProducto(inventario,n,codigoBuscado);

if(encontrado==nullptr){
	cout<<"PRODUCTO NO ENCONTRADO !! "<<endl;}
	else{
		cout<<"PRODUCTO ENCONTRADO"<<endl;}

    return 0;
}