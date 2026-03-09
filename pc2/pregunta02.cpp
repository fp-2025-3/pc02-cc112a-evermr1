#include <iostream>
using namespace std;

// Complete la funcion de busqueda
int* buscar(
    int* inicio,                 //
    int* fin,                    
    bool (*equivale)(int, int),  // funcion que determina cuando dos enteros se condideran equivalentes
    int clave   )             // clave es el valor a buscar segun el criterio;
    {for (int *p = inicio; p!=fin;++p){
    if(equivale(*p,clave)){
        return p;}
    } 
    return nullptr;}//no se encuentra el valor
   
    // Complete aqui
//criterios de equivalencia
bool mismaparidad(int a, int b){
    return (a%2==b%2);
}

bool igual (int a, int b){
    return a==b;
}

//a divide a b
bool divideA (int a, int b){
   if(a == 0)return false;
    return (b%a==0); 
}


bool mismaCantidaddedigitos(int a, int b){
   int c1=0;
   int c2=0;
    while (a>0){
    a= a/10;
    c1++;}
cout <<"digitos de a: "<<c1;
    while (b>0){
    b=b/10;
    c2++;}
    cout <<"digitos de b: "<<c1;
 return c1==c2; 
}

// Implemente aqui los Criterios de equivalencia
// y si es necesario algunas funciones adicionales para reproducir el ejemplo de salida

void imprimir(int *A, int n){
for(int i=0;i<n;i++){
    cout <<*(A+i);
}	
}

int main() {
    int A[] = { -1, 21, 2, -2, 8, 13, 25 };
    int* inicio = A;
    int* fin = A + 7;

    int clave = 13;
int n=(sizeof A)/(sizeof A[0]);

    // Imprima el arreglo
imprimir(*A, n);

    // Llame a la funcion buscar para cada criterio implementado
buscar(
    * inicio,                 // Estos dos primeros parametros
    * fin,                    // delimitan el rango de busqueda a [inicio, fin)
    (*equivale)(int, int),  // equivale es una funcion que determina cuando dos enteros se condideran equivalentes
 clave   )  ;           // clave es el valor a buscar segun el criterio indicado);

    return 0;
}
