#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

struct performance{
string nombre;
int PG; //partidos ganados
int PE; //partidos empatados
int PP; //partidos perdidos
int GF; //goles a favor
int GC; //goles en contra
int puntajeTotal;
int DG ; //diferencia de goles
float rendimiento;
int *datos;}; // % de puntos obtenidos sobre el total posible


void completarDatos(performance*selecciones){
for (int j = 0; j < 5; j++) {
//Inicializar en cero 
selecciones[j].PG = selecciones[j].PE =selecciones[j].PP = 0; 
selecciones[j].GF = selecciones[j].GC = 0;}

for(int j=0;j<5;j++){//5 selecciones
selecciones[j].nombre = "SELECCION " + to_string(j + 1);;
for(int i=0;i<100;i++){
int favor =rand()%6;//RANGO DE 0 A 5 PARA GOLES A FAVOR Y  EN CONTRA
int contra =rand()%6;
selecciones[j].GF +=favor;//RANGO DE 0 A 5 PARA GOLES A FAVOR Y  EN CONTRA
selecciones[j].GC +=contra;
if(favor>contra){  //partidos ganados
selecciones[j].PG+=1;}
if(favor==contra){   //partidos empatados
selecciones[j].PE+=1;}
if(favor<contra){	//partidos perdidos
selecciones[j].PP+=1;}}
selecciones[j].DG = selecciones[j].GF-selecciones[j].GC;
selecciones[j].puntajeTotal= selecciones[j].PG *3 + selecciones[j].PE ;
selecciones[j].rendimiento= (selecciones[j].puntajeTotal*100.0)/(100*3);
}};

void imprimirDatos(performance*selecciones){
for(int j=0;j<5;j++){	
cout<<selecciones[j].nombre<<": "<<selecciones[j].PG<<  "   " << selecciones[j].PE <<"   "
<<selecciones[j].PP<<"   "<<selecciones[j].GF<<"    "<< selecciones[j].GC << "    "<<
selecciones[j].DG<<"     "<<selecciones[j].puntajeTotal<<"    "<<selecciones[j].rendimiento<<endl;
		
}};

void imprimirCampeon(performance*selecciones){
	int m;
	m=5;
	for(int j=0;j<m-1;j++){
	for(int i=0;i<m-j-1;i++){//5 selecciones
		if(selecciones[i].puntajeTotal<selecciones[i+1].puntajeTotal){
			performance T=selecciones[i];// para ordenar la estructura la variable temporal tipo permormance
			selecciones[i]=selecciones[i+1];
			selecciones[i+1]=T;
		}}}
		cout<<"campeon: "<<selecciones[0].nombre<<": "; //el mayor que en la posicion 0
		cout<<" |  puntaje: "<<selecciones[0].puntajeTotal<<" | "<<
		"DG:  "<< selecciones[0].DG<< "|  Rendimiento: "<<selecciones[0].rendimiento;}


int main(){	
srand(time(NULL)); //generar numeros aleatorios
//reserva de memoria para 5 selecciones , pueden se n seleciones.
performance *selecciones = new performance[5]; 

cout<<"seleccion "<<"  "<< "PG    " << "PE    " <<"PP    "<<
 "GF    " << "GC    " <<"DG    "<< "pts    "<< "Rend(%)    "<<endl;
completarDatos(selecciones);
imprimirDatos(selecciones);
imprimirCampeon(selecciones);
delete[] selecciones; //liberacion de memoria
    return 0;
}