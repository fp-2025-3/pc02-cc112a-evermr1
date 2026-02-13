#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include <random>
using namespace std;


struct performance{
string nombre;
int PG;
int PE;
int PP;
int GF;
int GC;
int puntajeTotal;
int DG;
float Rendimiento;};

int main(){
performance *jugador= new performance [100];

for(int i=0;i<100;i++){
jugador[i].nombre =i+1;



jugador[i].PG =rand()%6;
jugador[i].PE =rand()%6;
jugador[i].PP =rand()%6;

}


srand(time(NULL));
int s;

cout<<s;

for(int i=0;i<100;i++){
delete[] jugador[i];
*jugador++;
}

    return 0;
}