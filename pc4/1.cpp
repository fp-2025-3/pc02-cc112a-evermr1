#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


//estructura polinomio 
struct polinomio {
	int grado;
	int *coeficientes;
};

int main(){
	
	//declaracion
	polinomio polinomio1;//polinomio 1
	polinomio polinomio2;//polinomio 2
	polinomio polinomio3;//polinomio 3
	polinomio polinomio4;//suma de tres polinomios
	polinomio polinomio5;//multiplicacion de tres polinomios
	
	//grados inicializados de los polinomios
	polinomio1.grado=2;
	polinomio2.grado=2;
	polinomio3.grado=2;
	polinomio4.grado=2;  //suma de polinomios
	polinomio5.grado=(polinomio1.grado+polinomio2.grado+polinomio3.grado);
	
	//arreglo dinamico de coeficientes en orden decreciente
	polinomio1.coeficientes=new int[polinomio1.grado+1];
	polinomio2.coeficientes=new int[polinomio2.grado+1];
	polinomio3.coeficientes=new int[polinomio3.grado+1];
	polinomio4.coeficientes=new int[polinomio4.grado+1];
	polinomio5.coeficientes=new int[polinomio5.grado+1];
	
	//inicicialización polinomi1:
	polinomio1.coeficientes[0]=2;
	polinomio1.coeficientes[1]=3;
	polinomio1.coeficientes[2]=2;
	
	//inicicialización polinomio2:
	polinomio2.coeficientes[0]=5;
	polinomio2.coeficientes[1]=3;
	polinomio2.coeficientes[2]=4;
	
	//inicicializacion polinomio3:
	polinomio3.coeficientes[0]=6;
	polinomio3.coeficientes[1]=3;
	polinomio3.coeficientes[2]=8;
	
	//inicializacion polinomio 4:  suma de tres polinomios: 
	polinomio4.coeficientes[0]=0;
	polinomio4.coeficientes[1]=0;
	polinomio4.coeficientes[2]=0;
	
	//inicializacion polinomio 5:  multiplicacion de tres polinomios: 
	polinomio5.coeficientes[0]=0;
	polinomio5.coeficientes[1]=0;
	polinomio5.coeficientes[2]=0;
	polinomio5.coeficientes[3]=0;
	polinomio5.coeficientes[4]=0;
	polinomio5.coeficientes[5]=0;
	polinomio5.coeficientes[6]=0;
	polinomio5.coeficientes[7]=0;
	
	
	
	//suma
	polinomio4.coeficientes[0]=	
	polinomio1.coeficientes[0]+polinomio2.coeficientes[0]+polinomio3.coeficientes[0];
	
	polinomio4.coeficientes[1]=	
	polinomio1.coeficientes[1]+polinomio2.coeficientes[1]+polinomio3.coeficientes[1];
	
	polinomio4.coeficientes[2]=	
	polinomio1.coeficientes[2]+polinomio2.coeficientes[2]+polinomio3.coeficientes[2];
	
	//producto de tres polinomios
		for(int i=0;i<=polinomio1.grado;i++){
		for(int j=0;j<=polinomio2.grado;j++){
			for(int k=0;k<=polinomio3.grado;k++){
				polinomio5.coeficientes[i+j+k] +=
		polinomio1.coeficientes[i]*polinomio2.coeficientes[j]*polinomio3.coeficientes[k];}	
			}}
			
			//impresion de polinomios
			
	//impresión de polinomio 1:
cout<<"polinomio 1 :"<<endl;
	for(int i=0;i<polinomio1.grado+1;i++){
			cout<<polinomio1.coeficientes[i];
			if(i<polinomio1.grado){cout<<"x^"<<polinomio1.grado-i;}
			if(i<polinomio1.grado){cout<<" + ";}}	
			cout<<endl;

	//impresión de polinomio 2:
cout<<"polinomio 2 :"<<endl;
	for(int i=0;i<polinomio2.grado+1;i++){
			cout<<polinomio2.coeficientes[i];
			if(i<polinomio2.grado){cout<<"x^"<<polinomio2.grado-i;}
			if(i<polinomio2.grado){cout<<" + ";}}	
			cout<<endl;


	//impresión de polinomio 3:
cout<<"polinomio 3 :"<<endl;
	for(int i=0;i<polinomio3.grado+1;i++){
			cout<<polinomio3.coeficientes[i];
			if(i<polinomio3.grado){cout<<"x^"<<polinomio3.grado-i;}
			if(i<polinomio3.grado){cout<<" + ";}}	
			cout<<endl;

	//impresion del polinomio 4: suma de tres polinomios.
cout<<"polinomio 4 (suma de los tres polinomios) :"<<endl;
		for(int i=0;i<polinomio4.grado+1;i++){
			cout<<polinomio4.coeficientes[i];
			if(i<polinomio4.grado){
			cout<<"x^"<<polinomio4.grado-i;}
			if(i<polinomio4.grado){cout<<" + ";}}	
			cout<<endl;

	//impresion del polinomio 5: producto de tres polinomios.
cout<<"polinomio 5 (producto de los tres polinomios) :"<<endl;
		for(int i=0;i<polinomio5.grado+1;i++){
			cout<<polinomio5.coeficientes[i]<<"x^"<<polinomio5.grado-i;
			if(i<polinomio5.grado){cout<<" + ";}}	
			cout<<endl;


			//coefientes de los polinomios
			
	cout<<"coeficientes de los polinomios : "<<endl;
	
	cout<<"coeficientes del polinomio 1: "<<endl;
		cout<<"(";
		for(int i=0;i<polinomio1.grado+1;i++){
			cout<<polinomio1.coeficientes[i];
			if(i<polinomio1.grado){
			cout<<" , ";}}
			cout<<")"<<endl;
					
	cout<<"coeficientes del polinomio 2: "<<endl;
		cout<<"(";
		for(int i=0;i<polinomio2.grado+1;i++){
			cout<<polinomio2.coeficientes[i];
			if(i<polinomio2.grado){
			cout<<" , ";}}
			cout<<")"<<endl;
			
	cout<<"coeficientes del polinomio 3: "<<endl;
		cout<<"(";
		for(int i=0;i<polinomio3.grado+1;i++){
			cout<<polinomio3.coeficientes[i];	
			if(i<polinomio3.grado){
			cout<<" , ";}}
			cout<<")"<<endl;
			
		cout<<"coeficientes del polinomio 4: (suma de tres polinomios) "<<endl;
		cout<<"(";
		for(int i=0;i<polinomio4.grado+1;i++){
			cout<<polinomio4.coeficientes[i];	
			if(i<polinomio4.grado){
			cout<<" , ";}}
			cout<<")"<<endl;
			
		cout<<"coeficientes del polinomio 5 (multiplicacion de 3 polinomios): "<<endl;
		cout<<"(";
		for(int i=0;i<polinomio5.grado+1;i++){
			cout<<polinomio5.coeficientes[i];	
			if(i<polinomio5.grado){
			cout<<" , ";}}
			cout<<")"<<endl;

//liberación de memoria dinamica

delete[] polinomio1.coeficientes;
delete[] polinomio2.coeficientes;
delete[] polinomio3.coeficientes;
delete[] polinomio4.coeficientes;
delete[] polinomio5.coeficientes;

    return 0;
}
  