#include <iostream>

using namespace std;

struct Nodo {
    char dato;
    Nodo *izq;
    Nodo *der;
};
Nodo *arbol = NULL;
Nodo *crearNodo(char);
void menu();
void insertar(Nodo *&,char);
void ImprimirArbol(Nodo *,int);
bool Buscar(Nodo *arbol,char);
void Preorder(Nodo *);
void Inorder(Nodo *);
void postorder(Nodo *);


int main(int argc, char const *argv[])
{
    
    menu();

    return 0;
}
void menu(){
int opcion,contador=0;
char datos;

do{
    cout<<"================ Menu =========================\n"<< endl;
    cout <<"\t1. Insertar"<<endl;
    cout <<"\t2. Mostrar"<<endl;
    cout <<"\t3. Recorrer Pre-Orden"<<endl;
    cout <<"\t4. Recorrer in-Orden"<<endl;
    cout <<"\t5. Recorrer Post-Orden"<<endl;
    cout <<"\t6. Buscar"<<endl;
    cout <<"\t7. Salir"<< endl;
    cout<<"================================================"<< endl;

    cout <<"\tOpt: ";
    cin>>opcion;
    switch (opcion){
        case 1:
        cout <<"Ingrese el dato: ";
        cin>>datos;
               insertar(arbol,datos);
               system("pause");
            break;
         case 2:
          ImprimirArbol(arbol,contador);
               system("pause");

            break;
        case 3:
           Preorder(arbol);
               system("pause");

            break;
        case 4:
            Inorder(arbol);
               system("pause");

            break;
       case 5:
            postorder(arbol);
               system("pause");
            break;
        case 6:
         cout <<"Ingrese el dato: ";
        cin>>datos;
            bool p =Buscar(arbol,datos);
            if(p){
                cout<<"Si se encontro el dato\n";
            }else{
                cout<<"No se encontro el dato\n";

            }
               system("pause");

            break;
    }
    system("cls");
}while (opcion !=7);
}

void insertar(Nodo *&arbol,char n){

    if(arbol == NULL){
        Nodo *nuevo_nodo = crearNodo(n);
        arbol=nuevo_nodo;
    }
    else{
        int raiz = arbol->dato;
        if(n<raiz){
            insertar(arbol->izq,n);
        }else{
            insertar(arbol->der,n);
        }

    }
}
Nodo *crearNodo(char n){
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato=n;
    nuevo_nodo->der =NULL;
    nuevo_nodo->izq = NULL;
    return nuevo_nodo;
}

void ImprimirArbol(Nodo *arbol ,int contador){
    if(arbol == NULL){
        return;
    }else{
        ImprimirArbol(arbol->der, contador+1);
        for(int i=0; i<contador;i++){
            cout <<"  ";
        } 
        cout <<arbol->dato<<endl;
        ImprimirArbol(arbol->izq, contador+1);
    }
}
 bool Buscar(Nodo *arbol ,char busqueda){
  
    if(arbol == NULL){
        return false;
    }else{
         
         if(arbol->dato==busqueda){
            return true;
         }else{
            if(arbol->dato > busqueda){
           return Buscar(arbol->izq,busqueda);
          }else{
            return Buscar(arbol->der,busqueda);
          }
         }
         
    }
}
void Preorder(Nodo *arbol){
    if(arbol == NULL){
        return;
    }else
    {
         cout <<arbol->dato<<"-";
         Preorder(arbol->izq);
         Preorder(arbol->der);
    }
    
}
void Inorder(Nodo *arbol){
     if(arbol == NULL){
        return;
    }else
    {
         Inorder(arbol->izq);
         cout <<arbol->dato<<"-";
         Inorder(arbol->der);
    }
}
void postorder(Nodo *arbol){
      if(arbol == NULL){
        return;
    }else
    {
         Inorder(arbol->izq);
         Inorder(arbol->der);
         cout <<arbol->dato<<"-";
    }

}