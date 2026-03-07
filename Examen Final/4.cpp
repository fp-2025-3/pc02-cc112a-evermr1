#include <iostream>
using namespace std;

virtualñ  override
class Sensor : {
    
    string id; //identificador unico de sensor
    double *posicion;//arreglo dinamico de tamaño 2

    sensor ();
    copia ();
    operadorAsignacion();
    destructorVirtual(){
        virtual ~sensor;
        cout<<"destructor sensor"<<endl;
        virtual ~copia;
        cout<<"destructor copia"<<endl;
    }

    //retorna el area de la region cubierta por el sensor 
    virtual double areaCobertura() cost=0;
    //retorna si el punto (x,y) pertenece a la region cubierta por el sensor
    virtual bool detecta(double x, double y) const 0;
    //muestra informacion del sensor
    virtual void imprimir() const=0; 

    class SensorCircular : class Sensor :{ 
        double radio

           //retorna el area de la region cubierta por el sensor 
        virtual double areaCobertura overrade () {
            //implementar
        }
    //retorna si el punto (x,y) pertenece a la region cubierta por el sensor
        virtual bool detecta overrade (double x, double y) {

            //implementañ
        };
    //muestra informacion del sensor
        virtual void imprimir overrade () {
            //implementar

        }
    }; 



    class SensorRectangular : class Sensor :{ 
        double ancho;
        double alto;

           //retorna el area de la region cubierta por el sensor 
        virtual double areaCobertura overrade () {
            //implementar
        }
    //retorna si el punto (x,y) pertenece a la region cubierta por el sensor
        virtual bool detecta overrade (double x, double y) {

            //implementañ
        };
    //muestra informacion del sensor
        virtual void imprimir overrade () {
            //implementar

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

SistemaSensores.agregarSensor.SensorCircular

SistemaSensores.agregarSensor.SensorRectangular.

SistemaSensores.mostrarSensores


SistemaSensores.areaTotalCobertura

SistemaSensores.SensoresQueDetectan(x1,y1);

SistemaSensores.sensorMayorCobertura.


    return 0;
}