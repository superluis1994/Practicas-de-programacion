#include <iostream>

using namespace std;
struct NodoDlobe{
 int dato;
 NodoDlobe *ptrSiguiente, *ptrAtras;
};
struct PilaA{
    int valor;
    PilaA *ptrSig;
};
struct PilaB{
    int valor2;
    PilaB *ptrSig;
};
NodoDlobe *Primero, *Ultimo;
PilaA *A;
PilaB *B;
void menu();
void insertar_nodo();
void insertar_pilas();
void mostrarLista();
void mostrarLista_simpleA();
void mostrarLista_simpleB();


int main(int argc, char const *argv[])
{
  B=NULL;
  A=NULL;
 
    menu();
  
    
    return 0;
}
void menu(){
int opcion;
do{
    cout<<"\n========================== Menu ===============================\n\n";
    cout <<"\t1. Insertar datos pila A y B"<<endl;
    cout <<"\t2. Crear lista doblemente enlazada A y B"<<endl;
    cout <<"\t3. Mostrar lista simple A"<< endl;
    cout <<"\t4. Mostrar lista simple B"<< endl;
    cout <<"\t5. Mostrar lista generada"<< endl;
    cout <<"\t6. Salir"<< endl;
    cout <<"\n=============================================================\n";
    cout <<"\t\tQue Opcion deseas: ";
    cin>>opcion;
    switch (opcion){
        case 1:
            insertar_pilas();
            break;
        case 2:
            insertar_nodo();
            break;
        case 3:
           mostrarLista_simpleA();
            break;
        case 4:
           mostrarLista_simpleB();
            break;
            case 5:
               mostrarLista();

            break;
       }
    system("cls");
}while (opcion !=6);
}

////////////LISTA SIMPLE////////////////////
void insertar_pilas(){
PilaA *pilaADato = new PilaA();
PilaB *pilaBDato = new PilaB();

    cout<< "\t\tIngrese un numero para la pila A: ";
    cin>> pilaADato->valor;
    pilaADato->ptrSig= A;
    A= pilaADato;

    cout<< "\t\tIngrese un numero para la pila B: ";
    cin>> pilaBDato->valor2;
    pilaBDato->ptrSig= B;
    B= pilaBDato;
   
    cout<< "\tEl elemento ha sido agregado"<<endl;
    system("pause");

}

void insertar_nodo(){


if(A != NULL && B != NULL){

     while (A != NULL & B != NULL){
        if(A->valor < B->valor2){

     
     if(A != NULL){
        NodoDlobe *nuevo = new NodoDlobe();
    nuevo->dato = A->valor;
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
    A= A->ptrSig;
     }
     if(B != NULL){
        NodoDlobe *nuevo = new NodoDlobe();
    nuevo->dato = B->valor2;
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
    B= B->ptrSig;
     }
        }else{
             if(B != NULL){
        NodoDlobe *nuevo = new NodoDlobe();
    nuevo->dato = B->valor2;
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
    B= B->ptrSig;
     }if(A != NULL){
        NodoDlobe *nuevo = new NodoDlobe();
    nuevo->dato = A->valor;
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
    A= A->ptrSig;
     }

        }
 

    }
    cout<< "\t\tLista completa"<<endl;

    system("pause");
    system("cls");
    mostrarLista();


}else{
    cout<< "\tPara realizar este proceso las lista A y B"<<endl;
    cout<< "\tTiene que tener registros"<<endl;

}
   
    


}
///////////////////////
void mostrarLista(){
 NodoDlobe *actual = new NodoDlobe();
 actual = Primero;
 if (Primero != NULL){
    cout<< "==================================================\n";
    cout <<"Esta lista se genero de la pila A y B\n";
    cout<< "==================================================\n";
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

void mostrarLista_simpleA(){
 PilaA *actual = new PilaA();
 actual = A;
 if (A != NULL){
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
 PilaB *actual = new PilaB();
 actual = B;
 if (B != NULL){
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