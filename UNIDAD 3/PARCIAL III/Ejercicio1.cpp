#include <iostream>

using namespace std;
struct NodoDlobe{
 int dato;
 NodoDlobe *ptrSiguiente, *ptrAtras;
};
struct NodoSimpleA{
    int valor;
    NodoSimpleA *ptrSig;
};
struct NodoSimpleB{
    int valor2;
    NodoSimpleB *ptrSig;
};
NodoDlobe *Primero, *Ultimo;
NodoSimpleA *listaA;
NodoSimpleB *listaB;
NodoSimpleA *siguienteA;
NodoSimpleB *siguienteB;
void menu();
void insertar_nodo();
void insertar_ListasimpleA();
void insertar_ListasimpleB();
void mostrarLista_P_U();
void mostrarLista_U_P();
void mostrarLista_simpleA();
void mostrarLista_simpleB();


int main(int argc, char const *argv[])
{
  listaB=NULL;
  listaA=NULL;
 
    menu();
  
    
    return 0;
}
void menu(){
int opcion;
do{
    cout<<"\n========================== Menu ===============================\n\n";
    cout <<"\t1. Insertar datos lista A"<<endl;
    cout <<"\t2. Insertar datos lista B"<<endl;
    cout <<"\t3. Crear lista doblemente enlazada A y B"<<endl;
    cout <<"\t4. Mostrar elementos de la lista de primero al ultimo"<<endl;
    cout <<"\t5. Mostrar elementos de la lista del ultimo al primero"<< endl;
    cout <<"\t6. Mostrar lista simple A"<< endl;
    cout <<"\t7. Mostrar lista simple B"<< endl;
    cout <<"\t8. Salir"<< endl;
    cout <<"\n=============================================================\n";
    cout <<"\t\tQue Opcion deseas: ";
    cin>>opcion;
    switch (opcion){
        case 1:
            insertar_ListasimpleA();
            break;
        case 2:
            insertar_ListasimpleB();
            break;
        case 3:
            insertar_nodo();
            break;
        case 4:
            mostrarLista_P_U();
            break;
        case 5:
            mostrarLista_U_P();
            break;
        case 6:
           mostrarLista_simpleA();
            break;
        case 7:
           mostrarLista_simpleB();
            break;
       }
    system("cls");
}while (opcion !=8);
}

////////////LISTA SIMPLE////////////////////
void insertar_ListasimpleA(){
NodoSimpleA *nuevoA = new NodoSimpleA();

    cout<< "\t\tIngrese un numero a la lista A: ";
    cin>> nuevoA->valor;
    if (listaA == NULL){
        listaA= nuevoA;
        listaA->ptrSig=NULL;
        siguienteA=  listaA;

    }
    else{
        siguienteA->ptrSig= nuevoA;
        nuevoA->ptrSig= NULL;
        siguienteA = nuevoA;
    }
    cout<< "\tEl elemento ha sido agregado"<<endl;
    system("pause");

}
void insertar_ListasimpleB(){
NodoSimpleB *nuevoB = new NodoSimpleB();
    cout<< "\t\tIngrese un numero a la lista B: ";
    cin>> nuevoB->valor2;
    if (listaB == NULL){
        listaB= nuevoB;
        listaB->ptrSig=NULL;
        siguienteB=  listaB;

    }
    else{
        siguienteB->ptrSig= nuevoB;
        nuevoB->ptrSig= NULL;
        siguienteB = nuevoB;
    }
    cout<< "\tEl elemento ha sido agregado"<<endl;
    system("pause");

}
///////////////////////////////////////////
void insertar_nodo(){


if(listaA != NULL && listaB != NULL){

         while (listaA != NULL & listaB != NULL){
     
     if(listaA != NULL){
        NodoDlobe *nuevo = new NodoDlobe();
    nuevo->dato = listaA->valor;
        if (Primero == NULL){
                Primero= nuevo;
                Primero->ptrAtras = NULL;
                Primero->ptrSiguiente=NULL;
                Ultimo = Primero;
            }
            else{
                Ultimo->ptrSiguiente= nuevo;
                nuevo->ptrAtras= Ultimo;
                nuevo->ptrSiguiente= NULL;
                Ultimo = nuevo;
            }
    listaA= listaA->ptrSig;
     }
     if(listaB != NULL){
        NodoDlobe *nuevo = new NodoDlobe();
    nuevo->dato = listaB->valor2;
        if (Primero == NULL){
                Primero= nuevo;
                Primero->ptrAtras = NULL;
                Primero->ptrSiguiente=NULL;
                Ultimo = Primero;
            }
            else{
                Ultimo->ptrSiguiente= nuevo;
                nuevo->ptrAtras= Ultimo;
                nuevo->ptrSiguiente= NULL;
                Ultimo = nuevo;
            }
    listaB= listaB->ptrSig;
     }
 

    }
    cout<< "\t\tLista completa"<<endl;
    system("pause");

}else{
    cout<< "\tPara realizar este proceso las lista A y B"<<endl;
    cout<< "\tTiene que tener registros"<<endl;

}
   
    


}
///////////////////////
void mostrarLista_P_U(){
 NodoDlobe *actual = new NodoDlobe();
 actual = Primero;
 if (Primero != NULL){
    while(actual != NULL){
        cout << "<- "<< actual->dato<<" ->";
        actual= actual->ptrSiguiente;
    }
    cout<< endl;

 }
 else{
    cout<< "\t\tLa lista esta vacia"<<endl;
 }
 system("pause");
}
void mostrarLista_U_P(){
NodoDlobe *actual = new NodoDlobe();
 actual = Ultimo;
 if (Ultimo != NULL){
    while(actual != NULL){
        cout << "<- "<< actual->dato<<" ->";
        actual= actual->ptrAtras;
    }
    cout<< endl;

 }
 else{
    cout<< "\t\tLa lista esta vacia"<<endl;
 }
 system("pause");
}
void mostrarLista_simpleA(){
 NodoSimpleA *actual = new NodoSimpleA();
 actual = listaA;
 if (listaA != NULL){
    while(actual != NULL){
        cout << "<- "<< actual->valor<<" ->";
        actual= actual->ptrSig;
    }
    cout<< endl;

 }
 else{
    cout<< "\t\tLa lista esta vacia"<<endl;
 }
 system("pause");
}
void mostrarLista_simpleB(){
 NodoSimpleB *actual = new NodoSimpleB();
 actual = listaB;
 if (listaB != NULL){
    while(actual != NULL){
        cout << "<- "<< actual->valor2<<" ->";
        actual= actual->ptrSig;
    }
    cout<< endl;

 }
 else{
    cout<< "\t\tLa lista esta vacia"<<endl;
 }
 system("pause");
}