#include <iostream>
int MCD(int , int );

using namespace std;

int mayor, menor;

int main()
{

cout<<"\tMCD DE DOS NUMEROS ENTEROS"<<endl<<endl;
cout<<"Digite el numero mayor: ";
cin>>mayor;
cout<<endl;
cout<<"Digite el numero menor: ";
cin>>menor;
cout<<endl<<endl;
cout<<"El MCD es: "<<MCD(mayor, menor)<<endl<<endl;



}

int MCD(int mayor, int menor)
{
int residuo;

do
{
    residuo = mayor % menor;
    if(residuo != 0)
    {
        mayor=menor;
        menor=residuo;
    }
    return residuo;
}
while(residuo!=0);

}