#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
using std::cout;
void Max(int a, int b);
int main (){
int N1, N2;
cout<<"introduzca el valor del primer numero\n";
cin>>N1;
cout<<"introduzca el valor del segundo numero\n";
cin>>N2;
Max(N1,N2);
return 0;
}
void Max(int a, int b){
if(a>b){
    cout<<a<<"\tes mayor";
}
else if(a<b){
    cout<<b<<"\tes mayor";
}
else
    cout<<"error";
}
