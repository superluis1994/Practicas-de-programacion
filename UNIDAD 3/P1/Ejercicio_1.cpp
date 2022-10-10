#include <iostream>

using namespace std;
struct Nodo{
  string name;
  string telefono;
  Nodo *ptrSiguiente;

};
void insertar(Nodo *&, string , string );
void mostrarLista(Nodo *);

int main(int argc, char const *argv[])
{
    Nodo *lista=NULL;
    string nombre="",resp="S",f="s";
    string telef;
    int opt;
    cout<<"\n==========================================\n";
    cout <<"\tAGENDA DE CONTACTOS";
    cout<<"\n==========================================\n";

      do
      {
        /* code */
        cout<<"\t1. REGISTRAR CONTACTO\n";
        cout<<"\t2. LISTAR CONTACTOS\n";
        cout<<"\t3. SALIR\n";
        cout<<"opt: ";
        cin>>opt;
      
        
        if(opt==1){
    do
    {

        cout<<"NOMBRE DEL CONTACTO: ";
        cin >> nombre;
        cout<<"NUMERO DEL CONTACTO: ";
        cin >> telef;
        insertar(lista,nombre,telef);
        cout<<"Agregar otro contacto s/n: ";
        cin >> resp;
    } while (resp == "S" || resp == "s");
        }
    
        if(opt==2){
           mostrarLista(lista);
        }
        if(opt==3){
            return 0;
        }
        cout<<"QUIERE SALIR s/n \n";
        cin>>f;
      } while (f !="s");
    
    
    return 0;
}
void insertar(Nodo *&lista, string nombre, string tel){
   Nodo *nuevo_nodo = new Nodo;
   nuevo_nodo->name=nombre;
   nuevo_nodo->telefono=tel;
   Nodo *aux = lista;
   Nodo *aux2;

while(aux != NULL){
    aux2 = aux;
    aux = aux->ptrSiguiente;
}
if(lista == aux){
    lista=nuevo_nodo;
} else{
    aux2->ptrSiguiente=nuevo_nodo;
}

  nuevo_nodo->ptrSiguiente=aux; 
 
}
void mostrarLista(Nodo *lista){
    Nodo * Atc =new Nodo();
    Atc=lista;
    cout <<"\n=============AGENDA=================\n\n";
    while (Atc != NULL)
    {
        cout<<"\t{"<<Atc->name<<" : "<<Atc->telefono<<"}\n";
        Atc=Atc->ptrSiguiente;
    }
    cout <<"\n====================================\n";

    

}
