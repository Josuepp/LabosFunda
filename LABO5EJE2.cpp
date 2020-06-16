#include <iostream>
using namespace std;

int h, m, s;
int main(){
char i;

cout<<"\tHORA EN FORMATO 24"<<endl<<endl;
cout<<"DIGITE LA HORA HH:MM:SS ";
cin>>h>>i>>m>>i>>s;
cout<<endl<<endl;


s++;

if(s>=60)
{
    s=0;
    m++;
}
if(m>=60)
{
    m=0;
    h++;
}
if(h>=24)
{
    h=0;
}
cout<<"La hora es: "<<h<<i<<m<<i<<s<<endl;
}
