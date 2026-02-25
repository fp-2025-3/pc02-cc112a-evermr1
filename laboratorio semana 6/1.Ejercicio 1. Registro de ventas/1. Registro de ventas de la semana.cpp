#include<iostream>
#include<fstream>
using namespace std;

int main(){
	int n;
	n=7;
	string dias[n]={"lunes","martes","miercoles","jueves","viernes","sabado","domingo"};
	int I[n];
	for(int i=0;i<n;i++){
	cout<<"ingrese la venta del dia "<< dias[i]<<endl;
	cin>>I[i];}
 
	ofstream archivo("T.txt"); // si se desea agregar texto ofstream A("t.txt",ios::app);
	if(archivo.is_open()){
		archivo<<" \t Ingresos de la semana "<<endl;
	for(int i=0;i<n;i++)
		archivo<<dias[i]<<": "<<I[i]<<" soles "<<endl;;}
	
	//ordenamiento burbujo mayor venta	a menor venta
		for(int j=0;j<n-1;j++){
		for(int i=0;i<n-j-1;i++){
			int T;
			string D;
			if (I[i]<I[i+1]){
				T=I[i];
				D=dias[i];
				
				I[i]=I[i+1];
				dias[i]=dias[i+1];
			
				I[i+1]=T;
				dias[i+1]=D;}}}
	
ofstream A("t.txt",ios::app);
	
	int suma=0;
	for(int i=0;i<n;i++){
		suma+=I[i];}
	double promedio=0;
	
	archivo<<"\t Resumen "<<endl;
	archivo<<"total: "<<suma<<endl;;
	archivo<<"promedio: "<<suma/7<<endl;
	archivo<<"La mayor venta fue el dia "<<dias[0]<<" " <<I[0]<<" "<<" soles"<<endl;
	archivo<<"La menor venta fue el dia "<<dias[6]<<" " <<I[6]<<" "<<" soles"<<endl;
		
	return 0;
}