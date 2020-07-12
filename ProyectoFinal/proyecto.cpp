#include <iostream>
#include <string>
#include <string.h>

using namespace std;

const int longCad =20;

struct costoPorArticulo //"costoPorArticulo" sera la estructura que contendra los datos de cada producto
{
    char nombreArticulo[longCad +1];
    int cantidad;
    float precio;
    float costoArticulo;
};
/*Las funciones DatosProducto;en ella pediremos los datos del producto.
CalCosto; calcularemos el costo del articulo .
Caltotal: calculamos el total a pagar.
MostrarDatos: mostramos todos lo datos ingrsados y calculados en la demas funciones, como factura.*/
void DatosProducto(int,costoPorArticulo []);
void CalCosto(int,costoPorArticulo []);
void MostrarDatos(int, float, costoPorArticulo[]);
float Caltotal(int,costoPorArticulo []);

/* en el main, pedimos al usuario la cantidad de productos a ingresar "n", para luego hacer un arreglo,
 de la estructura costoPorArticulo, posteriormente hacer la llamada a las demas funciones  */
int main()
{
    int n=0;
    float TOTAL;
    cout<<"\tFACTURADO DE PRODUCTOS"<<endl<<endl;
    cout<<"Ingrese la cantidad de articulos: ";
    cin>>n;
    cin.ignore(100, '\n');
    cout<<endl;
    costoPorArticulo arr[n];

    DatosProducto(n, arr);
    CalCosto(n, arr);
    Caltotal(n,arr);
    TOTAL=Caltotal(n,arr);
    MostrarDatos(n,TOTAL,arr);

}
/*En esta funcion se le piden los al usuario los datos de cada articulo, para guardarlos en el arreglo*/
void DatosProducto(int n, costoPorArticulo arr[])
{
    
    string cad;
    cout<<"Ingrese el nombre, cantidad y precio de cada articulo: "<<endl;
    for(int i=0;i<n;i++)
    {   
        cout<<endl;
        cout<<"Nombre: ";
        getline(cin, cad, '\n');
        strncpy(arr[i].nombreArticulo, cad.c_str(), longCad);
        arr[i].nombreArticulo[longCad]='\0';
        cout << "Cantidad: ";
        cin >> arr[i].cantidad;
        cout << "Precio: $";
        cin >> arr[i].precio;
        cin.ignore(100, '\n');
    }
}
/* En esta funcion se calcula  el costo de cada articulo, por lo que se multiplica la cantidad por el precio, de cada producto */
void CalCosto(int n, costoPorArticulo arr[] )
{
    for(int i = 0; i<n ; i++)
    {
    arr[i].costoArticulo= (arr[i].cantidad) * (arr[i].precio);
    }
}
/*En esta funcion se recorre el los datos del arreglo por medio de un "for" para mostrar cada dato contenidos en el en pantalla, 
los cuales han sido calculados y almacenado en el arreglo previamente*/
void MostrarDatos(int n,float TOTAL, costoPorArticulo arr[])
{
    
    cout<<endl;
    cout<<"\t\t*****FACTURA*****"<<endl<<endl;
    
    for(int i = 0; i<n; i++)
    {
        
        cout<<"PRODUCTO:-------------------------------"<<arr[i].nombreArticulo<<endl;
        cout<<"CANTIDAD:-------------------------------"<<arr[i].cantidad<<endl;
        cout<<"PRECIO:---------------------------------$"<<arr[i].precio<<endl;
        cout<<"COSTO POR ARTICULO:---------------------$"<<arr[i].costoArticulo<<endl<<endl;
    }
    cout<<endl;
    cout<<"Total a Pagar:--------------------------$"<<TOTAL;
}

//En esta funcion calculamos el total a pagar, haciendo la sumatoria de todos, los costos de cada articulo, retornando el total
float Caltotal(int n, costoPorArticulo arr[])
{
    
    float total = 0;
    for(int i = 0; i<n ; i++)
    {
        total= total + arr[i].costoArticulo;
    }
    return total;
}