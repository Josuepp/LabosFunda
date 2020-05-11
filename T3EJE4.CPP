#include <iostream>
#include <string>

using namespace std;

int main (void)

{
int c;
double p;               //c es cantidad de producto, p el precio y n nombre.
string n;
double mult;

cout << "producto comprado"<<"\n"<<"\n";

cout << "nombre del producto:"<<"\n";

cin>> n;

cout  << "cantidad:"<<"\n"<<"\n";

cin>> c;

cout << "precio"<<"\n"<<"\n";

cin>> p;

mult = c * p;

cout<< "\n";
cout<< "PROUCTOS COMPRADOS"<<"\n"<<"\n";

cout<< "Producto:"<< n <<"\n";
cout<< "Cantidad:"<< c <<"\n";
cout<< "Precio:"<< "$" << p <<"\n"<<"\n";
cout<< "Total Gastado:"<< "$" << mult <<"\n";


return 0;

}
