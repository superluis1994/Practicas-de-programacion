#include <iostream>
#include <string.h>
#include<vector>

// Ejercicio 2:
// Elabore un programa que le permita introducir una lista de nombres de los estudiantes que cursan 
// x materia en la universidad, luego despliegue la lista, solicite al usuario un nombre y que lo busque en el 
// arreglo; si lo encuentra que especifique en la posición donde esta ubicado.


using namespace std;
void nomArray(string[], int);
void Imprimir(string arreglo [],int n);
int Busqueda(string arreglo[],int n,string Bs);
int main(int argc, char const *argv[])
{
     string fila="\n****************************************************************************\n";
        int numEst;
        string nomBs;
        cout<<fila;
         cout<<"\t Numero de estudiantes a ingresar: ";
         cin >> numEst;
         cout<<fila;
         string estudiant[numEst];
         nomArray(estudiant,numEst);
      cout<<"=======================DATOS=============================\n";
         Imprimir(estudiant,numEst);

         cout<<"\n=======================BUSQUEDA=============================\n";
         cout<<"\t Nombre del estudiante: ";
         cin >> nomBs;
         int pos=Busqueda(estudiant,numEst,nomBs);
     if(pos!=-1){
         cout<<"=======================POSICION=============================\n";

            cout<<"\tEl alumno esta en la posicion: "<<pos<<endl;
        }else{
            cout<<"\tEl alumno no se encuentra en el arreglo"<<endl;
        }
    return 0;
}
void nomArray(string alumnos[],int n){

   for(int i = 0; i <n; i++){
       cout<<"\t Nombre del Alumno #"<<i+1<<" ";
       cin>>alumnos[i];

   }
      
}
void Imprimir(string arreglo [],int n){
    
   for(int i = 0; i <n; i++){
       cout <<"\t"<<arreglo[i];
   }

      
}
int Busqueda(string arreglo[],int n,string Bs){
for(int i =n ; i >=0; i--){
     if(arreglo[i] == Bs){
        return i;
        break;
     }
}
return -1;

}