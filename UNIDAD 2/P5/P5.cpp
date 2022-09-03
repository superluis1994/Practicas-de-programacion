#include<iostream>
#include<cstdlib>
#include<ctime>
#include <windows.h> 
#include <vector>
#include <string>

using namespace std;
// Diseñe un programa que permita generar n números aleatorios, 
// los asigne a un arreglo luego lo ordene utilizando el método de la burbuja de 
// forma descendente. Deberá mostrar en pantalla el arreglo original y el 
// arreglo después de ordenarlo. Además, debe mostrar las posiciones originales que tenía al inicio.
// Mostrar además el valor mínimo y máximo del conjunto de datos generados.

void generar_numeros(int a[],int x);
void ordenar_areglo(int a[],int x);
void mayorYmenor(int a[],int x);
void imprimir(int a[],int x);
bool checkrep(int n, int num[]);
int main()
{

   string fila="\n==========================================================\n";
   string cort="\n________________________________________________________\n";
   int digig=100;
   cout <<fila;
          cout <<"\n\tGENERADOR DE NUMERO ALEATORIOS ORDENADOS \n";
   cout <<fila;

    
    while(digig>20){
    cout <<" De cuantos Numeros quiere su arreglo permitidos 1-20: ";
    cin>>digig;
    if(digig>20 || digig<0){
          cout <<"\n\t Numero no valido \n";
    }
    }
    cout<<fila;
    srand(time(NULL));
    int num[digig];
    generar_numeros(num,digig);
        cout<<"\n\t Posiciones \t";
    for(int i=0; i<digig; i++)
    {
        if(i>9){
        cout<<i<<"| ";
        }else{
        cout<<i<<" | ";
        }
        }
        cout<<cort;
        
    cout <<"\n Numero sin ordenar: ";
    imprimir(num,digig);
    ordenar_areglo(num,digig);
    
    cout <<"\n Numero ordenados: ";
    imprimir(num,digig);
        cout<<cort;

    mayorYmenor(num,digig);
        cout<<cort;

    return 0;
}


bool checkrep(int n, int num[],int x)
{
    for(int i=0; i<x; i++)
        if(n == num[i])
            return true;
    return false;
}
void generar_numeros(int a[],int x){
 int n;
  for(int i=0; i<x; i++)
    {
         do
            n = 1 + rand() % 99;
        while(checkrep(n, a,x));
        a[i] = n;   
    }
}
void ordenar_areglo(int a[],int x){

 int aux;
  for(int i=0; i<x; i++)
    {
    
    for(int f=0; f<x-1; f++)
        {
          if(a[f] < a[f+1]){
           aux=a[f];
           a[f]=a[f+1];
           a[f+1]=aux;
          }
        }
    }

}
void imprimir(int a[],int x){
cout<<"\t";
for(int i=0; i<x; i++){
    cout << a[i];
       std::string s = std::to_string(a[i]);
    if(s.size() == 2){
    cout<<"| ";
    }else{
    cout<<" | ";

    }
    }
}
void mayorYmenor(int a[],int x){
    int temM,temMen,mayor=0,menor=0;
     mayor=a[0];
    for(int i=0; i<x; i++){
       if(mayor<=a[i]){
          mayor=a[i];
       }
       if(mayor>=a[i]){
          menor=a[i];
       }
    }
    cout<<"\n\t El mayor es: "<<mayor;
    cout<<"\n\t El menor es: "<<menor<<"\n";
}

