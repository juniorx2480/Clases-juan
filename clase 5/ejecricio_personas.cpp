#include <iostream>

#include <string>

using namespace std;

class Persona {

private:

    string nombre;

    int edad;

public:

    // Constructor por defecto

    Persona() {

        nombre = "";

        edad = 0;

    }

    // Constructor con parámetros

    Persona(string nombre, int edad) {

        this->nombre = nombre;

        setEdad(edad); // reutiliza la validación del set

    }

    // TODO 1: método modificador (set) para nombre

    // Debe asignar el parámetro "nombre" al atributo nombre usando this->

    void setNombre(string nombre){

        this->nombre=nombre;

    }

    // TODO 2: método modificador (set) para edad

    // Debe validar que edad sea >= 0 antes de asignarla

    void setEdad(int edad){

        this->edad=edad;

    }

    // TODO 3: método consultor (get) para nombre

    // Debe retornar el atributo nombre

    string getNombre(){

        return nombre;

    }

    // TODO 4: método consultor (get) para edad

    // Debe retornar el atributo edad

    int getEdad(){

        return edad;

    }

    // TODO 5: método visualizador (ver)

    // Debe mostrar "Nombre: ..." y "Edad: ..." usando cout

    void ver(){

        cout << "Nombre: " << nombre << endl;

        cout << "Edad: " << edad << endl;

    }


 
};

//mostrar promedio
 void CalcularPromedio(Persona p1,Persona p2, Persona p3){
        
        double promedio=(p1.getEdad() + p2.getEdad() + p3.getEdad()) / 3;
        cout<<"promedio de todas las edades :3 : "<<promedio<<endl;
    }

int main() {

    Persona p1;                 // usa constructor por defecto

    Persona p2("Ana", 20);      // usa constructor con parámetros

    Persona p3;

    string nombreIngresado;

    int edadIngresada;

    p1.setNombre("Luis");

    p1.setEdad(19);

    cout << "Persona 1:" << endl;

    p1.ver();

    cout << endl;

    cout << "Persona 2:" << endl;

    p2.ver();

    cout << "Ingrese el nombre de la persona 3: " << endl;

    getline(cin, nombreIngresado);

    cout << "Ingrese la edad de la persona 3: " << endl;

    cin >> edadIngresada;

    p3.setNombre(nombreIngresado);

    p3.setEdad(edadIngresada);

    cout << "Persona 3: " << endl;

    p3.ver();
    
    CalcularPromedio(p1, p2, p3);

    return 0;

}


 