#include <iostream>
#include <vector>
#include <iomanip>
// binaria para arreglos bidimensionales.
using namespace std;

const int fil=3,col=8;
void ordenar_areglo(int [3][8]);
void ordenarVector(int [][col]);
void buscaquedaBinaria(int [][col], int,int);
void imprimir(int [][col]);

int main(int argc, char const *argv[])
{

 int vector[fil][col] = {{1,7,10,8,3,4,6,5,},{25,11,15,17,12,19,13,24},{22,16,18,14,30,28,35,32}};  
 int busqueda;
 string opt="S";
  ordenarVector(vector);
while (opt=="s" || opt=="S"){
  imprimir(vector);
  cout <<"Introduzca dato a buscar: ";
  cin>>busqueda;
  buscaquedaBinaria(vector,busqueda,8);

  cout <<"Quieres Probar con otro dato S/n ";
  cin>>opt;
  if(opt=="S" || opt=="s"){
    system("cls");
  }
}

return 0;
}
void imprimir(int vector[][col]){
cout <<"========== Listado de numeros en la base de datos =========\n";
  for (int i = 0; i < fil; i++)
  {
    cout <<"\t|";
    for (int k = 0; k < col; k++)
    {
        cout << vector[i][k]<<" ";
    }
    
    cout <<"\n";
  }
  cout <<"===============================================================\n";

}

void ordenarVector(int array[][col]){

  int v=fil*col;
  int vec[v],aux,h=0;
  
  for(int i=0;i<fil;i++){
    for(int j=0;j<col;j++){
      vec[h++]=array[i][j];
    }
  }

  for (int p = 0; p < v; p++)
  {
    for (int l = 0; l < v-1; l++)
    {
        if(vec[l] > vec[l+1]){
           aux=vec[l];
           vec[l]=vec[l+1];
           vec[l+1]=aux;
          }
    }
    
  }
    h=0;
   for(int i=0;i<fil;i++){
    for(int j=0;j<col;j++){
      array[i][j] = vec[h++];
    }
   }

}
void buscaquedaBinaria(int array[][col],int busq,int n){

    int inf, sup, mitad,respues=0;
    inf= 0;
    sup= 8;
            cout <<"\n====================+ Respuesta +==============================\n"; 
  for (int i = 0; i < fil; i++)
  {
    if(busq>=array[i][0] && busq<=array[i][7] ){


      while(inf<=sup){
        mitad=(inf+sup)/2;

        if(array[i][mitad]==busq){
            // return mitad;
            // return 1;
            respues++;
            cout <<"\n\t\tDato "<<busq <<" Encontrado en ["<<i<<"]["<<mitad<<"]\n";

            break;
        }
      
        if (array[i][mitad]< busq){
            inf=mitad+1;
            mitad=(inf+sup)/2;
        }
        if(array[i][mitad]>busq){
            sup = mitad -1;
            mitad=(inf+sup)/2;
        }
        
      }

    }
  }
    //  return 2;
    if(respues==0){
      cout<<"\n\t\tDato no encontrado\n";
    }
            cout <<"\n===============================================================\n";
  
}
