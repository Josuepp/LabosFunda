#include <iostream>

using namespace std;


int main(void)
{

 
int num1,num2,num3;

cout << "ingrese primer valor:" << "\n"; 

cin>> num1;

cout << "ingrese segundo valor:" << "\n";

cin>> num2;

cout << "ingrese tercer valor:" << "\n";
 
cin>> num3;

int suma = num1+num2+num3;

int div = suma/3;

cout << "el promedio es:" <<  div;

return 0;
}