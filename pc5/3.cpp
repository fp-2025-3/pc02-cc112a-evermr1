#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

int main(){
float x;
float y;
int F=21;
int C=80;
float xmin=0;
float xmax=2*3.14;
float dx=(xmax-xmin)/(C-1);

//Matriz inicial llena de espacios en blanco
char G[F][C];
	for(int i=0;i<F;i++){
		for(int j=0;j<C;j++){
			G[i][j]=' ';}}

//EJE X :  RELLENAMOS LOS ESPACIOS DEL EJE X CON '-';
for(int j=0;j<C;j++){
	G[F/2][j]='-';}
//EJE Y :  RELLENAMOS LOS ESPACIOS DEL EJE Y CON '|'	
for(int i=0;i<F;i++){
	G[i][0]='|';}

// "x" en funcion de "j" , "y" en función de "x" 
//80 iteraciones de "j" 
for(int j=0;j<80;j++){
x= xmin + j*dx;
y=sin(5*x);
// "y" esta en [-1,+1] , multiplico por un factor de escala
// int nos da valores enteros aproxiamdos de ( )
//con esto consigo posiciones aproximadas pero enteras para imprimir '*'
int i= (F/2)-(int)(y*(F/2-1));
if(i>=0&&i<F){
	G[i][j]='*';
}}

//grafica en pantalla
for(int i=0;i<F;i++){
	for(int j=0;j<C;j++){
		cout<<G[i][j];}
		cout<<endl;}

ofstream A1("grafico.txt"); //out 
 //grafica en el archivo grafico.txt
 for(int i=0;i<F;i++){
	for(int j=0;j<C;j++){
		A1<<G[i][j];}
		A1<<endl;}   
 A1.close();
    return 0;}