#include <iostream>

using namespace std;
int main(void){

int n;

cout<<"\t"" ESTE PROGRAMA VERIFICA SI EL NUMERO INGRESADO ES PAR O IMPAR"<< endl<<endl;
cout<<"Introduzca el numero:";
cin>> n;

if( n % 2 == 0){
cout<<"El numero ingresado es par";
}
else{
cout<<"El numero ingresado es impar ";
}

return 0;

}

