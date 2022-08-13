#include <iostream>
#include <cmath>

using namespace std;
void menu();
int areaEquilatero(int);
int main(int argc, char **argv){
    string fila="=========================================================\n";
   int opt=0;
   float resp;
     cout <<fila;
     cout <<"\tBIENVENIDO A LA APP PROCESO FACILES \n";
     cout <<fila;
     menu();
     cout<<"\n\t Opt: ";
     cin>>opt;
    
        cout<<fila;
    switch(opt){
        int valor;
        case 1:
              
              cout<<"\t Selecciono Area de un Triangulo equilatero \n";
              cout<<"\t Escriba un lado del Triangulo: ";
              cin>>valor;
             resp =areaEquilatero(valor);
             if(resp != -60)
             {
                cout <<fila;
                cout<<"\t La area seria: "<< resp <<"\n";
                cout <<fila;
             }
             else{
                cout <<fila;
                cout<<"\t numero no valido\n";
                cout <<fila;

             }

        break;
         case 2:
        break;
         case 3:
        break;
        default:;
    }
        // cout<<fila;
    


    return 0;
}

void menu(){
 
 cout<<"\t 1. Area de un triagulo equilatero\n";
 cout<<"\t 2. Area de un triagulo equilatero\n";
 cout<<"\t 3. Area de un triagulo equilatero\n";
 cout<<"\t 4. Salir \n";

}
int areaEquilatero(int x){
int var;
    if(x>0){
        
        var=((pow(x,2))*(sqrt(3)))/4;
    }else{
        var=-60;
    }

return var;
}


