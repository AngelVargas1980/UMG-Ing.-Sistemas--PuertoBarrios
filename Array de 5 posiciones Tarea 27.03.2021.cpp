#include <iostream>
using namespace std;
void intercambia(int []); //declaración de la función.
                         //No es necesario poner el nombre del array
int main()
{
   int A[5]={5, 4, 3, 2, 1};
   intercambia(A); //en la llamada sólo se escribe el nombre
                   //del array, sin corchetes

   cout << A[0]<<endl;
   cout << A[1]<<endl;
   cout << A[2]<<endl;
   cout << A[3]<<endl;
   cout << A[4]<<endl; //muestra 5 4 3 2 1
   system("pause");
   
}
void intercambia(int a[]) //definición de la función
{                            
   int c;                   
   c=a[0];
   a[0]=a[1];
   a[1]=a[2];
   a[2]=a[3];
   a[3]=a[4];
   a[4]=a[c];
   
   cout<<c<<endl;
}
