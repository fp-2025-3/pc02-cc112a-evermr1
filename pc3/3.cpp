//bosquejo

#include <iostream>
#include <ctime>
using namespace std;

int F,C;

cout<<"ingrese el numero de filas menor a 10"<<endl;
cin>> F;

cout<<"ingrese el numero de filas menor a 10"<<endl;
cin>> C;

for(int i=0;i<F;i++){
for(int j=0; j<C;j++){
    A[i][j]= rand()%10 +1}
    cout<<" "<<endl;}

for(int i=0;i<F;i++){
for(int j=0; j<C;j++){
    cout<<A[i][j]<<" ";}
    cout<<endl;}

return 0;
}