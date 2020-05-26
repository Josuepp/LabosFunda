#include <iostream>
#include <string.h>

using namespace std;

int main(){

char palabra[40];
int longitud;
char letra1, letra2;

cout<<"\tVERIFICA SI LA LETRA INICAL DE LA PALABRA INGRESADA ES IGUAL QUE LA LETRA FINAL"<<endl<<endl;
cout<<"Ingrese la palabra: ";
cin>> palabra;

letra1=palabra[0];
longitud =strlen(palabra);
letra2 = palabra[longitud -1];

cout<<endl;
cout<<"La primera letra de la palabra es: "<< letra1<<endl;
cout<<"La ultima letra de la palabra es: "<<letra2<<endl;

if(letra1==letra2){
    cout<<endl;
    cout<<"Por lo que la palabra inicia y finaliza con la misma letra";
    }

        else {
            cout<<endl;
            cout<<"Por lo que la palabra no inicia con la misma letra que finaliza";

        }
return 0;
}