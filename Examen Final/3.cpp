#include <iostream>
#include <fstream>
using namespace std;

struct Proyecto {
int id;
char titulo[40];
double presupuesto;
int duracionMeses;
};

//Esto nos va permitir tener ordenado el proyecto (orden decreciente)
void ordenar(Proyecto*ptr, int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(ptr[j].presupuesto<ptr[j+1].presupuesto){
				Proyecto t=ptr[j];
				ptr[j]=ptr[j+1];
				ptr[j+1]=t;	}}}};


//Con esto creamos el archivo				
void crearArchivo(int N){
	//reserva de memoria para N estructuras, almacenamos datos en N estructura(N proyectos)
	// y escribimos eso en un archivo binario
	Proyecto *P=new Proyecto[N];
	//almacenar datos en N estructuras
	for(int i=0;i<N;i++){
		cout<<"Proyecto"<<i+1<<endl;
		cout<<"ID: ";
		cin>>P[i].id;
		cin.ignore();
		cout<<"titulo: ";
		cin.getline(P[i].titulo,40);
		cout<<"Presupuesto: ";
		cin>>P[i].presupuesto;
		cout<<"Duracion en meses: ";
		cin>>P[i].duracionMeses;}
//ordenar las N estructuras
ordenar(P,N);
ofstream A("proyectos.dat",ios::out|ios::binary);
//Escribir las N estructuras en el archivo
for(int i=0;i<N;i++){
A.write(reinterpret_cast<char*>(&P[i]),sizeof(Proyecto));}
A.close();
//liberación de memoria
delete[] P;}

//Esto nos permite insertar un nuevo proyecto en el archivo binario 
//de forma ordenada y sin duplicarse su id
void insertarProyecto(const Proyecto &nuevo){
	fstream A("proyectos.dat",ios::binary|ios::in|ios::out);
	if(! A){
		cout<<"no se abrio el archivo"<<endl;
		return;}
		
	A.seekg(0,ios::end);
	int n=A.tellg()/sizeof(Proyecto); //calcular cuantos proyectos se tiene
	A.seekg(0,ios::beg);
	
	//leer n proyectos
	Proyecto*proyectos=new Proyecto[n];
	for(int i=0;  i<n;  i++){
		A.read(reinterpret_cast<char*>(&proyectos[i]),sizeof(Proyecto));}
	
	//verificar si el id nuevo ya se tiene regsitrado (evita duplicado)
	for(int i=0;i<n;i++){
		if(proyectos[i].id==nuevo.id){
			cout<<"El id del proyecto ingresado ya existe: "<<nuevo.id
			<<" no se inserto ( evitar duplicado )"<<endl;
			delete[] proyectos;
			A.close();
			return; 
		}
	}
			
	//encontrar posición de inserción
	int pos=n;
		for(int i=0;i<n;i++){
		if(nuevo.presupuesto > proyectos[i].presupuesto){
			pos=i;
			break;}
		}
		
		//desplazar registros hacia adelante en el archivo
		A.clear();
		for(int i=n;i>pos;i--){
			A.seekp(i*sizeof(Proyecto),ios::beg);
			A.write(reinterpret_cast<char*>(&proyectos[i-1]),sizeof(Proyecto));}
		//escribir nuevo proyecto
			A.seekp(pos*sizeof(Proyecto),ios::beg);
			A.write(reinterpret_cast<const char*>(&nuevo),sizeof(Proyecto));
		delete[] proyectos;
		A.close();}


		//dentro de la funcion abrimos el archivo que vamos a utilizar ,
		//se puede generalizar esto para varios archivos 
		void mostrarTodos(){
			ifstream A("proyectos.dat",ios::binary);
			Proyecto p;
				cout<< "Lista de todos los proyectos registrados: "<<endl;
			while(A.read(reinterpret_cast<char*>(&p),sizeof(Proyecto))){
				cout<<"ID: "<<p.id<<endl;
				cout<<"titulo: "<<p.titulo<<endl;
				cout<<"presupuesto: "<<p.presupuesto<<endl;
				cout<<"Duracion: "<<p.duracionMeses<<" meses "<<endl;}
			A.close();}


int main(){
int N;
cout<<"cuantos proyectos desea ingresar"<<endl;
cin>>N;
//para lectura y escritura
//fstream("proyectos.dat",ios::in|ios::out|ios::binary);
//Proyecto *P= new Proyecto [N];
//para escribir el binario
//A.write(reinterpret_cast<char*>(&P),sizeof(Proyecto));
//seek(0,ios::beg); //devuelve el puntero al inicio
//para escritura
//ofstream("proyectos.dat",ios::in|ios::out|ios::binary);

crearArchivo(N);
Proyecto nuevo;
cout<<"Para ingresar un nuevo proyecto ingrese su id: (no se permite id que ya este registrado)  "<<endl;
cout<<"id: ";
cin>>nuevo.id;
cin.ignore();//por el uso de cin.getline
//guardar los datos del nuevo proyecto
cout<<"titulo: ";
cin.getline(nuevo.titulo,40);//usamos cin.ignore()
cout<<"Presupuesto: ";
cin>>nuevo.presupuesto;
cout<<"Duracion en meses:  ";
cin>>nuevo.duracionMeses;
insertarProyecto(nuevo);
//mostrar el archivo binario que contiene los proyectos
mostrarTodos(); //utilizamos 1 solo archivo por eso es suficiente sin parametros 

    return 0;
}