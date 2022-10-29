#include <iostream>
#include <conio.h>

using namespace std;
struct nodo{
    char dato;
    nodo *ptrSiguiente;
};
nodo *primero;
void menu();
void insertar();
void desplegar_pila();
void eliminar ();


int main()
{
   primero=NULL;
   menu();
   return 0;
}
void menu(){
int opcion;
do{
    cout<<"******Menu*****"<< endl;
    cout <<"1. Insertar elementos a la pila"<<endl;
    cout <<"2. Mostrar elementos de la pila"<<endl;
    cout <<"3. Eliminar elemento de la lista"<<endl;
    cout <<"4. Salir"<< endl;
    cout << "Que Opcion deseas"<<endl;
    cin>>opcion;
    switch (opcion){
        case 1:
            insertar ();
            break;
        case 2:
            desplegar_pila();
            break;
        case 3:
            eliminar();
            break;

    }
    system("cls");
}while (opcion !=4);
}
void insertar(){
    nodo *nuevo= new nodo();
    cout<<"ingresa un dato"<<endl;
    cin>> nuevo->dato;
    nuevo->ptrSiguiente= primero;
    primero= nuevo;
    cout<< "El elemento ha sido agregado"<<endl;
    system("pause");
}
void desplegar_pila(){
nodo *actual = new nodo();
actual = primero;
if( primero!= NULL){
        while(actual!= NULL){
            cout<< actual->dato<<endl;
            actual= actual->ptrSiguiente;
        }

}else{
    cout<<"la pila esta vacia"<<endl;
}
system("pause");
}
void eliminar (){
    nodo *actual= new nodo();
    char n;
    actual= primero;
    n=actual->dato;
    if(primero !=NULL){
        primero= actual->ptrSiguiente;
        cout<< "el elemnto "<<n<< " ha sido eliminado"<<endl;
        delete actual;
    }else{
    cout<<"la pila esta vacia"<<endl;
    }
    system("pause");
}
