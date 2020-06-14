#include <iostream>
#include <stdlib.h>
#include <time.h>

int res(int, int);//funcion para comparar la respuesta correcta con la del usuario

using namespace std;

int num, respuesta, i;//num es el numero que ingresara el usuario, respuesta es el numero al azar generado por el srand, i tomara el valor de la funcion retornado 
int contador = 5, opcion ;//contador es el numeros de intentos

int main(){

srand(time(NULL));
respuesta = rand()%100+1;

cout<<endl;
cout<<"\t EL NUMERO MAGICO"<<endl<<endl;
cout<<"Adivina el numero"<<endl<<endl;
cout<<"Tienes 5 intentos"<<endl;


while(contador>0){
cout<<"Escriba un numero al azar: ";
cin>>num;
cout<<endl;

i= res(num, respuesta);

if(i== 1)
{
    cout<<"El numero ingresado es menor a la respuesta"<<endl;
}
else if(i==2)
{
    cout<<"El numero ingresado es mayor a la respuesta"<<endl;
}
    else if(i==3)
{
    cout<<"FELICIDADES HAS ADIVINADO EL NUMERO"<<endl;
    break;
}

contador--;

cout<<endl;
cout<<"Le quedan "<<contador<<" intentos"<<endl<<endl;
cout<<"¿Desea seguir jugando?"<<endl;
cout<<"1.SI     2.NO"<<endl;
cin>>opcion;

if(opcion==2)
{
    contador = 0;
}

}

}


int res(int numero, int resp)//comparacion de respuestas
{

    if(numero<resp)
    {
        return 1;
    }
    
    else if(numero>resp)
    {
        return 2;
    }
    else if(numero==resp)   
    {
        return 3;
    } 
   
}

