#include <iostream>
void murcielago(char[]);
using namespace std;

int main() {

    char frase[30];
    cout<<"\tCIFRADO CON CLAVE MURCIELAGO"<<endl<<endl;
    cout<<"Digite una frase: ";
    cin>>frase;
    cout<< "La codificacion de la frase es: ";
    murcielago(frase);

}
void murcielago(char frase[])

{
    for (int i = 0; i < 30; ++i)
    {
        switch(frase[i])
        {
            case 'm':
            case 'M': frase[i] = '0';
                break;
            case 'u':
            case 'U': frase[i] = '1';
                break;
            case 'r':
            case 'R': frase[i] = '2';
                break;
            case 'c':
            case 'C': frase[i] = '3';
                break;
            case 'i':
            case 'I': frase[i] = '4';
                break;
            case 'e':
            case 'E': frase[i] = '5';
                break;
            case 'l':
            case 'L': frase[i] = '6';
                break;
            case 'a':
            case 'A': frase[i] = '7';
                break;
            case 'g':
            case 'G': frase[i] = '8';
                break;
            case 'o':
            case 'O': frase[i] = '9';
                break;
        }
    }

    for (int j = 0; j < 30; ++j) {
        cout <<frase[j];
    }

}






