#include <iostream>

using namespace std;

int main(void){

int num;

cout<<"\t""ESTE PROGRAMA DA COMO RESULTADO, SI EL NUMERO INGRESADO ES NEGATIVO, POSITIVO O CERO"<<endl<<endl;
cout<<"Ingrese el numero: ";
cin>> num;

if(num<0){

    cout<<"El numero "<<num<<" es negativo";
}
else if(num>0){

            cout<<"El numero "<<num<<" es positivo";

        }

        else {

            cout<<"El numero es 0 ";
        }
    

return 0;
}
