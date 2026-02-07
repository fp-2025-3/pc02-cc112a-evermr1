#include <iostream>

using namespace std;

int agregar(int n){
    int r;
    for(int i=0;i<n;i++){
        int codigo[n];
        int promedio[n];
        cout<<"ingrese codigo: "<<endl;
        cin>>codigo[i];
        cout<<"ingrese promedio: "<<endl;
        cin >> promedio[i];}
cout<<"desea agregar mas estudiantes ( 1=si 2=no): "<<endl;
cin>>r;

switch(r) {
    case 1: n= n*2; //se duplica la capacidad 
    return agregar(n);
    break;
    case 2: cout<<"memoria llena: lista completa"<<endl;
    break;
}}


void eliminar( int s, float *promedio , int *codigos){

    for (int i = 0; i < s; i++){
    if (promedio[i]< 10){
        promedio [i]='\0';
        codigos[i]= '\0';}
    }

    for (int i = 0; i < s; i++)
    {
    }

}

int main(){
int l,s;
int *codigos = new int [l];
int *promedios = new int[l];




delete [] codigos;
delete[] promedios;
return 0; 
}



