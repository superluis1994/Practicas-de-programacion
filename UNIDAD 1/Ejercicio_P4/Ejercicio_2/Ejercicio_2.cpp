#include <iostream>
#include <algorithm>
#include<math.h>
/*Ejercicio 2:
Realizar un programa que permita leer dos matrices de 4X4 y luego que obtenga
     la matriz suma y la muestre por pantalla. Debe utilizar funciones.
*/
using namespace std;
// Utilize una matris Global para almacenar el resultado de la suma
int MTRespuesta[4][4];
void sumarMatris(int Ma1[4][4], int Ma2[4][4]);
int main(int argc, char const *argv[])
{
   setlocale(LC_ALL, "");
   string fila="\n=========================================================================\n";
   string R="";
   int MT3[4][4],MT1[4][4]={{1,2,3,4},{1,2,3,4},{1,2,3,4},{1,2,3,4}};
   int MT4[4][4],MT2[4][4]={{1,2,3,4},{1,2,3,4},{1,2,3,4},{1,2,3,4}};
    
    cout<<fila;
           cout<<"\t BIENVENIDO A LA SUMATORIA DE DOS MATRICES DE 4X4 \n";
    cout<<fila;
    cout<<"\tQuiere llenar la matrices manual S/n?: ";
     cin>>R;

     if(R == "s" || R == "S"){
        for (int i=0; i<4; i++){
        for (int j=0; j<4; j++){
    
       cout<<"\t Matris 1["<<i+1<<"]["<<j+1<<"]";        
       cin>>MT3[i][j];
       cout<<"\t Matris 2["<<i+1<<"]["<<j+1<<"]";        
       cin>>MT4[i][j];
    }

   }
   sumarMatris(MT3,MT4);

     }else{

   sumarMatris(MT1,MT2);
     }
    cout<<fila;
    cout<<"\t\t Respuesta\n";


      for (int i=0; i<4; i++){
    cout<<"\t\t "; 
    for (int j=0; j<4; j++){
        cout<<MTRespuesta[i][j]<<" ";
    }
    cout<<"\n"; 
    
    }
    cout<<fila;



    return 0;
}
void sumarMatris(int Ma1[4][4], int Ma2[4][4]){

for (int i=0; i<4; i++){
    for (int j=0; j<4; j++){
        MTRespuesta[i][j]=Ma1[i][j]+Ma2[i][j];
    }
   }

}



