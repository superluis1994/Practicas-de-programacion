#include <iostream>
#include <cmath>
#include <stdio.h>

using namespace std;
void menu();
int areaEquilatero(int);
float areaRombo(int, int);
int perimetro(int);
int cuboVolume(int);

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
        int valor,valor2,valor3,perim;
        case 1:
              
              cout<<"\t Selecciono Area de un Triangulo equilatero \n";
              cout <<fila;

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
                 cout<<"\t Selecciono Area de un Rombo \n";
              cout <<fila;

              cout<<"\t Escriba la Diagonal Mayor: ";
              cin>>valor;
              cout<<"\t Escriba la Diagonal menor: ";
              cin>>valor2;
               cout<<"\t Escriba un lado del Rombo: ";
              cin>>valor3;
             resp =areaRombo(valor,valor2);
            perim =perimetro(valor3);

             if(resp != -60 && perim != -60)
             {
                cout <<fila;
                cout<<"\t Resultado del Rombo \n";
                cout<<"\t La area seria: "<< resp <<" cm^2\n";
                cout<<"\t El Perimetro es: "<< perim <<" cm\n";
                cout <<fila;
             }
             else{
                cout <<fila;
                cout<<"\t datos erroneos Revisar porfavor\n";
                cout <<fila;

             }
        break;
         case 3:
                 cout<<"\t Selecciono Volume del Cubo \n";
              cout <<fila;

              cout<<"\t Escriba un lado del cubo: ";
              cin>>valor;
              resp =cuboVolume(valor);
          if(resp != -60)
             {
                cout <<fila;
                cout<<"\t Resultado  del cubo \n";
                cout<<"\t Volume es: "<< resp <<" ^3\n";
               
                cout <<fila;
             }
             else{
                cout <<fila;
                cout<<"\t numero no valido\n";
                cout <<fila;

             }
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
system("cls");
    if(x>0){
        
        var=((pow(x,2))*(sqrt(3)))/4;
    }else{
        var=-60;
    }

return var;
}
float areaRombo(int Dmayor, int Dmenor){
    float area;
    if(Dmayor> Dmenor){
    if(Dmayor>0 || Dmenor>0){
      area =(Dmayor * Dmenor)/2;
    }else{
        area=-60;
      }
    }else{
        area=-60;
    }

    return area;
}
int perimetro(int perimetro){
    system("cls");
    int peritmetr;
    if(perimetro>0){
      peritmetr=perimetro+perimetro+perimetro+perimetro;
    }
else{
        peritmetr=-60;
      }
    return peritmetr;

}

int cuboVolume(int volume){
    system("cls");
    int vol;
      if(volume>0){
      vol=volume*volume*volume;
      }else{
        vol=-60;
      }

    return vol;

}

