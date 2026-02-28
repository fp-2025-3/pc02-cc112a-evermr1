#include <iostream>
#include <fstream>
using namespace std;

struct estudiante{
    int codigo=1000;
    string nombre;    
    int nota1;
    int nota2;
    int nota3;
    float suma=0;
    float promedio=0;
    string condicion;
};//tambien se podria implementar una estructura para almacenar 
//las notas de cada estudiante y su respectivo promedio

int main(){
ifstream A1("notas.txt");
string L;
int a=0;//contador de alumnos
int b=0;//contador de aprobados
int f=0;//contador de desaprobados por reglamento, nota <5
float sumaTotal=0;
float promedioTotal=0;

if(!A1){
    cout<<"no se abrio el archivo"<<endl;
    return 1;}

if(A1.is_open()){	
while(getline(A1,L)){	
	cout<<L<<endl; //se muetra la lectura 
	a++;}//contador de total de alumnos 
	}

A1.clear(); //limpiar estado de error
 A1.seekg(0, ios::beg); //regresar al inicio de archivo

estudiante *E=new estudiante[a]; //Reserva de memoria

//al guardar directo en una variable int
// ya no es necesario  stoi para ocnvertir a entero las notas
for(int i=0;i<a;i++){
	A1>>E[i].codigo>>E[i].nombre>>E[i].nota1>>E[i].nota2>>E[i].nota3;
	E[i].suma=E[i].nota1+E[i].nota2+E[i].nota3;
	E[i].promedio=E[i].suma/3;
}

for(int i=0;i<a;i++){
sumaTotal+=E[i].promedio;}  // suma de promedios
promedioTotal=sumaTotal/a;  // promedio total

for(int d=0;d<a;d++)
if(E[d].promedio>=10){
E[d].condicion= "aprobado";
b++;}//contador de aprobados


for(int d=0;d<a;d++)
if(E[d].promedio<10){
E[d].condicion= "desaprobado";
}//contador de aprobados

ofstream A2("reporteAlumnos"); //GENERACION DE REPORTE EN en un archivo txt


for(int d=0;d<a;d++){
if((E[d].nota1<5) || (E[d].nota3<5) || (E[d].nota3<5)){
E[d].condicion="desaprobado por reglamento";
f++;}}


A2<<" \t REPORTE DE ESTUDIANTES"<<endl;
A2<<"CODIGO "<< " NOMBRE   "<<"  PROMEDIO  "<<"  CONDICION "<<endl;
for(int i=0;i<a;i++){
	A2<<E[i].codigo <<"\t"<<E[i].nombre<<"\t "<<E[i].promedio<<"  \t         "<<E[i].condicion<<endl;}

    
//ordenamiento de mayor nota  a menor nota 
for(int i=0;i<a;i++){
	for(int j=0;j<a-i-1;j++){
		if (E[j].promedio<E[j+1].promedio){
		estudiante Temp=E[j];
		E[j]=E[j+1];
		E[j+1]=Temp;
	}
} } 



A2<<endl;
A2<<endl;
A2<<endl;

A2<<"Total de estudiantes: "<<a<<endl;
A2<<"Aprobados: "<<b<<endl;
A2<<"Desaprobados sin incluir a los desaprobados por reglamento: "<<a-b-f<<endl;
A2<<"Desaprobados solo por reglamento: "<<f<<endl;

A2<<"promedio general del curso:  "<<promedioTotal<<endl;
A2<<"Estudiante con mayor nota promedio:  "<<E[0].nombre<<"  nota:"<<E[0].promedio<<endl;
A2<<"Estudiante con menor nota promedio:  "<<E[a-1].nombre<<"  nota:"<<E[a-1].promedio<<endl;

A1.close();
A2.close();
delete[] E;
    return 0;
}
