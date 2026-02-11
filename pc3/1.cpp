//realice un bosquejo.

#include <iostream>
#include <cstring>
using namespace std;

//una opción
void(*p1,*p2,char const t[]){
char const *p1=t[0];
char *p2='\0'}


int main (){
int k= '2';
int l= '15';
cout<<"el valoren codigo ASCI ES: "<<k-48 << " "<< l-48;

char t[19] = {"2 2 3 4 5 6 7 8 9"};



int suma;
//no admite numeros negativos:
if( (k>0+48)&&(k<=10+48)&&(l>0+48)&&(k<10+48)){
int k1= k-48;
int k2= l-48;
suma=k1+k2;
cout<<""<<"suma: "<<suma<<endl;;
cout <<k1 <<" "<< k2;
cout <<endl;}
else{
cout<<"valor de 11:"<< '10'<<endl;
int k3=k-12582;
int k4=l-12582;
suma=k3+k4;
//int k3='10';//12592
cout<< " "<< suma<<endl;
}

cout <<"**************************************"<<endl;

char *p=t;

string a= " ";
//usando strtok podria separar cada espacio 
char *strtok( char *p, string a);


while(*p != '\0'){
cout<< *p <<endl;
p++;}
int c=0;
cout<< "ingrese el valor de k: "<<endl;
//cin>> k;
int nt;

cin.ignore();

for(int i=0 ;i<19;i=i+2){
    int suma= *p + *(p+i);
    cout <<suma<<endl;
    if(suma== k){
    c=c+1;
    p++;
    }
}

cout <<"q paso";
/*for(int i=0 ;i<19;i++){
    if (strcmp(*p,t[i+1])>0){
        p++;
        c=c+1;
    }
    cout<< c<<c <<c;
}*/

    return 0;
}