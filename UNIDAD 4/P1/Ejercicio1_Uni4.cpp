#include <iostream>
#include <conio.h>

using namespace std;
struct nodo{
 int dato;
 nodo *Siguiente;
 };
void menu();
void insertar();
void Modificar();
void Buscar();
void desplegar_cola();
void eliminar();
void cantidaElementos();
void maxValor();
nodo *primero, *ultimo;


int main()
{
    primero= NULL;
    ultimo=NULL;
     menu();
    return 0;
}
void menu(){
int opcion;

do{
    cout<<"================ Menu =========================\n"<< endl;
    cout <<"\t1. Insertar elementos a la cola"<<endl;
    cout <<"\t2. Modificar elementos de la cola"<<endl;
    cout <<"\t3. Buscar elementos de la cola"<<endl;
    cout <<"\t4. Mostrar elementos de la cola"<<endl;
    cout <<"\t5. Eliminar elemento de la cola"<<endl;
    cout <<"\t6. Cantidad de elementos de la cola"<<endl;
    cout <<"\t7. Valor mayor de la cola"<<endl;
    cout <<"\t8. Salir"<< endl;
    cout<<"================================================"<< endl;

    cout <<"\tOpt: ";
    cin>>opcion;
    switch (opcion){
        case 1:
            insertar ();
            break;
         case 2:
            Modificar();
            break;
        case 3:
            Buscar();
            break;
        case 4:
            desplegar_cola();
            break;
        case 5:
              eliminar();
            break;
        case 6:
            cantidaElementos();
            break;
        case 7:
            maxValor();
            break;

    }
    system("cls");
}while (opcion !=8);
}
void insertar(){
 nodo *nuevo = new nodo();
 cout<<"\tingrese el nuevo dato a la cola: ";
 cin>> nuevo->dato;
 if (primero == NULL){
    primero = nuevo;
    primero->Siguiente=NULL;
    ultimo = primero;
 }else{
     ultimo->Siguiente= nuevo;
     nuevo->Siguiente=NULL;
     ultimo= nuevo;
  }
  cout<< "\telemento agregado a la cola"<<endl;
  system("pause");
}
void Modificar(){
    bool resp= true;
    int valor;
    nodo *actual = new nodo();
    actual = primero;
    if (primero != NULL){
        cout<<"\t Dato a Modificar: ";
         cin>>valor;
            while(actual != NULL){

                if(actual->dato==valor){
                    int temporal= actual->dato;
                cout<<"\tIngrese el nuevo dato a la cola: ";
                cin>> actual->dato;
                 cout <<"\tEl elemento "<<temporal<<" cambio a "<<actual->dato<<" en la cola\n";
                resp=false;
                break;
                }
                actual = actual->Siguiente;
                
                }
          if(resp){
            cout <<"\tEl elemento no se encuentra en la cola\n";
          }

    }
    else {
        cout <<"\tla cola esta vacia"<< endl;
    }
    system("pause");
}
void Buscar(){
    bool resp= true;
    int valor,cont=0;
    nodo *actual = new nodo();
    actual = primero;
    
    if (primero != NULL){
        cout<<"\t Dato a buscar: ";
         cin>>valor;
            while(actual != NULL){

                if(actual->dato==valor){
                   
                 cout <<"\tEl elemento "<<valor<<" fue encontrado en la posicion "<<cont<<" de la cola\n";
                resp=false;
                break;
                }
                cont++;
                actual = actual->Siguiente;
                }
          if(resp){
            cout <<"\tEl elemento no se encuentra en la cola\n";
          }

    }
    else {
        cout <<"\tla cola esta vacia"<< endl;
    }
    system("pause");

}
void desplegar_cola(){
    nodo *actual = new nodo();
    actual = primero;
    if (primero != NULL){
        cout<<"\t";
            while(actual != NULL){
                cout << actual->dato <<"->";
                actual = actual->Siguiente;
                }
            cout<< endl;

    }
    else {
        cout <<"\tla cola esta vacia"<< endl;
    }
    system("pause");
}
void eliminar(){
   nodo *actual= new nodo();
   int num;
   actual = primero;
   num= actual->dato;
   if(primero == ultimo){
    primero=NULL;
    ultimo= NULL;
    }
    else{
        primero = actual->Siguiente;
    }
    cout <<endl<<"el numero " << num<< " se elimino de la cola"<<endl;
    delete actual;
    system("pause");
}
void cantidaElementos(){
    nodo *actual = new nodo();
    actual = primero;
    int cantida=0;
    if (primero != NULL){
            while(actual != NULL){

                cantida++;
                actual = actual->Siguiente;

                }

           
            cout<<"\t La cantida elemento es: "<<cantida<<endl;
    }
    else {
        cout <<"\tLa cola esta vacia "<< cantida<<" Elementos de la cola"<< endl;
    }
    system("pause");
}
void maxValor(){
    nodo *actual = new nodo();
    actual = primero;
    int temporal=actual->dato;
    if (primero != NULL){
            while(actual != NULL){
              

               if(temporal<actual->dato){
                   temporal=actual->dato; 
               }
                actual = actual->Siguiente;
                }
            cout<<"\t El maximo valor es: "<<temporal<<endl;

    }
    else {
        cout <<"\tla cola esta vacia"<< endl;
    }
    system("pause");
}
