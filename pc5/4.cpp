#include <iostream>
#include <iomanip>
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
	
double monto=0;

fstream archivo2("ventas.dat",ios::in|ios::out|ios::binary|ios::ate);

streamsize T=archivo2.tellg();
int n=T/sizeof(Venta);//numero de registros;
cout<<"numero de registros"<<n<<endl;
archivo2.seekg(0,ios::beg);

Venta *B=new Venta[n];

for(int i=0;i<n;i++){//lectura en pantalla
	archivo2.read(reinterpret_cast<char*>(&B[i]),sizeof(Venta));
	cout<<"ID de venta: "<<	B[i].idVenta<<endl;
	cout<<"ID de vendedor: "<<B[i].idVendedor<<endl;
	cout<<"ID de producto: "<<B[i].idProducto<<endl;
	cout<<"Cantidad: "<<B[i].cantidad<<endl;
	cout<<"Precio unitario: "<<B[i].precioUnitario<<endl;}

for(int i=0;i<n;i++){
	monto=monto + ((B[i].cantidad)*(B[i].precioUnitario));
}	
Venta mayorRecaudacion =B[0];
	for(int j=1;j<n;j++){
		if((B[j].cantidad*B[j].precioUnitario)>(mayorRecaudacion.cantidad*mayorRecaudacion.precioUnitario)){
		mayorRecaudacion=B[j];
}}




//para  el registro txt
ofstream A2("reporteVentas.txt");

if(! A2){
    cout<<"no se abrio el archivo"<<endl;
    return 1;
}

A2<<"\t REPORTE GENERAL DE VENTAS"<<endl;

A2<<"Total de registros: "<<n<<endl;
A2<<"Monto total vendido: "<<fixed<<setprecision(2)<<monto<<endl;//libreria iomanip
A2<<"datos del vendedor con mayor recaudación: "<<endl;
	A2<<"ID de venta: "<<	mayorRecaudacion.idVenta<<endl;
	A2<<"ID de vendedor: "<<mayorRecaudacion.idVendedor<<endl;
	A2<<"ID de producto: "<<mayorRecaudacion.idProducto<<endl;
	A2<<"Cantidad: "<<mayorRecaudacion.cantidad<<endl;
	A2<<"Precio unitario: "<<mayorRecaudacion.precioUnitario<<endl;


 A2<<" Recaudación: "<<(mayorRecaudacion.cantidad)*(mayorRecaudacion.precioUnitario) <<endl;
 

Venta mayorCantidad = B[0]; 
	for(int j=1;j<n;j++){
		if((B[j].cantidad)>(mayorCantidad.cantidad)){
		mayorCantidad=B[j];}
}

A2<<"datos del Producto mas vendido: "<<endl;
	A2<<"ID de venta: "<<	mayorCantidad.idVenta<<endl;
	A2<<"ID de vendedor: "<<mayorCantidad.idVendedor<<endl;
	A2<<"ID de producto: "<<mayorCantidad.idProducto<<endl;
	A2<<"La mayor cantidad es:  "<<endl;
	A2<<"Cantidad: "<<mayorCantidad.cantidad<<endl;
	A2<<"Precio unitario: "<<mayorCantidad.precioUnitario<<endl;

	A2<<"La mayor cantidad es:  "<<mayorCantidad.cantidad<<endl;
A2.close();

delete[] B;
    return 0;
}
