#include <iostream>

using namespace std;

double PI(int n)
{
    double suma;
    double div;
    double pi=0;
    double numerador; 
    div=3; // el divisor del segundo valor 
    suma =1; //hacemos factor comun 4, por lo que el primer valor es 1
    double mult;
    numerador = 1;//hacemos factor comun 4, por lo que el segundo valor es 1/3
    for (int i=2; i<=n; i++) //iniciamos desde el segundo valor, por lo que i = 2
    {
       mult= numerador / div; 
        if(i% 2 != 0){
            suma += mult; //si la fraccion esta en una posicion impar, suma
        }
        else{
        suma -= mult; //si la fraccion esta en una posicion par, resta
        }
        div= div + 2; //el divisor va aumentando de 2 en 2
    }
 pi= 4 * suma; //multiplicamos por 4 para deshacer el factor comun
return pi;
}




int main(){
 double n = 2000000; /*Num de ciclos*/
 double pi;
 pi = PI(n);

cout<<"el resultado de Pi es:"<<pi<<endl;
    return 0;
}
