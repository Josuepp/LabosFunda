#include <iostream>
#include <string.h>

using namespace std;
int main(){

char palabra[20];
int letras;

cout <<"\tPROGRAMA DE VERIFICACION DE LETRAS DE UNA PALABRAS"<<endl<<endl;
cout << "Ingrese una palabra: ";
cin.getline(palabra,20);

letras = strlen(palabra);

if(letras>=10){

    cout<<endl<<"La palabra tiene mas de 10 letras";

    }  

        else{

            cout<<"La palabra tiene menos de 10 letras";

    }

if(letras%2== 0){

    cout<<" y su longitud es par";

    }

        else{

            cout<<" y su longitud es impar";

    }



return 0;
}