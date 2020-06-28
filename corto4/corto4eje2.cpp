#include <iostream>

void llenarA(float[]);
float media(float[], float);
void calcu(float [], float);
using namespace std;
float estaturas[25], promedio, prom;

int main()
{
cout<<"\tCALCULO DE MEDIA DE ESTATURAS DE LOS ESTUDIANTES "<<endl<<endl;
llenarA(estaturas);
prom= media(estaturas, promedio);
cout<<"El peromedio de las estaturas: "<<prom<<endl;
calcu(estaturas, prom);
}


void llenarA(float a[])
{
    int i;
    cout<<"Ingrese la estatura de los 25 estudiantes: ";
    for(i=0;i<25;i++)
    cin>>a[i];
}


float media(float a[], float promedio)
{
    float suma = 0;
    int i;
    for(i=0;i<25;i++)
    suma = suma + a[i];
    
    promedio = suma/25;
    
    return promedio;
}


void calcu(float a[], float prom)
{
    int i;
    int MArriba=0, MAbajo=0;
    for(i=0;i<25;i++)
    if(a[i]<prom)
    
        MAbajo++;
    
    else if(a[i]>prom)
    {
        MArriba++;
    }
    
    cout<<"Las estaturas abajo de la media son: "<<MAbajo<<endl;
    cout<<"Las estaturas arriba de la media son: "<<MArriba<<endl; 
}
