#include <iostream>
#include <string>

using namespace std;


int main (){
  int numero = 10; //variable normal :D
  int* puntero = &numero;

cout<< "valor: " << numero <<endl;
cout<<"direccion: "<< &numero <<endl;
cout<<"direccion guardada en puntero: "<< puntero <<endl;
cout<<"valor mediante  "<< *puntero <<endl;

return 0;

}