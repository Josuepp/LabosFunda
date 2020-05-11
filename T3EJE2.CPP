#include <iostream>

using namespace std;

int main(void)


{
float R ; //R es de radio de una circunferencia
double pi = 3.1416;

cout<< "ingresar radio de la circunferencia" << "\n";

cin>> R;

double mult1 = pi * (R*R);

cout<< "el area es:"<< mult1 << "cm^2"  << "\n";

double mult2 = (2) * pi  * R;

cout<< "el perimetro es:"<< mult2 << "cm" << "\n";


return 0;



}

