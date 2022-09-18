#include <iostream>
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
          cout<<"Dato " << i+1 <<": ";
          cin>> a[i];
    }
cout <<"\n\n*******************************************\n";

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