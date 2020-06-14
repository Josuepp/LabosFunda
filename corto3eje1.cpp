#include <iostream>
float salario(int horas, int horaextra);//funcion para calcular el salario total
float salreal(float);//funcion para calcular el salario real del trabajador
using namespace std;

int h, he, i;//h equivale a las horas, he son las horas extras, i es usada como una opcion en el bucle
float salr;//salr es el salario real calculado

int main(){

cout<<"\tSUELDO MENSUAL DE EMPLEADOS"<<endl<<endl;

i = 1;
do{

cout<<endl;
cout<<"Ingrese horas trabajadas al mes: ";
cin>>h;
cout<<endl;
cout<<"Ingrese horas extra trabajadas al mes: ";
cin>>he;
cout<<endl<<endl;
cout<<"EL SALARIO TOTAL ES DE: $"<<salario(h, he)<<" DOLARES"<<endl;
cout<<"EL SALARIO REAL APLICANDO DESCUENTOS ES DE: $"<<salreal(salario(h, he))<<" DOLARES"<<endl<<endl;
cout<<"El empleado resivira: $"<<salreal(salario(h, he))<<" DOLARES"<<endl<<endl;
cout<<"¿Desea ingresar ingresar otro dato?"<<endl;
cout<<"1.Si\t2.NO"<<endl<<endl;
cout<<"Digite su opcion: ";
cin>>i;
cout<<endl;

}
while(i==1);
return 0;
}


float  salario(int horas, int horaextra)//calculo del salario total
{
float sal1, sal2, saltotal;

sal1 = horas * 1.75;
sal2 = horaextra * 2.50;

saltotal = sal1 + sal2;

return saltotal;
}


float salreal(float salario)//calculo del salario real
{
float ss, afp, renta, salr, des;

ss = salario * 0.04;
afp= salario * 0.0625;
if (salario>= 500)
{
     renta = salario * 0.10;
}
    else 
{
        renta = 0;
}

des = ss+afp+renta;
salr= salario-des;

return salr;
}


