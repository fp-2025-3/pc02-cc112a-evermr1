#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

int main(){
float x;
    ofstream archivo1("grafico.txt");
    
    if((x<6.28) && (x>0)){
float j=0;
float i=0;
        while(j==sin(5*i)){
        for( i=0;i<6.28;i=i+((6.28)/21)) {
            for( j=0;j<1;j=j+(1/80)){
                archivo1<<" * "; 
            }}
        }
    }

    archivo1<<"****";

    return 0;
}

