#include <iostream>

using namespace std;

int main(void){

int num1, num2;

cout<<"\t""ESTE PROGRAMA VERIFICA SI UN NUMERO x ES DIVISIBLE ENTRE UN y" <<endl;
cout<<"Ingrese el numero x:";
cin>> num1;
cout<<"Ingrese el numero y:";
cin>> num2;

if(num1%num2==0){
cout<<"El numero "<<num1<<" es divisible entre "<<num2;
}
else{
cout<<"El numero "<<num1<<" no es divisible entre "<<num2;
}

return 0;
}