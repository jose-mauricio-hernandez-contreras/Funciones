#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
using std::cout;
void suma(int a, int b );
int main (){
int N1,N2;
cout<<"introduzca el valor del primer operando:";
cin>>N1;
cout<<"introduzca el valor del segundo operando:";
cin>>N2;
suma(N1,N2);
return 0;
}
void suma(int a, int b){
int c = a+b;
cout<<"el resultado de\t" <<a<< "+" <<b<< "\tes="<<c;
}
