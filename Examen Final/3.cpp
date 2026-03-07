#include <iostream>
#include <fstream>
using namespace std;

struct Proyecto {
int id;
char titulo[40];
double presupuesto;
int duracionMeses;
};

void nuevoProyecto() {

};


int main(){
int N;
cout<<"cuantos proyectos desea ingresar"<<endl;
cin>>N;

ofstream("proyectos.dat",ios::in|ios::out|ios::binary);

Proyecto *P= new Proyecto [N];



streampos p= (n-1)*sizeof(Proyecto);
seekp(p);



//para escribir el binario
A.write(reinterpret_cast<char*>(&P),sizeof(Proyecto));

seek(0,ios::beg); //devuelve el puntero al inicio


    ofstream("proyectos.dat",ios::in|ios::out|ios::binary);


    return 0;
}