#include <iostream>
using namespace std;


//funciones
void ingresar_datos(int n,int *T,string *N){
      for (int i = 0; i < n; i++){
        cout << "INGRESE EL NOMBRE DEL CORREDOR " <<i+1<<": "<< endl; 
          cin >> *(N+i);
        cout << "INGRESE TIEMPO DEL CORREDOR " <<i+1<< endl;
        cin >> *(T+i);
    }};
    
    void ordenar_Ranking(int n2,int *T,string *N){
	for(int i=0; i< n2-1; i++){
		for(int j=0;j<n2-1;j++){
			if(*(T+j)>*(T+j+1)){
				int temp= T[j];
				T[j]=T[j+1];
				T[j+1]=temp;//ordenando tiempo
				
				string aux=*(N+j);				
				N[j]=N[j+i];
				N[j+i+1]=aux;
			}}}};
			
	void  mostrar_ranking (int n3, int *T,string *N){
	cout << "\nRANKING FINAL" << endl;
	 for (int i = 0; i < n3; i++) {
        cout << i + 1 << ". " << *(N+i) << " - " << *(T+i) << " segundos" << endl;
		}};

	void  buscar_corredor(int n4, int *T,string *N){
    // d) Buscar corredor por nombre
    string buscar;
    bool bandera = false;
    cout << "\nIngrese nombre a buscar: ";
    cin >> buscar;

    for (int i = 0; i < n4; i++) {
        if (N[i] == buscar) {
            cout << "Corredor encontrado en la lista" << endl;
            cout << "Posicion del corredor: " << i + 1 << endl;
            cout << "Tiempo : " << T[i] << " segundos" << endl;
            bandera = true;
            break;
        }
    }
    if (!bandera) {
        cout << "El corredor no existe." << endl;
    }};
    
    void busqueda_por_rango_de_tiempo(int n5, int *T,string *N){
    int tiempo_minimo;//rango
	int tiempo_maximo;  
    cout << "Ingrese tiempo minimo: "<<endl;
    cin >> tiempo_minimo;
    	cout<<"ingrese el tiempomaximo: "<<endl;
	cin >> tiempo_maximo;

    cout << "Corredores en el rango [" << tiempo_minimo << ", " << tiempo_maximo << "]:" << endl;
    for (int i = 0; i < n5; i++) {
        if ((*(T+i)) >= tiempo_minimo && (*(T+i)) <= tiempo_maximo) {
            cout << *(N+i) << " - " << *(T+i)<< " segundos" << endl;
        }
    }};


int main(){ 
	int M=30;
   string No[M]; 
    int Ti[M];
    int m;
    int*T =T;
    string *N =N;
    
    cout << "Ingrese numero de corredores: "; 
	
	cin >>m ;

	ingresar_datos( m, Ti,No);
 	ordenar_Ranking(m,Ti,No);
 	mostrar_ranking (m,Ti,No);
 	buscar_corredor(m,Ti,No);
 	busqueda_por_rango_de_tiempo(m,Ti,No);
 

    return 0;
}

