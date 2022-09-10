#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{

int matriz[3][3];


for (int i=0; i<3; i++)
 {
for (int j=0; j<3; j++)
    {
        if(i == 0){
             if(j == 0){
              matriz[i][j]=1;
            }else{
              matriz[i][j]=0;

            }
        }
      if(i == 1){
            if(j == 1){
              matriz[i][j]=1;
            }else{
              matriz[i][j]=0;

            }
        }
        if(i == 2){
            if(j == 2){
              matriz[i][j]=1;
          
            }else{
              matriz[i][j]=0;
              
            }
        }
    }
 }


for (int fila=0; fila<=2; fila++)
 {
for (int col=0; col<=2; col++)
    {
        cout<<"  "<<matriz[fila][col];
    }
    cout<<endl;
 }

    return 0;
}
