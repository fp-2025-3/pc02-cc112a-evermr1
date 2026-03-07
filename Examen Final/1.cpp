#include <iostream>
using namespace std;


int **crearMatriz(int n,int m){
    //reservamemoria dinamica para una matriz nXm
     //n filas , m columnas 
    int **M =new int *[n];//filas
    for(int i=0;i<n;i++){
     M[i] =new int [m];}// columnass
	 return M;};

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
    	S[i]=0;
        for(int j=0;j<m;j++){
        S[i]+=M[i][j];}}
        return S;
    };

//liberar correctamente toda la memoria reservada para la matriz
void liberarMatriz(int**M,int n){
     for(int i=0;i<n;i++){
      delete[] M[i];
    }
	delete[] M;
    cout<<"memoria liberada "<<endl;
};


int main(){

int n;
int m;

cout<< "ingrese n: "<<endl;
cin>>n;
cout<<"ingrese m: "<<endl;
cin>>m;

int **M=crearMatriz(n,m);

crearMatriz(n,m);
llenarMatriz(M,n,m);
int *S=sumaFilas(M,n,m);

cout<<"vector resultante: [ ";
for(int i=0;i<n;i++){
    cout<<S[i];
	if(i<n-1)
	cout<<" , ";
}
cout<<"]"<<endl;

liberarMatriz(M,n);
delete[] S;

    return 0;
}

//matriz dinamica nXm
//salida de una matriz 3x4;