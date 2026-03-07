#include <iostream>
using namespace std;


int **crearMatriz(int n,int m){
    //reservamemoria dinamica para una matriz nXm
     //n filas , m columnas 
    for(int i=0;i<n;i++){
     int **M =new int [m]; 
    }};

void llenarMatriz(int **M,int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
               M[i][j]=(i+1)*(j+1);
        }
    }
};

int *sumaFilas(int **M,int n , int m){
    // reservar memoria para un arreglo de tamaño n
    // almacenar la suma de cada fila 

    int *S =new int[n];

    for(int i=0;i<n;i++){
        for(int j=1;j<n;j++){
        S[i]+=M[i][j];}}
    };

//liberar correctamente toda la memoria reservada para la matriz
void liberarMatriz(int**M,int n){
     for(int i=0;i<n;i++){
      delete[] M[i];
    };
    cout<<"memoria liberada "<<endl;
};


int main(){

int n;
int m;

cout<< "ingrese n: "<<endl;
cin>>n;
cout<<"ingrese m: "<<endl;
cin>>m;

crearMatriz(n,m);
sumaFilas(M,n,m);
liberarMatriz(M,n);

cout<<"vector resultante: [ ";
for(int i=0;i<n;i++){
    cout<<S[i]<<" , ";
}
cout<<"]";


    return 0;
}

//matriz dinamica nXm
//salida de una matriz 3x4;