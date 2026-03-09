#include <iostream>
#include <string>
using namespace std;

//virtual  override

class Sensor  {
    protected:
    string id; //identificador unico de sensor
    double *posicion;//arreglo dinamico de tamaño 2

	public:
	//constructor sensor
    Sensor (double x, double y , string id): id(id){
    posicion=new double[2];
    	posicion[0]=x;posicion[1]=y;}
    	
   //constructor copia	
    //creamos un nuevo sensor a partir de otro existente (copia)
    //reservamos nueva memoria para su posición
 Sensor (const Sensor &SensorOriginal){
  	id=SensorOriginal.id;
    	posicion=new double[2];
    	posicion[0]=SensorOriginal.posicion[0];
    	posicion[1]=SensorOriginal.posicion[1];
	};
 
	// operadorAsignacion;
	//redefiniendo como se comporta el operador de asignación (=)
	//sobre carga
	 Sensor& operator = (const Sensor &sensorOriginal){ //operadorAsignacion;
    if(this!=&sensorOriginal){
    	id=sensorOriginal.id;
    	delete[] posicion;
    	posicion=new double[2];
    	posicion[0]=sensorOriginal.posicion[0];
    	posicion[1]=sensorOriginal.posicion[1];}
    	return*this;}
	
    //destructorVirtual  este metodo especial se invoca 
	//automaticamente al liberar memoria y no tenemos que llamarlo en el main
  
	    virtual ~Sensor(){
       	delete[] posicion;
        cout<<"destructor sensor"<<endl;};
    
	//metodos virtuales puros (metodos que las clases derivadas deben implementar)
    //retorna el area de la region cubierta por el sensor 
    virtual double areaCobertura() const=0;
    //retorna si el punto (x,y) pertenece a la region cubierta por el sensor
    virtual bool detecta(double x, double y) const= 0;
    //muestra informacion del sensor
    virtual void imprimir() const=0; };


	//clase derivada sector circular
    class SensorCircular :  public Sensor { 
        private:
		double radio;
		public:
			SensorCircular ( double x, double y, double ,string id)
			:Sensor(x,y,id),radio(r){}
				
           //retorna el area de la region cubierta por el sensor 
        double areaCobertura() const override  {
        	return 3.1416*radio*radio;}	
		
    //retorna si el punto (x,y) pertenece a la region cubierta por el sensor
        virtual bool detecta (double x, double y) const override{
        	double dx=x-posicion[0];
        	double dy=y-posicion[1];
        	double d=dx*dx+dy*dy;
        	return d<=(radio*radio);};
        	
    //muestra informacion del sensor
        virtual void imprimir () const override {
            	cout<<"sensor circular :"<<endl;
        	cout<<"ID: "<<id<<", posicion:   "<<"(" <<posicion[0]<<" , "<<posicion[1]<<")"<<endl;
        	cout<< "radio: "<<radio <<endl;
			cout<< "Area: "<<areaCobertura()<<endl;

        }
    }; 


	//clase derivada sector rectangular
    class SensorRectangular : class Sensor :{ 
        double ancho;
        double alto;

		
		SensorRectangular (double x, double y, double a , double h, string id):
		Sensor(id,x,y),ancho(a), alto(h){}

           //retorna el area de la region cubierta por el sensor 
        virtual double areaCobertura () override {        	
         return ancho*alto;}
         
    //retorna si el punto (x,y) pertenece a la region cubierta por el sensor
        virtual bool detecta (double x, double y) override {
			double dx = fabs(x - posicion[0]);
        double dy = fabs(y - posicion[1]);
        return (dx <= ancho/(2.0) && dy <= alto/(2.0); 
        };
        
        
    //muestra informacion del sensor
        virtual void imprimir () override {
        	  	cout<<"sensor rectangular:  "<<endl;
        	cout<<"ID: "<<id<<endl;
        	cout<<"posicion "<<"("<<posicion[0]<<" , "<<posicion[1]<<")"<<endl;
        	cout<<"ancho: "<<ancho<<" alto: "<<alto<<"area: "<<areaCobertura()<<endl;
        }; 


         class SistemaSensores : class Sensor :{ 
            
            Sensor **sensores; //Arreglo dinamico de punteros a sensores
            int cantidad; //numero actual de sensores
            int capacidad; //tamaño del arreglo dinamico


            public: 

            SistemaSensores () {

            }

            Destructor () {
                 ~SistemaSensores;
                 cout<<"destructor sistema de sensores"<<endl;
            }

            //agrega un nuevo sensor al sistema.
            //  si el areglo se llena, debe redimensionarse
            //dinamicamente aumentando su capacidad
            void agregarSensor (Sensor*s ) {




                //Aumento de capacidad en caso se llena el arreglo
                capacidad= 2*C;
            }; 

            
            //muestra la informacion de todos los 
            // sensores almacenados utilizando polimorfismo
            void mostrarSensores() const {
            
                        
            };

            //retorna la suma del area total de cobertura de todos los sensores
            double areaTotalCobertura() const {


            };

            //retorna cuantos sensores detectan el punto (x,y)
            int SensoresQueDetectan(double x, double y) const {


            };

            
            //retorna un puntero al sensor cuya area de cobertura 
            //sea la mayor dentro del sistema 
            Sensor *sensorMayorCobertura() const {


            };

    }




int main(){

	cout << " \n  menu      "<<endl;
	
		cout<< "1. Agregar un sector circular"<<endl;
	cout<< "2. Agregar un sensor rectangular "<<endl;
	cout<< "3. Mostrar todos los sensores "<<endl;
	cout<< "4. Calcular area total de cobertura        "<<endl;
	cout<< "5. DETECTAR CUANTOS SENSORES DETECTAN UN PUNTO           "<<endl;
	cout<< "6. MOSTRAR SENSOR CON MAYOR AREA DE COBERTURA"<<endl;
	cout<< "7. SALIR          "<<endl;
	cout<< "8. INGRESE OPCION :   "<<endl;
	cin>> opcion;
	
	
	if (opcion==1){
		
	}else if(opcion==2){
		
		
	}else if(opcion ==3){}
		
	else if(opcion ==4){}
	else if(opcion ==5){}
	else if(opcion ==6){}
	else if(opcion ==7){}
	//salimos del programa con la opcion 7
	while(opcion !=7);
	


SistemaSensores.agregarSensor.SensorCircular

SistemaSensores.agregarSensor.SensorRectangular.

SistemaSensores.mostrarSensores


SistemaSensores.areaTotalCobertura

SistemaSensores.SensoresQueDetectan(x1,y1);

SistemaSensores.sensorMayorCobertura.


    return 0;
}