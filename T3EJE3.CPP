#include <iostream>
#include <cmath>
using namespace std;


int main(void)
{
int a, b, c;
double x1,x2 ;


cout<<" PROGRAMA PARA RESOLVER FORMULA DE LA CUADRATICA"<<"\n"<<"\n"; 
cout<<"formula general: ax2 + bx + c= o"<<"\n";
cout<< "ingrese los valores de a, b y c, para resolver la formula cuadratica"<<"\n"<<"\n"; 
cout<< "valor de a:"<<"\n";
cin>> a;
cout<< "valor de b:"<<"\n";
cin>>b;
cout<< "valor de c:"<<"\n";
cin>>c;

x1= (-b + (sqrt(pow(b,2)-4*a*c))) /2*a;
x2= (-b - (sqrt(pow(b,2)-4*a*c))) /2*a;

cout<<"\n";
cout<<"RESPUESTAS:"<<"\n"<<"\n";

cout<<"x1="<<x1<<"\n"<<"\n";
cout<<"x2="<<x2<<"\n";





    
return 0;
}