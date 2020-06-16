#include <iostream>
int b(int);
using namespace std;

int a, opcion;

int main()
{
do
{
cout<<"\tA"<<(char)165<<"O BISIESTO"<<endl<<endl;
cout<<"Digite el a"<<(char)164<<"o: ";
cin>>a;

if(b(a))
{
    cout<<"El a"<<(char)164<<"o es bisiesto";
}

else
{
    cout<<"El a"<<(char)164<<"o no es bisisesto";
}

cout<<endl<<endl;
cout<<"Si desea calcular otro a"<<(char)164<<"o digite la opccion"<<endl<<endl;
cout<<"\t 1.SI      2.NO"<<endl;
cin>>opcion;
}
while(opcion==1);

return 0;
}


int b(int a)
{

if(a%4==0 && a%100!= 0 || a%400== 0)
{
    return 1;
}

else
{
    return 0;
}


}