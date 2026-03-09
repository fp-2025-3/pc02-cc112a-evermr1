//EVER ABEL MEZA RICALDI 20220600A

#include <iostream>
#include <string>
using namespace std;

struct estudiante {
    string nombre;
    float nota;
};

int main(){
int n;
cout<<"ingrese n (capacidad)"<<endl;
cin>>n;

estudiante *alumnos=new estudiante[n];
for(int i=0;i<n;i++){
    cout<<"ingrese el nombre del estudiante "<<i+1<<endl;
    cin.ignore();
    getline(cin,alumnos[i].nombre);
    cout<<"ingrese la nota del estudiante "<<i+1 <<endl;
    cin>>alumnos[i].nota;}


     int e = 0;
    for (int i = 1; i < n; i++) {
        if (alumnos[i].nota > alumnos[e].nota) {
            e = i;
        }}
        cout<<"la mayor nota es del alumno  "<<alumnos[e].nombre<<endl;
        cout<<"nota"<<alumnos[e].nota<<endl;


    return 0;
}