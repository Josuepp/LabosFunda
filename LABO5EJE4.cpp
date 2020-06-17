#include <iostream>
int b(int);

using namespace std;

int dia, a, mes;
char x;
int main()
{
    cout<<"\tDIA SIGUIENTE"<<endl<<endl;
    cout<<"Digite la fecha en el siguiente formato:     Dia/Mes/A"<<(char)164<<"o"  "  EJEMPLO:  15/8/2020"<<endl;
    cin>>dia>>x>>mes>>x>>a;
    cout<<endl;

    dia++;

    if(mes==1||3||5||7||8||10||12)
    {
        if(dia>=31)
        {
            dia=1;
            mes++;
            if(dia>=31 && mes>=12)
            {
                mes=1;
                 a = a + 1;
            }
        }
    }
    else if(mes==4||6||9||11)
        {
            if(dia>=30)
            {
                dia=1;
                mes++;
            }
        }
        else if(mes==2)
        {
            if(b(a))
            {
                
                if(dia>=29)
                {
                    dia=1;
                    mes++;
                }
            }
            else if(dia>=28)
                {
                    dia=1;
                    mes++;
                }
        }


cout<<"La fecha del dia siguiente es: "<<dia<<x<<mes<<x<<a<<endl;
cout<<endl;

}


int b(int a)
{

if(a%4==0 && a%100!= 0 || a%400==0)
{
    return 1;
}

else
{  
    return 0;
}


}