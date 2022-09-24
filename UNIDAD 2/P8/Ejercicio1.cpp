#include <iostream>
<<<<<<< HEAD
using namespace std;
// Ejercicio 1: 
// Rellenar un arreglo de 10 números, posteriormente utilizando punteros 
// indicar cuales son números pares y sus posiciones de memoria.
void RellenarArray(int *,int);
void DeterminarPares(int *,int);
int main(int argc, char const *argv[])
{
    int num [10];
    int *ptrNum;
    ptrNum = num;
    cout <<"\n========================================================\n";
    cout<<"\tLLENAR UN ARRAY DE 10 POSICIONES\n";
    cout<<"\tY MOSTRAR LOS NUMEROS PARES";
    cout <<"\n========================================================\n";
    RellenarArray(ptrNum,10);

    cout<<"\n==================Numeros Par==============================\n";
     for(int i = 0; i <10;++i){
        if (*ptrNum%2==0)
        {
            cout <<"\tEl numero con posicion [" << i <<"] "<<"es : "<<*ptrNum<<endl;
        }
        ptrNum++;  
     }
    
    return 0;
}
void RellenarArray(int *n,int index){
    int aux;
     for(int i = 0; i <index;++i){

     cout<<"\tDatos posicion "<<i<<": ";
     cin >>aux;
     if(aux>=0){
      n[i]=aux;
     }else{
        cout<<"\nNumero incorrecto\n";
        cout<<"\n Intentalo de nuevo\n";
        i--;
     }

     }

}

=======
#include <stdlib.h>
#include <time.h>

using namespace std;
void leer_arreglo(int [], int);
void Mostrar_arreglo(int [], int);
void ordenar(int [], int);
int busqueda_binaria(int [],int , int);
int main()
{
    int lista[25], datos, abuscar, encontrado;
    string opt="t",aux="";
    while(opt!="n"){
    cout << "Busqueda binaria"<< endl;
    cout <<"\n******************************************\n";
    cout<< "cuantos datos necesitas? : ";
    cin>> datos;
    cout <<"\n************ Datos ***********************\n";
    leer_arreglo(lista, datos);
    Mostrar_arreglo(lista, datos);
    cout <<"\n\n********* Datos ordenados ****************\n";
    ordenar(lista, datos);
    Mostrar_arreglo(lista, datos);
    cout <<"\n\n********** Busqueda ***********************\n";
    cout <<"\n\tValor a buscar? :";
    cin>> abuscar;
    encontrado= busqueda_binaria(lista,datos, abuscar);
    cout <<"\n==============================================\n";
   
    if(encontrado != -1){
        cout<< "Se encontro el dato en la posicion   " << encontrado;
    }
    else{
        cout<<"\tNo se encontro el dato";
    }
    cout <<"\n=============================================\n";
    
    cout<< "Generar nuevos numeros aleatorio s/n : ";
    cin>> aux;
    opt=aux;
    if(opt=="s" || opt=="S"){
         system("cls");
    }
    }


    return 0;
}
void leer_arreglo(int a[], int num){
    srand(time(NULL));
    for (int i=0; i<num; i++){
        a[i]= 1 + rand()%50;
    }
}
void Mostrar_arreglo(int a[], int num){
    for (int i=0; i<num; i++){
            cout<< a[i]<< "  ";
        }
}
void ordenar(int a[], int num){
    int aux;
    for(int pasada=1; pasada <= num; pasada ++){
        for (int i=0 ; i<num -1; i++){
            if (a[i]<a[i+1]){
                aux = a[i];
                a[i]= a[i+1];
                a[i+1]= aux;
            }
        }
    }
}
int busqueda_binaria(int a[],int num, int clave){
    int inf, sup, mitad;
    inf= 0;
    sup= num;

    while(inf<=sup){
        mitad=(inf+sup)/2;
        if(a[mitad]==clave){
            return mitad;
        }
        if (a[mitad]< clave){
            sup=mitad-1;
            mitad=(inf+sup)/2;
        }
        if(a[mitad]>clave){
            inf = mitad +1;
            mitad=(inf+sup)/2;
        }
        
    }
    return -1;
}
>>>>>>> 34dfe95923c5851dff3661fa7ff84a1baa5bdcfc
