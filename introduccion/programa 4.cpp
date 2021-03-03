#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
using std::cout;
int factorial(int a);
int main(){
int N1;
cout<<"introduzca el valor del numero\n";
cin>>N1;
int fact = factorial(N1);
cout<<"el factorial de\t"<<N1<<"\tes:"<<fact;
return 0;
}
int factorial(int a){
int i;
int resultado = 1;
for (i=1; i<=a; i++){
    resultado *= i;
}
return resultado;
}
