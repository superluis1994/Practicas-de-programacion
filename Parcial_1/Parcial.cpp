#include <iostream>
#include <math.h>

float circulo (float);
float cuadrado (float);
float rectangulo (float,float);
float triangulo (float,float);
using namespace std;
int main(int argc, char const *argv[])
{
    
    string fila="\n*******************************************************\n";
    char rep;
    float dato=0,dato2=0;
    cout <<fila;
    cout<<"\tSeleccina el area que deseas calcular\n";
    cout<<"\t\ta) Circulo \n";
    cout<<"\t\tb) Cuadrado \n";
    cout<<"\t\tc) Rectangulo \n";
    cout<<"\t\td) Triangulo \n";
    cout <<fila;
    cout<<"\t\tOption: ";
    cin>>rep;
    system("cls");
    switch (rep)
    {
    case 'a':
          cout<<fila;
           cout<<"\t Selecciono la area de un cirulo\n";
          cout<<fila;
           cout<<"\t porfavor introducir el radio: \n";
           cin>>dato;
          cout<<fila;
           cout<<"\t La respuesta es: "<<circulo(dato)<<" m^2";
          cout<<fila;


        break;
    case 'b':
         cout<<fila;
           cout<<"\t Selecciono la area de un Cuadrado\n";
        cout<<fila;
           cout<<"\n\t porfavor introducir un lado: ";
           cin>>dato;
        cout<<fila;
           cout<<"\tLa respuesta es: "<<cuadrado(dato)<<" m^2";
        cout<<fila;
        break;
    case 'c':
        cout<<fila;
           cout<<"\t Selecciono la area de un Rectangulo\n";
        cout<<fila;
           cout<<"\n\t porfavor introducir la base: ";
           cin>>dato;
           cout<<"\n\t porfavor introducir la altura: ";
           cin>>dato2;
        cout<<fila;
           cout<<"\tLa respuesta es: "<<rectangulo(dato,dato2)<<" m^2";
        cout<<fila;
        break;
    case 'd':
        cout<<fila;
           cout<<"\t Selecciono la area de un Triangulo\n";
        cout<<fila;
           cout<<"\n\t porfavor introducir la base: ";
           cin>>dato;
           cout<<"\n\t porfavor introducir la altura: ";
           cin>>dato2;
        cout<<fila;
           cout<<"\tLa respuesta es: "<<triangulo(dato,dato2)<<" m^2";
        cout<<fila;
        break;
    
    // default:
    //     break;
    }

    return 0;
}
float circulo (float r){
return 3.1415*(pow(r,2));
}
float cuadrado (float lado){
return pow(lado,2);
}
float rectangulo (float base,float altura){
return base*altura;
}
float triangulo (float base,float altura){
return (base*altura)/2;
}
