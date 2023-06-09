#include <iostream>

using namespace std;




double PI()
{
    double div=1; //valor inicial del divisor
    double pi= 0; //valor inicial de pi
   double mult=4; //valor inicial de la primera fraccion (4\1)
    int signo = 4; //valor inicial del numerador
    int digitospi= 3141592; //primeros 6 digitos de pi

while(int(pi * 1000000) != digitospi){ //hasta que sus seis primeros valores coincidan
    pi += mult; //se le suma a pi la fraccion actual
        signo *=-1; //se le cambia el signo
        div= div + 2; //se aumenta el divisor en 2
        mult= signo / div; //se calcula la siguiente fraccion
        

} 
return pi;
}

int main(){
 double pi;
 pi = PI();

cout<<"el resultado de Pi es: "<<fixed<<pi<<endl;
    return 0;
}
