#include <iostream>

using namespace std;
struct Nodo{
    int dato;
    Nodo *ptrsiguiente;
};
void insertar(Nodo *&, int);
void mostrar_datos(Nodo *);
void eliminar(Nodo *&, int );
void buscar (Nodo *, int);

int main()
{
    Nodo *lista=NULL;
    int valor, dato;

    string resp= "SI";
    do{
        cout << "Introduce un valor a la lista" << endl;
        cin>>valor;

        insertar(lista, valor);
        cout<<"Quieres agregar otro dato?SI/NO"<<endl;
        cin>>resp;
    }while((resp=="SI")|| (resp=="si"));
    mostrar_datos(lista);
    cout<<" que dato deseas buscar"<<endl;
    cin>>dato;
   // eliminar(lista, dato);
   buscar(lista, dato);
    mostrar_datos(lista);


    return 0;
}
void insertar(Nodo *&lista, int n){
    Nodo *nuevo_nodo= new Nodo();
    nuevo_nodo->dato = n;
    Nodo *aux1 =lista;
    Nodo *aux2;

    while (aux1 !=NULL) {
        aux2 = aux1;
        aux1= aux1->ptrsiguiente;
    }
    if(lista == aux1){
        lista= nuevo_nodo;

    }else{
        aux2->ptrsiguiente= nuevo_nodo;

    }
    nuevo_nodo->ptrsiguiente= aux1;
}
void mostrar_datos(Nodo *lista){
    Nodo *actual= new Nodo();
    actual = lista;
    while(actual !=NULL){
        cout<< actual->dato <<"->";
        actual = actual->ptrsiguiente;
    }
}
void eliminar(Nodo *&lista, int n){
    if (lista != NULL){
        Nodo *aux_borrar;
        Nodo *anterior = NULL;
        aux_borrar= lista;
        while ((aux_borrar != NULL) && (aux_borrar->dato !=n)){
            anterior = aux_borrar;
            aux_borrar= aux_borrar->ptrsiguiente;
        }
        if( aux_borrar==NULL){
            cout<< "no encuentra el dato";
        }else if(anterior ==NULL){
            lista = lista->ptrsiguiente;
            delete aux_borrar;
        }else{
            anterior->ptrsiguiente = aux_borrar->ptrsiguiente;
            delete aux_borrar;
        }
    }
    else {
        cout << "la lista est vacia"<<endl;
    }

}
void buscar (Nodo *lista, int n){
    bool bandera = false;
    Nodo *actual = new Nodo();
    actual = lista;
    while((actual!=NULL)&& (actual->dato <=n)){
        if(actual->dato==n){
            bandera= true;
        }
        actual= actual->ptrsiguiente;
    }
    if (bandera==true){
        cout<<"el elemento fue encontrado"<<endl;

    }
    else{
        cout<<"elemento no encontrado"<<endl;
    }
}
