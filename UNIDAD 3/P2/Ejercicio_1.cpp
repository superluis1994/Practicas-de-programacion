#include <iostream>

using namespace std;
struct Nodo{
  string name;
  string telefono;
  Nodo *ptrSiguiente;

};
void insertar(Nodo *&, string , string );
void mostrarLista(Nodo *);
void buscar (Nodo *, string);
void eliminar(Nodo *&, string );

int main(int argc, char const *argv[])
{
    Nodo *lista=NULL;
    string nombre="",resp="S",f="s",opt3="S",opt4="s";
    string telef,bs,brr;
    int opt;
    

      do
      {
        system("cls");
    cout<<"\n==========================================\n";
    cout <<"\tAGENDA DE CONTACTOS";
    cout<<"\n==========================================\n";
        /* code */
        cout<<"\t1. REGISTRAR CONTACTO\n";
        cout<<"\t2. LISTAR CONTACTOS\n";
        cout<<"\t3. BUSCAR CONTACTO\n";
        cout<<"\t4. ELIMINAR CONTACTOS\n";
        cout<<"\t5. SALIR\n";
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
    
        else if(opt==2){
            if(lista != NULL){
           mostrarLista(lista);
           }else{
            cout<<"\nLa lista esta vacisa\n";
           
           }
        }
       else if(opt==3){
           
           if(lista != NULL){

            while (opt3 == "s" || opt3 == "S"){
            cout<<"\n======== BUSQUEDA =========\n";
            cout<<"NOMBRE DEL CONTACTO: ";
            cin >> bs;
            buscar(lista, bs);
            cout<<"Quiere buscar otro contacto s/n: ";
            cin >> opt3;
            }
           }else{
            cout<<"\nLa lista esta vacisa\n";
            opt3="S";
           }
          
        }
       else if(opt==4){
        if(lista != NULL){
           while (opt4 == "s" || opt4 == "S"){
            cout<<"\n======== ELIMINAR =========\n";
            cout<<"NOMBRE DEL CONTACTO: ";
            cin >> brr;
            eliminar(lista, brr);
            cout<<"Quiere borrar otro contacto s/n: ";
            cin >> opt4;
          
           }
        }
        else{
            cout<<"\nLa lista esta vacisa\n";
            opt4="s";
           }
           opt4="s";
        }
      else if(opt==5){
        cout<<"\n\tgood bye.....\n";
            return 0;
        }
        cout<<"QUIERE REGRESAR AL MENU s/n: ";
        cin>>f;
      } while (f =="s");
    
    
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
void buscar (Nodo *lista, string n){
    bool bandera = false;
    // int cont=0;
    Nodo *actual = new Nodo();
    actual = lista;
    while((actual!=NULL)){
        if(actual->name==n){
            bandera= true;
            cout<<"el elemento fue encontrado"<<endl;
            cout<<"\t{"<<actual->name<<" : "<<actual->telefono<<"}\n";
            // break;
        }
        actual= actual->ptrSiguiente;
       
    }
    
     if (bandera==false){
        cout<<"el elemento no fue encontrado"<<endl;

    }
   
}
void eliminar(Nodo *&lista, string n){
    string pregunta="";
    if (lista != NULL){
        Nodo *aux_borrar;
        Nodo *anterior = NULL;
        aux_borrar= lista;
        while ((aux_borrar != NULL) && (aux_borrar->name !=n)){
           
            anterior = aux_borrar;
            aux_borrar= aux_borrar->ptrSiguiente;
        }
        if( aux_borrar==NULL){
            cout<< "no encuentra el dato";
        }else if(anterior ==NULL){
            
            cout<<"\nSeguro que quiere eliminar s/n: ";
            cin >> pregunta;
            if(pregunta=="s" || pregunta=="S"){
            lista = lista->ptrSiguiente;
            delete aux_borrar;
            cout<<"\n Se elimino correctamente ";
            }else{
            cout<<"\nNo se elimino \n";

            }
        }else{
            cout<<"\nSeguro que quiere eliminar s/n: ";
            cin >> pregunta;
            if(pregunta=="s" || pregunta=="S"){
            anterior->ptrSiguiente = aux_borrar->ptrSiguiente;
            delete aux_borrar;
            cout<<"\n Se elimino correctamente\n";
            }else{
            cout<<"\nNo se elimino \n";
            }
        }
    }
   

}
