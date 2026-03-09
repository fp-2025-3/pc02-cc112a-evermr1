#include <iostream>
using namespace std;


void duplicar(int *&codigos,int cantidad, int &capacidad, float *&promedios){
	int capacidad_nueva= capacidad*2;
	int *codigos_nuevos = new int[capacidad_nueva];
	float *promedios_nuevos = new float[capacidad_nueva];
	
	 for (int i = 0; i < cantidad; i++) {
        codigos_nuevos[i] = codigos[i];
        promedios_nuevos[i] = promedios[i];}
        
        delete[] codigos;
        delete[] promedios;
    
    codigos=codigos_nuevos;
    promedios=promedios_nuevos;
	capacidad= capacidad_nueva;	
};


void agregar(int *&codigos,int &cantidad, int &capacidad, float *&promedios){
	 if (cantidad == capacidad) {
        duplicar(codigos,cantidad,capacidad,promedios);
    }
        cout<<"ingrese codigo: "<<endl;
        cin>>codigos[cantidad];
        cout<<"ingrese promedio: "<<endl;
        cin >> promedios[cantidad];
    cantidad++;
};

void mostrar(int*codigos, float*promedios,int cantidad){
	cout<<"estudiantes"<<endl;
	for(int i=0;i<cantidad;i++){
		cout<<"codigo: "<<codigos[i]<<"promedio: "<<promedios[i]<<endl;
	}
}




int main(){
	int cantidad=0;
	int capacidad= 4;

int *cod = new int [capacidad];
int *prom = new int[capacidad];

agregar(cod,cantidad,capacidad,prom);
agregar(cod,cantidad,capacidad,prom);
 mostrar(cod, prom, cantidad);


delete [] cod;
delete[] prom;
return 0; 
}



