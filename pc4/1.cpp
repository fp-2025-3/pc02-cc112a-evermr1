#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int S[3], PRO[6];
int *P1= new int [3];
int *P2= new int [3];
int *P3= new int [3];

int main(){


int P1[3]={3,1,3};//3X^2 +2X +1
int P2[3]={5,3,1};
int P3[3]={6,4,2};


cout<< P1[1]<<endl;
//SUMA DE POLINOMIOS
int mg=7;
for (int i=0;i<mg;i++){
    S[i]=P1[i]+P2[i]+P3[i];
}
//PRODUCTO DE POLINOMIOS
for (int i=0;i<mg*2;i++){
    PRO[i]=P1[i]*P2[i]*P3[i] ;
}



delete P1;

for (int i=0;i<mg;i++){
delete P2[i];
;}

for (int i=0;i<mg;i++){
delete[] P3;
;}

    return 0;
}
  