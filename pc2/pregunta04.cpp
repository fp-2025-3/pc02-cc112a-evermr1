#include<iostream>
using namespace std;

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
	int F,C;
	cout<<"FILAS: ";
	cin>>F;
	cout<<"COLUMNAS ";
	cin>>C;
LlenarMatriz(F, C);

	return 0;
}