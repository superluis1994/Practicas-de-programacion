#include <iostream>
// Ejercicio 1: 
// Un ordenamiento burbuja puede modificarse para que “burbujee” en ambas direcciones.
// La primera pasada mueve la lista hacia “arriba”, y la segunda pasada la mueve hacia “abajo”.
// Este patrón alternante continúa hasta que no son necesarias más pasadas. 
// Implemente esta variación y describa en qué circunstancias podría ser apropiada.

using namespace std;

void Metodo_burbuja_Mejorado(int a[],int x);
void imprimir(int array[], int );
int main(int argc, char const *argv[])
{
   int datos[]={6,9,3,11,16,20,18,4,30,14};
    int N =sizeof(datos)/sizeof(int);
    cout <<"\n============================================================================\n";
    cout <<"\n++++++++ RESULTADO DEL METODO BURBUJA EN AMBAS DIRECCIONES +++++++\n";
    cout <<"============================================================================\n";
    cout <<"  \t";
    cout <<"POSICION ORIGINAL: ";
    imprimir(datos,N);
    cout <<"\n============================================================================\n";
    Metodo_burbuja_Mejorado(datos,N);
     cout <<"  \t";
    cout <<"POSICION ORDENADA: ";
    imprimir(datos,N);
    cout <<"\n============================================================================\n";

    return 0;
}
void imprimir(int array[], int x){
  
      
    for (int i = 0; i < x; i++)
    {
        cout <<" "<<array[i];
    }
    
}

void Metodo_burbuja_Mejorado(int a[],int x){

 int aux,aux2;
  for(int i=0; i<(x/2); i++)
    {
    for(int f=0; f<(x/2); f++)
        {
          if(a[f] > a[f+1]){
           aux=a[f];
           a[f]=a[f+1];
           a[f+1]=aux;
          }
        }
       
        for(int f=x-1; f>(x/2)-1; f--)
        {
          if(a[f] < a[f-1]){
           aux2=a[f-1];
           a[f-1]=a[f];
           a[f]=aux2;
          }
        }

    }

}
