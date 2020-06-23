#include <iostream>
void llenarArreglo(int[], int);
void RECORRER(int[], int, int, int );
using namespace std;

int a[100], c, n, contador;
int main()
{
    cout<<"\tNUMERO REPETIDO EN EL ARREGLO"<<endl<<endl;
    cout<<"Digite la cantidad de numeros a introducir: ";
    cin>>c;
    cout<<"Digite el numero a comparar en el arreglo: ";
    cin>>n;

    llenarArreglo(a,c);
    RECORRER(a,c,n,contador);

}

void llenarArreglo(int x[], int c)

{
    int i;
    cout<<"Digite los "<<c<<" elemntos del arreglo:"<<endl;
    for(i = 0;i<c;i++)
        cin>>x[i];
}

void RECORRER(int x[], int c, int n, int contador)
{
    int i;
    contador = 0;
    for(i=0;i<c;i++)
    if(x[i]==n)
    {
        contador++;
    }

    cout<<"El numero "<<n<<" se repite "<<contador<<" veces"<<endl;
}