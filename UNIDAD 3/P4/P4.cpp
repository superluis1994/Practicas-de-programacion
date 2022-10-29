#include <iostream>

using namespace std;
struct Nodo{
    string color;
    Nodo *ptrSiguiente;
};
Nodo * primero;
void menu();
void agregar();
void Verlista();
void eliminar();
int main(int argc, char const *argv[])
{
    int opt;
    Nodo *primero =NULL;
    do
    {
    // system("cls");
    menu();
    cout <<"\t Opt: ";
    cin>>opt;
    switch (opt)
    {
        case 1: agregar();
        break;

        case 2: Verlista();
        break;

        case 3: eliminar();
        break;

        default:
        cout<<"\t Opcion no valida\n";
        break;
    }
    system("cls");
    } 
    while (opt !=4);
        cout<<"\t Good by....\n";

    return 0;
}
void menu(){
    cout  <<"\n=============== MENU =======================\n\n";
     cout <<"\t 1. Agregar dato\n";
     cout <<"\t 2. Mostrar lista de dato\n";
     cout <<"\t 3. Eliminar dato\n";
     cout <<"\t 4. Salir\n";
     cout <<"============================================\n";
}
void agregar(){
    Nodo *nuevo= new Nodo();
    cout<<"\t Ingresa un Color: ";
    cin>> nuevo->color;
    nuevo->ptrSiguiente= primero;
    primero= nuevo;
    cout<< "\t El elemento ha sido agregado"<<endl;
    system("pause");
}
void Verlista(){
  Nodo *actual = new Nodo();
  actual = primero;
            cout<<"\n|========== LISTA COLORES ==============|\n\n";
if( primero!= NULL){
        while(actual!= NULL){
            cout<<"\t  -  "<<actual->color<<endl;
            if(primero!=NULL || primero==NULL){
                cout<<"  --------------------------------------\n";
            }
            actual= actual->ptrSiguiente;
        }

}else{
        cout<<"  --------------------------------------\n";
        cout<<"\t   La pila esta vacia"<<endl;
        cout<<"  --------------------------------------\n";

}
            cout<<"\n|=======================================|\n";
system("pause");
}
void eliminar(){
    Nodo *actual= new Nodo();
    string Temp;
    actual= primero;
    Temp=actual->color;
    if(primero !=NULL){
        primero= actual->ptrSiguiente;
        cout<< "\t El color "<<Temp<< " fue eliminado"<<endl;
        delete actual;
    }else{
    cout<<" La pila esta vacia"<<endl;
    }
    system("pause");
}

