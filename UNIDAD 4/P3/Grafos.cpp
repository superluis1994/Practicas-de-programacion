#include <iostream>

using namespace std;
struct Nodo{
    int numero;
    Nodo *sgte;
    struct Arista *ady;
};
struct Arista {
    Nodo *destino;
    Arista *sgte;
};
Nodo *cabecera;
void menu();
void insertar_nodo();
void insertar_arista();
void mostrar_grafo();
void mostrar_arista();
void agregar_arista(Nodo *&, Nodo *&, Arista *&);

int main(int argc, char const *argv[])
{
    cabecera=NULL;
    menu();

    return 0;
}
void menu(){
int opcion;

do{
    cout<<"================ Menu =========================\n"<< endl;
    cout <<"\t1. Insertar Nodo"<<endl;
    cout <<"\t2. Insertar Arista"<<endl;
    cout <<"\t3. Mostrar Grafo"<<endl;
    cout <<"\t4. Mostrar Arista"<<endl;
    cout <<"\t5. Salir"<< endl;
    cout<<"================================================"<< endl;

    cout <<"\tOpt: ";
    cin>>opcion;
    switch (opcion){
        case 1:
          insertar_nodo();
            break;
         case 2:
           insertar_arista();
            break;
        case 3:
          mostrar_grafo();
            break;
        case 4:
          mostrar_arista();
            break;

    }
    system("cls");
}while (opcion !=5);
}

void insertar_nodo(){

    Nodo *t;
    Nodo *nuevo = new Nodo();
    cout<<"\t Ingrese numero nodo: ";
    cin >>nuevo->numero;
    nuevo->sgte=NULL;
    nuevo->ady=NULL;
    if(cabecera==NULL){
        cabecera=nuevo;
        cout<<" Nodo ingresado\n";
    }else{

        t=cabecera;
        while(t->sgte!=NULL){
            t=t->sgte;
        }
        t->sgte=nuevo;
        cout<<"Nodo Ingresado\n";
    }
    system("pause");
}
void insertar_arista(){
    int ini,fin;
    Arista *nuevo = new Arista();
    Nodo *aux,*aux2;
    if(cabecera==NULL){

        cout <<"\t No hay Grafo\n";
        return;
    }
    nuevo->sgte = NULL;
    cout<<"\t Ingresar El Nodo de Inicio: ";
    cin >>ini;
    cout<<"\n\t Ingresar El Nodo Final: ";
    cin >>fin;
    aux = cabecera;
    aux2 = cabecera;
       while(aux2 != NULL){
        if(aux2->numero == fin){
            break;
        }
        aux2 = aux2->sgte;
       }
       while(aux != NULL){
        if(aux->numero == ini){
            agregar_arista(aux,aux2,nuevo);
            return;
        }
        aux = aux->sgte;
       }
       system("pause");
}

void mostrar_grafo(){

    Nodo *ptr;
    Arista *ar;
    ptr=cabecera;
    cout <<"\t Nodo : Ayacencia \n";
    while(ptr != NULL){

        cout <<" "<<ptr->numero<<"|";
        if(ptr->ady!= NULL){
            ar = ptr->ady;
            while(ar != NULL){
                cout <<" "<<ar->destino->numero;
                ar = ar->sgte;
            }
        }
        ptr=ptr->sgte;
        cout<<endl;
    }
    system("pause");
}
void agregar_arista(Nodo *&aux, Nodo *&aux2, Arista *&nuevo){
    Arista *q;
    if(aux->ady == NULL){
        aux->ady=nuevo;
        nuevo->destino=aux2;
    }else{
        q=aux->ady;
        while(q->sgte != NULL){
           q=q->sgte;
        }
        nuevo->destino=aux2;
        q->sgte=nuevo;
        cout<<"Arista Ingresada\n";
    }
    system("pause");

}
void mostrar_arista(){

    Nodo *aux;
    Arista *ar;
    int var;
    cout<<"\tMostrar Arista del Nodo\n";
    cout<<"\tIngresar el nodo: ";
    cin >> var;
    aux =cabecera;
    while(aux!= NULL){

    if(aux->numero==var){
       if (aux->ady==NULL)
       {
        cout<<"\tEl nodo no tiene arista\n";
        return;
       }
       else{
        cout<<"\tEl nodo: Ayacencia\n";
        cout<<" "<<aux->numero<<"|";
        ar = aux->ady;
        while(ar != NULL){
            cout<<ar->destino->numero<<" ";
            ar=ar->sgte;
        }
        cout<<endl;
        // return;

       }
       
    }
    // else{
        aux =aux->sgte;
    // }
    }
    system("pause");
}