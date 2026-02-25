#include <iostream>
#include <fstream>
using namespace std;
int main(){
int A[30];
int a=0;
int c=0;
float suma=0;
float promedio=0;

ifstream A1("notas.txt");
string L;

if(A1.is_open()){	
while(getline(A1,L)){	
	cout<<L<<endl;
	A[c]=stoi(L);
	c++;}
	A1.close();}


if(c==0){
	cout<<"no hay notas en el archivo"<<endl;
	return 1;
}//detiene toda la función main



//copiar a un arreglo con memoria exacta para almacenar c notas
int *B=new int[c];
for(int i=0;i<c;i++){
	B[i]=A[i];
suma+=B[i];}
promedio=suma/c;// al menos uno tiene que ser float para que promedio sea float

//para contar cuantos aprobaron
int *C=new int[c];
for(int e=0;e<c;e++)
if(B[e]>=10){
C[e]=B[e];
a++;}//aprobaron  a estudiantes
    
//ordenamiento de mayor a menor
for(int i=0;i<c;i++){
	for(int j=0;j<c-i-1;j++){
		if (B[j]<B[j+1]){
		int T=B[j];
		B[j]=B[j+1];
		B[j+1]=T;
	}
} } 
	
//reporte de notas en un nuevo archivo "reporte"	
ofstream A2("reporte.txt");
A2<<"\t REPORTE GENERAL "<<endl;
A2<<"Cantidad de estudiante: "<<c <<endl;
A2<<"Promedio general: "<<promedio<<endl;
A2<<"Nota mas alta: "<<B[0]<<endl;
A2<<"Nota mas baja: "<<B[c-1]<<endl;
A2<<"Cantidad de aprobados: "<<a<<endl;
A2<<"Cantidad de desaprobados: "<<c-a<<endl;	
	A2.close();
	
delete[] B;	
delete[] C;
return 0;
}