#include <iostream>
using namespace std;

void pico( int F, int C){
	int P[F][C];
	int c1=0;
	int c2=0;
		
for(int i=0;i<F;i++){
for(int j=0;j<C;j++){
if(A[i][j]>=A[i][j+1] || A[i][j]>=A[i][j-1]
|| A[i][j]>=A[i+1][j] || A[i][j]>=A[i+1][j] ||A[i][j]>=A[i-1][j+1]){
	cout<<"el elemento cumple la primera condición"<<endl;
	c1=1}
	else {c1=0;
	}}}

//mayor
for(int i=0;i<F;i++){
for(int j=0;j<C;j++){
if(A[i][j]>A[i][j+1] || A[i][j]>A[i][j-1]
|| A[i][j]>A[i+1][j] || A[i][j]>A[i+1][j] ||A[i][j]>A[i-1][j+1]){
c2=1;
cout<<"el elemento cumple la segunda condición"}
else c2=0;}
suma = c1+c2;

if(suma = 2){
	cout<<"pico en  (" <<i+1<<","<<j+1<<"): "<<A[i][j];
	int P[F][C]=A[i][j];}
	else {P[F][C] =0;
	}
	
}




	void LlenarMatriz( int F,int C){	
	int A[F][C];
	for(int i=0 ;i<F;i++){
	for(int j=0;j<C;j++){
		cout<<"elemento ("<< i+1<<","<<j+1<<"): ";
		cin>>A[i][j];
	}}	
	for(int i=0 ;i<F;i++){
	for(int j=0;j<C;j++){
		cout<<A[i][j]<<" ";}
		cout <<endl;
	}}


int main(){
	
	cout<<"FILAS: ";
	cin>>F;
	cout<<"COLUMNAS ";
	cin>>C;	
	
LlenarMatriz(F,C);
pico(F,C);
		
	return 0;
}