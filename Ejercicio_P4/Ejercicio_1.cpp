#include <iostream>
#include <algorithm>
#include<math.h>
/*Ejercicio 1:
Elaborar un programa que permita calcular la media, 
la mediana y la moda de un conjunto de n datos introducidos 
por teclado, debe de hacer uso de arreglos y funciones.
*/
using namespace std;
float media (int num[],int x);
float mediana (int num[],int x);
void moda (int num[],int x);
int main(int argc, char const *argv[])
{
    int n=0;
	string fila="=============================================================\n";

	cout<<fila;
	cout<<"\t DETERMINAMOS LA MEDIA, LA MEDIANA Y LA MODA\n";
	cout<<fila;
	cout<<"\n\t Con cuantos numero contara la serie:  ";cin>>n;
    int numeros[n];
	int pos,aux;
	
     for(int l=0;l<n;l++){
       cout<<"\n\tNumero #"<<l+1<<" :";
	   cin>>numeros[l];
	   cout<<"\n";
	 }

	for(int i=0;i<n;i++){
		pos = i; 
		aux = numeros[i];
		
		while((pos>0) && (numeros[pos-1] > aux)){
			numeros[pos] = numeros[pos-1];
			pos--;
		}
		numeros[pos] = aux;
	}
    
    float md=media(numeros,n);
    int mda=mediana(numeros,n);
	cout<<fila;
    cout<<"\n\tLa serie es: ";
	 for(int l=0;l<n;l++){
	   cout<<" "<<numeros[l];
	 }
	cout<<"\n"<<fila;
	cout<<"\n\tLa Media es: "<<md<<endl;
	cout<<"\tLa Mediana es: "<<mda<<endl;
	moda(numeros,n);
	cout<<fila;

    return 0;
}
float media(int num[],int x){
   
 float rep;
    for(int g = 0;g<x;g++){
            rep=rep+num[g];
        }
        rep=rep/x;
return rep;
}
float mediana(int num[], int x){
   
 float rep;
    if(x%2 == 0){
		int pos=x/2;
           rep=(num[pos]+num[pos+1])/2;

    }else{
		int pos=floor(x/2);
		rep=num[pos];
    }

return rep;
}
void moda(int num[], int x){   
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

cout<<"\tLa Moda es: "<<moda<<endl;

}
