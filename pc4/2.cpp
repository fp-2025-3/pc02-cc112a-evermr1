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

int main(){	
srand(time(NULL));
performance seleccion1;


seleccion1.nombre = "SELECCION 1";
//PARTIDOS DE LA SELECCION 1 :  
seleccion1.PG=0;
seleccion1.PE=0;
seleccion1.PP=0;

for(int i=0;i<100;i++){
int favor =rand()%6;//RANGO DE 0 A 5 PARA GOLES A FAVOR Y  EN CONTRA
int contra =rand()%6;
seleccion1.GF +=favor;//RANGO DE 0 A 5 PARA GOLES A FAVOR Y  EN CONTRA
seleccion1.GC +=contra;
if(favor>contra){  //partidos ganados
seleccion1.PG+=1;}
if(favor==contra){   //partidos empatados
seleccion1.PE+=1;}
if(favor<contra){	//partidos perdidos
seleccion1.PP+=1;}}
seleccion1.DG = seleccion1.GF-seleccion1.GC;
seleccion1.puntajeTotal= seleccion1.PG *3 + seleccion1.PE ;
seleccion1.rendimiento= (seleccion1.puntajeTotal*100.0)/(100*3);

cout<<"seleccion "<<"  "<< "PG    " << "PE    " <<"PP    "<<
 "GF    " << "GC    " <<"DG    "<< "pts    "<< "Rend(%)    "<<endl;
cout<<"seleccion1 "<<" "<< seleccion1.PG<<  "   " << seleccion1.PE <<"   "
<<seleccion1.PP<<"   "<<seleccion1.GF<<"    "<< seleccion1.GC << "    "<<
seleccion1.DG<<"     "<<seleccion1.puntajeTotal<<"    "<<seleccion1.rendimiento<<endl;
cout<<"partidos perdidos: "<<seleccion1.PP<<endl;

    return 0;
}