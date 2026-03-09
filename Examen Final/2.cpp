#include <iostream>
#include <cmath>
using namespace std;

struct Punto{
    int x;
    int y;
    };

void leerPunto( Punto *p) {
    cout<<"("<<(*p).x<<","<<(*p).y<<")"<<endl;
	cout<<"coordena x : "<< p[0].x<<endl; //   p[0] o (*p)
    cout<<"coordena y : "<< p[0].y<<endl;
}


double distanciaOrigen(const Punto*p){
double d = sqrt((p[0].x)*(p[0].x) + (p[0].y)*(p[0].y));

 //cout<<"la distancia del origen a la coordenada ("<<p[0].x<<","<<p[0].y<<") es: "<< d <<endl;
return d;
}

Punto *masLejano(Punto *p1,Punto *p2){
double d1, d2;
    d1=distanciaOrigen(p1);
    d2=distanciaOrigen(p2);

    if(d1>d2){
        return p1;}
        else{ return p2;}
}


int main(){
    Punto p1;
    Punto p2;
    cout<<"ingrese coordenada x del punto de p1:"<<endl;
    cin>>p1.x;
    cout<<"ingrese coordenada y del punto de p1:"<<endl;
    cin>>p1.y;

    cout<<"ingrese coordenada x del punto de p2:"<<endl;
    cin>>p2.x;
    cout<<"ingrese coordenada y del punto de p2:"<<endl;
    cin>>p2.y;

//leerPunto (p1)
//leerPunto (p2)
    cout<<"p1 : ("<<p1.x<<","<<p1.y<<")"<<endl;
    cout<<"p2 : ("<<p2.x<<","<<p2.y<<")"<<endl;

distanciaOrigen(&p1);

cout<<"el punto mas lejano del origen es : ";
leerPunto( masLejano(&p1,&p2));
cout<<endl;

    return 0;
}