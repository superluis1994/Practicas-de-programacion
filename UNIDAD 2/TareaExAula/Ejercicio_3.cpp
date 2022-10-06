
#include <iostream>
#include <vector>
#include <iomanip>
// Implemente los métodos de búsqueda secuencial

using namespace std;

  const int fil=3,col=8;
// void ordenar_areglo(int [3][8]);
// void ordenarVector(int [][col]);
void busquedaSecuencial(int [][col], int,int);
void imprimir(int [][col]);

int main(int argc, char const *argv[])
{

 int vector[fil][col] = {{1,7,10,8,3,4,6,5,},{25,11,15,17,12,19,13,24},{22,16,18,14,30,28,35,32}};  
 int busqueda;
 string opt="S";

while (opt=="s" || opt=="S"){
  imprimir(vector);
  cout <<"Introduzca dato a buscar: ";
  cin>>busqueda;
  busquedaSecuencial(vector,busqueda,8);

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


void busquedaSecuencial(int array[][col],int busq,int n){

int respues=0;
cout <<"\n====================+ Respuesta +==============================\n"; 
  for (int i = 0; i < fil; i++)
  {
    for (int j = 0; j <col;j++){
     if(array[i][j] == busq){
            respues++;
            cout <<"\n\t\tDato "<<busq <<" Encontrado en ["<<i<<"]["<<j<<"]\n";
        break;
     }

    
    }
  }
    //  return 2;
    if(respues==0){
      cout<<"\n\t\tDato no encontrado\n";
    }
            cout <<"\n===============================================================\n";
  
}