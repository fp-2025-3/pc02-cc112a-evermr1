#include <iostream>
#include <fstream>
using namespace std;

struct Empleado{
    int id; // inicia con 1
    char nombre[30]; //verificando solo hay 20, el 21 muestra error por que no hay datos ahí
    double salario;};

int main(){
    int busqueda;//id que buscamos, lo vamos a comparo con id mas adelante

    fstream A("empleados.dat",ios::in|ios::out|ios::binary);
    cout<<"ingrese el ID De empleado (1,2,3,..N): ";
    cin>>busqueda;

	streampos P=(busqueda-1)*sizeof(Empleado);
	//el -1 es por que se inicia desde la posición 0
	//el sizeof nos da el tamaño en bytes de la estrcutura
	
	A.seekg(P);//muevo el puntero de lectura
	//ubica el puntero en la posicion P
	
	Empleado E;//declaramos una variable tipo estructura
	
	A.read(reinterpret_cast<char*>(&E),sizeof(Empleado));
	//se convierte esa estructura a tipo char para que read trabaje con bytes
	
	if(!A){
	cout<<"error al leer el archivo"<<endl;
	return 1;}//verificacion de lectura del archivo
		
	//mostramos datos de la posición P del archivo binario	
	cout<< "\t datos del empleado:"<<endl;
	cout<<"ID: "<< E.id<<endl;
    cout<<"nombre: "<<E.nombre<<endl;
    cout<<"salario: "<<E.salario<<endl;	
	
	int opcion;
	//interacción con el usuario para realizar modificacion
	cout<<"Si desea modificar ingrese 1 : "<<endl;
	cin>> opcion;
	if(opcion==1){
		float nuevoSalario;	
		cout<<"ingrese el nuevo salario: "<<endl;
		cin>>nuevoSalario;
		E.salario=nuevoSalario;
		//modifico el dato salario de la variable tipo estructura E 
		A.seekp(P);//muevo el puntero de escritura
	
	A.write(reinterpret_cast<char*>(&E),sizeof(Empleado));
	//Escribo o modifico en el archivo binario en la posicion P
		if(!A){
			cout<<"el archivo no se actualizo"<<endl;
			return 1;}//verifico si se actualizo la modificación
			cout<<"El archivo se actualizo correcctamente"<<endl;}
		A.close();	//cierro el archivo	
    return 0;
}