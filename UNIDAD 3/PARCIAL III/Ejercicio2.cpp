#include <iostream>

using namespace std;
struct Nodo{
    int binario;
    Nodo *ptrSiguiente;
};
void agregar();
void Verlista();
Nodo * primero;
int dato;
int main(int argc, char const *argv[])
{
    Nodo *primero =NULL;
   
       agregar();

return 0;
}
void agregar(){
    int residuo;
    cout<<"\n*************************************************\n";
    cout<<"*          COVERSOR DE NUMERO BINARIOS          *";
    cout<<"\n*************************************************\n";
    cout<<"\t   Ingresa un numero: ";

    cin>> dato;
    while(dato >1){
    Nodo *nuevo= new Nodo();
    residuo=dato%2;
    dato=dato/2; 
    nuevo->binario=residuo;
    nuevo->ptrSiguiente= primero;
    primero= nuevo;
    }
    Nodo *nuevo= new Nodo();
    nuevo->binario=dato;
    nuevo->ptrSiguiente= primero;
    primero= nuevo;

    Verlista();
  
}
void Verlista(){
  Nodo *actual = new Nodo();
  actual = primero;   
if( primero!= NULL){
    cout<<"\n============== Numero Binario ===================\n\n\t\t";
        while(actual!= NULL){
            cout<<" "<<actual->binario;
            actual= actual->ptrSiguiente;
        }
    cout<<"\n===================================================\n";
    

}else{
        cout<<"  --------------------------------------\n";
        cout<<"\t   La pila esta vacia"<<endl;
        cout<<"  --------------------------------------\n";

}
system("pause");
}