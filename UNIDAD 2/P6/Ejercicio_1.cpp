#include <iostream>
#include <time.h>

// Ejercicio 1: 
// Elabore un programa que le permita rellenar un arreglo con números aleatorios entre 1 y 50,
//  el usuario deberá definir la cantidad de números que se crearan, luego solicite un numero al usuario 
//  y proceda a realizar una búsqueda secuencial pero que realice el recorrido desde el ultimo al primer elemento.

void generarArray(int[],int);
void Imprimir(int[],int);
int Busqueda(int[],int,int);

using namespace std;
int main(int argc, char const *argv[])
{      int n,Bs;
       srand(time(NULL));
        string fila="\n****************************************************************************\n";

        cout<<fila;
                cout<<"\tGENERAR NUMEROS ALEATORIOS 1-50 Y GENERAR UNA BUSQUEDA\n"; 
        cout<<fila; 
        cout<<"\tCuantos numeros quiere generar: ";
        cin>>n;
       int arreglo[n];
       generarArray(arreglo,n);
        cout<<fila; 
       Imprimir(arreglo, n);
        cout<<fila; 
        cout<<"\tCual numero desea buscar: ";
        cin>>Bs;
        int Rs=Busqueda(arreglo,n,Bs);

        if(Rs!=-1){
            cout<<"\tEl numero esta en la posicion: "<<Rs<<endl;
        }else{
            cout<<"\tEl numero no se encuentra en el arreglo"<<endl;
        }



    return 0;
}
void generarArray(int arreglo [],int n){
   for(int i = 0; i <n; i++){
       arreglo[i] =1+ rand() %50;
   }
      
}
void Imprimir(int arreglo [],int n){
    
   for(int i = 0; i <n; i++){
       cout <<"\t"<<arreglo[i];
   }
      
}
int Busqueda(int arreglo[],int n,int Bs){
for(int i =n ; i >=0; i--){
     if(arreglo[i] == Bs){
        return i;
        break;
     }
}
return -1;

}


