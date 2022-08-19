#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <windows.h> 
#include <iomanip>

using namespace std;
float const isss=0.031;
float const renta=0.093;
int nivelEmpleado[4]={0,1,2,3};
float nivel1=0.064,nivel2=0.1394,nivel3=0.2104;

// void validarSueldo(float sueldo);
float descuentoIsss(float);
float descuentoRenta(float sueldo);
float nivelBono(int sueldo, int niv);
float seguroVida(int sueldo, int niv);

void gotoxy(int x, int y){
	HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition(hcon, dwPos);
}

int main(int argc, char const *argv[])
{
   string nombre[8];
   float SB[8];
   float B=0;
   float N=6;
   int nivel[8];
   float sueldoFinal;
   string fila="###############################";
   string fila2="-------------------------------------------------------------";
    
    cout<<fila+""+fila<<endl;
    cout<<"\tBIENVENIDO A LA EMPRESA LA CONSTANCIA SA."<<endl;
    cout<<fila+""+fila+"\n"<<endl;
    cout<<"\tPlanilla de descuentos de 8 trabajadores .\n"<<endl;

    for(int i=0; i<=7;i++){
    cout<<"\t"<<fila2<<endl;
    cout<<"\t\tnombre del trabajador "<<i+1<<" : ";
    cin >> nombre[i];
    cout<<endl;
    //valido que le campo vay en 0 o en numero negativos
    while(B<1 || B<=-1){
    cout<<"\t\tSueldo Base : $";
    cin>>B;
    if(B<1 || B<=-1){
    cout<<"\t\tSueldo no valido "<<B<<"\n";
    }
    }
    SB[i]=B;
    cout<<endl;
    //aqui valido el nivel
     while(N<=-1 || N>3){
    cout<<"\t\tNivel de empleado : ";
    cin>>N;
    if(N<=-1 || N>3){
    cout<<"\t\tNivel no valido "<<N<<"\n";
    }
    }
    nivel[i]=N;
    cout<<endl;

    B=0;
    N=6;
    }
      system("cls");
    cout<<"NOMBRE                   ISSS            RENTA          BONO     SEGURO DE VIDA  SUELDO BASE    SUELDO FINAL \n";
    cout<<fila2+fila2<<"\n";

    for(int j=0; j<8; j++){

        float DS=descuentoIsss(SB[j]);
        float Rn=descuentoRenta(SB[j]);
        float Nb=nivelBono(SB[j],nivel[j]);
        float Sv=seguroVida(SB[j],nivel[j]);
        float sueldo=((((SB[j]-DS)-Rn)+Nb)-Sv);
        sueldoFinal+=sueldo;
    gotoxy(0,2+j);
    cout<<fixed<< setprecision(2)<<nombre[j];
    gotoxy(25,2+j);
    cout<<"$"<<fixed<< setprecision(2)<<DS;
    gotoxy(41,2+j);
    cout<<"$"<<fixed<< setprecision(2)<<Rn;
    gotoxy(56,2+j);
    cout<<"$"<<fixed<< setprecision(2)<<nivelBono(SB[j],nivel[j]);
     gotoxy(70,2+j);
    cout<<"$"<<fixed<< setprecision(2)<<seguroVida(SB[j],nivel[j]);
     gotoxy(82,2+j);
    cout<<"$"<<fixed<< setprecision(2)<<SB[j];
     gotoxy(99,2+j);
    cout<<"$"<<fixed<< setprecision(2)<<sueldo;
    }
    cout<<"\n"+fila2+fila2<<"\n";
    cout<<"\t\t\t SUELDO TOTAL DE LOS TRABAJADORES : $"<<sueldoFinal<<endl;
    cout<<"\n"+fila2+fila2<<"\n";



    return 0;
}

float descuentoIsss(float sueldo){
    
     float sinIss=sueldo*isss;
           
           
    return sinIss;
   }
float descuentoRenta(float sueldo){
    
     float sinReta=sueldo*renta;
          return sinReta;
   }

float nivelBono(int sueldo, int niv){
    float bono;
    switch (niv)
    {
    case 0:
            bono=7;
        break;
    case 1:
            bono=sueldo*nivel1; 
        break;
    case 2:
            bono=sueldo*nivel2;
        break;
    case 3:
            bono=sueldo*nivel3;
        break;
    default:
        break;
    }
          return bono;
   }

   float seguroVida(int sueldo, int niv){
    float Sg;
    switch (niv)
    {
    case 2:
            Sg=sueldo*0.114;
        break;
    case 3:
            Sg=sueldo*0.114;
        break;
    default:Sg=0;
        break;
    }
          return Sg;
   }
   
