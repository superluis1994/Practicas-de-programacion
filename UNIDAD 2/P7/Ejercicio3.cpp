#include <iostream>
using namespace std;
// Rellenar un arreglo con n números, posteriormente
//  utilizando punteros determinar el menor elemento del vector.
void RellenarArray(int *,int);
int DeterminarMenor(int *, int);

int main(int argc, char const *argv[])
{
   int n;
    cout <<"\n==================================================================\n";
    cout<<"\tLLENAR UN ARRAY CON LOS NUMERO QUE USTED INTRODUZCA \n";
    cout<<"\tY MOSTRAR EL NUMEROS MENOR";
    cout <<"\n==================================================================\n";
  cout<<"\tCuantos numero quiere introducir ";
  cin >>n;
    int num [n];
    int *ptrNum;
    ptrNum = num;
    RellenarArray(ptrNum,n);

    cout<<"\n==================Numeros Menor Es ===============================\n";

   cout<<"\t\tEl dato menor es: "<<DeterminarMenor(ptrNum,n);
    
    return 0;
}
void RellenarArray(int *n,int index){
    int aux;
     for(int i = 0; i <index;++i){

     cout<<"\t\tDatos posicion "<<i<<": ";
     cin >>aux;
     if(aux>=0){
      n[i]=aux;
     }else{
        cout<<"\nNumero incorrecto\n";
        cout<<"\n Intentalo de nuevo\n";
        i--;
     }

     }

}

int DeterminarMenor(int *numero, int n) {

    int aux;
    int numAux,menor=0;


      menor =*numero;
    for (int i = 0; i < n; i++)
    {
      if(menor>*numero){

          menor=*numero;
      }else{
      }
      ++numero;
    }
  return menor;
}
