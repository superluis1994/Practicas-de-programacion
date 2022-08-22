#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{
    int Datos[10];
    string fila="=====================================================\n";
    cout<<fila;
    cout<<"\t Crear un Array de 10 Datos"<<endl;
    cout<<fila;
   for(int i = 0; i<10;i++){
    cout<<"\t introduzca numero "<<i+1<<" : ";
    cin>>Datos[i];
   }

//    for(int h = 0; h<10;h++){
//     cout<<"\t Dato "<<h+1<<" : "<<Datos[h]<<endl;
//    }
     int x=Datos[0];
     int y=0;
    for(int m = 0; m<10;m++){

          if(Datos[m] < x){
            x=Datos[m];
          }
   }

   for(int m = 0; m<10;m++){

          if(Datos[m] > y){
            y=Datos[m];
          }
   }
cout<<fila;
   cout<<"\t Valor menor: "<<x<<"\n";
   cout<<"\t Valor Mayor: "<<y<<"\n";
cout<<fila;

    
    
    return 0;
}
