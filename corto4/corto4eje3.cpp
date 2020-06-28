#include<iostream>
float notas(float [][10], int );
void resultado(float [][10], int);
using namespace std;

float nota[50][10];
int n;
int main()
{
    cout<<"\tCALCULO DE NOTAS PARA ESTUDIANTES"<<endl<<endl;
    cout<< "Ingrese el numero de estudiantes a evaluar: ";
    cin>>n;
    cout<<endl<<endl;
    notas(nota,n);
    resultado(nota, n);


}

float notas(float nota[][10], int n)
{
    int i, j;
    cout<<"Digite las notas de los estudiantes: "<<endl;
    for( i=0; i<n;i++){
    for( j=0;j<5;j++){
    cout<<"Digite la nota "<<j+1<<" del "<<i+1<<" alumno: "<<endl;
    cin >> nota[i][j];
    nota[i][j] *= 0.20;

    }
  }  
  return nota[i][j];
}

void resultado(float nota[][10], int n)
{
    int i, j;
    float acum;
    for( i=0;i<n;i++){
        acum=0;
    for( j=0;j<5;j++){
        acum+=nota[i][j];
    }

    if(acum>=6)
    {
    cout<<"El estudiante "<<i+1<<" esta aprobado y su nota final es: "<<acum<<endl; 
    }
    else if(acum<6)
    {
    cout<<"El estudiante "<<i+1<<" esta reprobado y su nota final es: "<<acum<<endl; 
    }
 }
}
