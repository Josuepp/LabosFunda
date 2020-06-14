#include <iostream>
int b(int a);//funcion para evaluar si el año es bisiesto

using namespace std;

int n;//n es el año que ingresara el usuario para evaluar

int main(){
cout<<"\tA"<<(char)164<<"o Bisiesto"<<endl<<endl;
cout<<"Digite el a"<<(char)164<<"o: ";
cin>>n;
cout<<endl;

if(b(n))
{
    cout<<"El a"<<(char)164<<"o "<<n<<" es Bisiesto";
}
else
{
    cout<<"El a"<<(char)164<<"o "<<n<<" no es Bisiesto";
}

return 0;
}

int b(int a)//evaluacion del año ingresado
{
    if(a%400==0||a%4==0 && a%100!=0)
    {
        return 1;
    }

    else

    return 0;

}

