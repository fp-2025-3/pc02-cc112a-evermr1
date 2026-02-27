#include <iostream>
#include <fstream>
using namespace std;

struct estudiante{
    int codigo;
    int nota1;
    int nota2;
    int nota3;
    float promedio;
};//tambien se podria implementar una estructura para almacenar 
//las notas de cada estudiante y su respectivo promedio




int main(){
string L;
ifstream A1("notas.txt");

int A[30];//estudiantes
int B[30];//nota promedio de estudiante
int a=0;
int b=0;
float suma=0;
float promedio=0;


if(!A1){
    cout<<"no se abrio el archivo"<<endl;
    return 1;}

if(A1.is_open()){	
while(getline(A1,L)){	
	cout<<L<<endl;
	A[a]=stoi(L);
	a++;}//contador de total de alumnos 
	A1.close();}


//sacamos el promedio por estudiante y lo guardamos en el arreglo B[i]




cout<<"cantidad de estudiantes: " << a <<endl;
cout<<"probando A[2]: " << A[2] <<endl;


ofstream A2("reporteAlumos.txt");


for(int i=0;i<a;i++){
suma+=B[i];}
promedio=suma/a;

for(int d=0;d<a;d++)
if(B[d]>=10){
b++;}//contador de aprobados
    


//ordenamiento de mayor a menor  B[]:promedio de un estudiante
for(int i=0;i<a;i++){
	for(int j=0;j<a-i-1;j++){
		if (B[j]<B[j+1]){
		int Temp=B[j];
		B[j]=B[j+1];
		B[j+1]=Temp;
	}
} } 



A2<<"REPORTE DE ESTUDIANTES"<<endl;

A2<<"Total de estudintes: "<<a<<endl;

A2<<"Aprobados: "<<b<<endl;
A2<<"Desaprobados: "<<a-b<<endl;
A2<<"promedio general del curso"<<promedio<<endl;

A2<<"Estudiante con mayor nota promedio: "<<B[0]<<endl;
A2<<"Estudiante con menor nota promedio: "<<B[a]<<endl;



A2.close();

    return 0;
}






























