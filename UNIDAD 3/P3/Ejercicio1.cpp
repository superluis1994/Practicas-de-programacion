#include <iostream>
 using namespace std;

void Registrar_cancion();
void Mostrar_lista_asendete();
void Mostrar_lista_desendente();
void buscar_Cancion();
void eliminar_cancion();
 struct Nodo{
  string cancion;
  Nodo *ptrSiguiente;
  Nodo *ptrAnterior;

};
Nodo *Primero, *Ultimo;
 int main(int argc, char const *argv[])
 {
    
    int opt=0;
    do
    {
      system("cls");
      cout << "===================+ LISTA DE REPRODUCION +=========================\n";
      cout << "\t1. REGISTRAR CANCION\n";
      cout << "\t2. LISTAR LAS CANCIONES DE PRIMERA A LA ULTIMA\n";
      cout << "\t3. LISTAR LAS CANCIONES DE LA ULTIMA A LA PRIMERA\n";
      cout << "\t4. BUSCAR CANCION\n";
      cout << "\t5. ELIMINAR CANCI0N\n";
      cout << "\t6. SALIR\n";
      cout << "====================================================================\n";

      cout <<"\tOpt: ";
      cin>>opt;



      switch (opt)
      {
      case 1:
         Registrar_cancion();
         break;
      case 2:
         Mostrar_lista_asendete();
         break;
      case 3:
         Mostrar_lista_desendente();
         break;
      case 4:
         buscar_Cancion();
         break;
      case 5:
         eliminar_cancion();
         break;
      case 6:
         cout<<"\t\ngood bye...\n"; 
         break;
      
      default:
      cout<<"\tOpcion no valida\n";
         break;
      }


    } while (opt!=6);
    



    return 0;
 }
 void Registrar_cancion(){

   Nodo *nuevo =new Nodo();
   cout<<"\tIngresar el nombre de la Cancion: ";
   cin>>nuevo->cancion;
   if(Primero==NULL){

      Primero =nuevo;
      Primero->ptrSiguiente=NULL;
      Primero->ptrAnterior=NULL;
      Ultimo=Primero;
   }else{
      Ultimo->ptrSiguiente=nuevo;
      nuevo->ptrAnterior=Ultimo;
      nuevo->ptrSiguiente=NULL;
      Ultimo=nuevo;
   }
   cout<<"\tLa cancion se agrego correctamente\n";
   system("pause");
 }

 void Mostrar_lista_asendete(){

   Nodo *actual =new Nodo();
   actual =Primero;
   int num=1;
   if(Primero != NULL){
      cout <<"\t\n\n================LISTA DE REPRODUCION================\n";
      while (actual != NULL)
      {
         cout <<"\t\t"<<num<<". " <<actual->cancion<<"\n";
         actual = actual->ptrSiguiente;
         num++;
      }
      cout<<"\t\n=====================================================\n";
      cout <<endl;
   }else{
      cout<<"\tLa lista de reproducion se encuentra vacia\n"; 
   }
   system("pause");
 }
 void Mostrar_lista_desendente(){

   Nodo *actual =new Nodo();
   actual =Ultimo;
   int num=1;
   if(Primero != NULL){
      cout <<"\t\n\n================LISTA DE REPRODUCION================\n";
      while (actual != NULL)
      {
         cout <<"\t\t"<<num<<". " <<actual->cancion<<"\n";
         actual = actual->ptrAnterior;
         num++;
      }
      cout<<"\t\n=====================================================\n";
      cout <<endl;
   }else{
      cout<<"La lista de reproducion se encuentra vacia\n"; 
   }
   system("pause");
 }
  void buscar_Cancion(){

   Nodo *actual = new Nodo();
   actual=Primero;
   string abuscar;
   bool bandera= false;
   cout<<"\n=====================================================\n";
   cout<<"Que Cancion desea buscar: ";
   cin >> abuscar;
   if(Primero != NULL){
while(actual !=NULL){
   if(actual->cancion == abuscar){
      cout << "Cancion encontrada: "<<actual->cancion<<"\n";
      bandera=true;
      break;
   }
   actual =actual->ptrSiguiente;
}
if(bandera== false){
   // cout<<"Elemento encontrado";
    cout<<"\nElemento no encontrado\n";
   }
   system("pause");
   }
 }
 void eliminar_cancion(){
    Nodo *actual = new Nodo();
    Nodo *Anterior = new Nodo();
    Anterior =NULL;
    actual =Primero;
    string abuscar;
    bool bandera=false;
   cout<<"Que nombre de la Cancion que desea eliminar: ";
   cin >> abuscar;    
   if(Primero != NULL){

   while ((actual !=NULL) && (bandera!=true)){
      if(actual->cancion == abuscar){
         if (actual ==Primero)
         {
            Primero = Primero->ptrSiguiente;
            Primero->ptrAnterior=NULL;
         }
         else if(actual == Ultimo){
            Anterior-> ptrSiguiente=NULL;
            Ultimo=Anterior;
         }
         else{
            Anterior->ptrSiguiente=actual->ptrSiguiente;
            actual =actual->ptrAnterior;
         }
         // cout << "Se elimino con exito\n";
         bandera=true;
      }
         Anterior=actual;
         actual =actual->ptrSiguiente;
   }
   if (bandera == true)
   {
      cout << "La cacion se elimino con exito\n";
   }else{
      cout << "No se  elimino con exito la cancion\npor que la cancion no se encuentra en la lista\n";
   }
   }else{
      cout << "\nLista de reproducion vacia\n";
   }
   system("pause");
  
 }
 