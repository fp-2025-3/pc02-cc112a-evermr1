#include <iostream>
#include <fstream>

using namespace std;

struct Empleado{
    int id; // inicia con 1
    char nombre[30];
    double salario;
};

int main(){
    int busqueda;
    ifstream("empleados.dat",ios::binary);

    cout<<"ingrese el ID De empleado (1,2,3,..N): ";
    cin>>busqueda;

    


    return 0;
}