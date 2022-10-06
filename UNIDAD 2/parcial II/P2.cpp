#include <iostream>
#include<math.h>

using namespace std;
void Llenardatos(int [], int);
void imprimir(int [], int);
void ordenar_areglo(int a[],int x);
void mediana (int [],int );
// int NumRepetidoMas (int [],int );
void LiteralD (int [],int );
void mayorVeces (int num[],int x);
void LiteralE (int num[],int x);
int main(int argc, char const *argv[])
{

    int array[25];
    int arrayAUX[25];

    cout <<"\n======================================================\n";
    cout <<"\t LLENAR EL ARREGLO CON 10 DATOS"<<endl;
    cout <<"\n======================================================\n";
    
    Llenardatos(array,10);
    cout <<"\n=====================Sin ordenar=================================\n";
    imprimir(array,10);
    LiteralE(array,10);
    cout <<"\n===================== ordenado=================================\n";
    ordenar_areglo(array,10);
    imprimir(array,10);
    
    cout <<"\n=======================Literal B===============================\n";
     mediana(array,10);
    
    cout <<"\n======================================================\n";

    LiteralD(array,10);
    cout <<"\n===========LITERAL C=============================\n";
    mayorVeces(array,10);
    




    return 0;
}
void Llenardatos(int array[] ,int index ){

    int varAux;
 for (int i = 0; i < index; i++)
     {
    cout <<"\t Dato "<<i<<": ";
    cin >>varAux;
    if(varAux<1){
        cout <<"Introducir numero mayores de 0\n";
        i--;
    }else{
       array[i]=varAux;
    }

     }
}
void imprimir(int array[], int x){
   cout <<"\t";
      
    for (int i = 0; i < x; i++)
    {
        cout <<" "<<array[i];
    }
    
}


void ordenar_areglo(int a[],int x){

 int aux;
  for(int i=0; i<x; i++)
    {
    
    for(int f=0; f<x-1; f++)
        {
          if(a[f] > a[f+1]){
           aux=a[f];
           a[f]=a[f+1];
           a[f+1]=aux;
          }
        }
    }

}
void mediana(int num[], int x){
   
 float rep;
    if(x%2 == 0){
		int pos=x/2;
     rep=float((num[pos-1]+num[pos]))/2;

    }
   cout<<"\tMediana es: "<<rep<<endl;
}

 void LiteralD (int array[],int x ){

   cout <<"\n=======numero Menore de 30===========\n";
   cout <<"\t";
    for (int i = 0; i < x; i++)
    {
        if(array[i]<30){
            cout <<" "<<array[i];
        }
    }
     cout <<"\n=======numero Mayores de 70========\n";
   cout <<"\t";
    for (int i = 0; i < x; i++)
    {
        if(array[i]>70){
            cout <<" "<<array[i];
        }
    }
     
}
void mayorVeces(int num[], int x){   
int aux=0;
int veces=0;
int moda=0;

for(int f=0;f<x;f++){

   for(int i=0;i<x;i++){
      if(num[f]== num[i] && f!= i){
        aux++;
	  } 
   }
if(aux>veces){
	veces=aux;
	 moda=num[f];
}

   aux=0;  
}

cout<<"\tEl que se repite mas es: "<<moda<<endl;

}
void LiteralE (int num[],int x){
    int dato= num[0],index=0;
   
    for (int i = 0; i < x-1; i++)
    {
        if(dato < num[i+1]){
            dato=num[i+1];
            index=i;
        }

    }
    cout <<"\n================DATO MAYOR=================\n";
    cout <<"\tEl dato "<<dato<<" posicion "<<index+1<<endl;
    
}




