#include <iostream>
#include <string>

using namespace std;


// ======================================================
// ESTRUCTURA
// ======================================================

// Crear una estructura llamada Estudiante.
//
// Debe almacenar:
// - Nombre
// - Edad
// - Nota

struct Estudiante
{
    // COMPLETAR
};


// ======================================================
// REGISTRAR ESTUDIANTES
// ======================================================

// Esta funcion recibe:
// 1. Un puntero al primer estudiante.
// 2. La cantidad de estudiantes.
//
// Debe pedir al usuario los datos de cada estudiante.
//
// Recomendacion:
// Utiliza el puntero para recorrer el arreglo.
//
// Puedes utilizar:
// *
// ->
//
// Recuerda que si tienes:
//
// Estudiante* puntero;
//
// puedes acceder a los atributos utilizando:
//
// puntero->nombre
// puntero->edad
// puntero->nota

void registrarEstudiantes(Estudiante* estudiantes, int cantidad)
{
    // COMPLETAR
}


// ======================================================
// MOSTRAR ESTUDIANTES
// ======================================================

// Esta funcion debe mostrar todos los estudiantes.
//
// Recibe:
// - Un puntero al arreglo.
// - La cantidad de estudiantes.
//
// Recomendacion:
// Intenta recorrer el arreglo utilizando punteros.
//
// No es necesario utilizar un arreglo dinamico.

void mostrarEstudiantes(Estudiante* estudiantes, int cantidad)
{
    // COMPLETAR
}


// ======================================================
// CALCULAR PROMEDIO
// ======================================================

// Esta funcion debe calcular el promedio
// de las notas de todos los estudiantes.
//
// Recibe:
// - Un puntero al arreglo.
// - La cantidad de estudiantes.
//
// Debe retornar un float.
//
// Recomendacion:
// Recorre los estudiantes utilizando el puntero
// y suma todas las notas.

float calcularPromedio(Estudiante* estudiantes, int cantidad)
{
    // COMPLETAR

    return 0;
}


// ======================================================
// BUSCAR MEJOR ESTUDIANTE
// ======================================================

// Esta funcion debe encontrar al estudiante
// que tenga la nota mas alta.
//
// Debe retornar un puntero a Estudiante.
//
// Recomendacion:
//
// Puedes crear:
//
// Estudiante* mejor;
//
// y hacer que apunte al estudiante con
// la nota mas alta.
//
// Para acceder a la nota:
//
// mejor->nota

Estudiante* mejorEstudiante(Estudiante* estudiantes, int cantidad)
{
    // COMPLETAR

    return nullptr;
}


// ======================================================
// MODIFICAR ESTUDIANTE
// ======================================================

// Esta funcion recibe un puntero a un estudiante.
//
// Debe permitir modificar alguno de sus datos.
//
// Por ejemplo:
// - Nombre
// - Edad
// - Nota
//
// Recomendacion:
//
// estudiante->nota
//
// permite modificar la nota mediante el puntero.

void modificarEstudiante(Estudiante* estudiante)
{
    // COMPLETAR
}


// ======================================================
// MAIN
// ======================================================

int main()
{
    // ==================================================
    // ARREGLO
    // ==================================================

    // Crear un arreglo ESTATICO de estudiantes.
    //
    // El arreglo NO debe ser dinamico.
    //
    // Puedes utilizar un maximo de 100 estudiantes.

    const int MAX_ESTUDIANTES = 100;

    Estudiante estudiantes[MAX_ESTUDIANTES];


    // ==================================================
    // CANTIDAD
    // ==================================================

    // Preguntar al usuario cuantos estudiantes
    // quiere registrar.

    int cantidad;

    cout << "Cuantos estudiantes desea registrar: ";
    cin >> cantidad;


    // Validar que la cantidad sea correcta.
    //
    // No puede ser menor que 1.
    // No puede ser mayor que MAX_ESTUDIANTES.

    // COMPLETAR


    // ==================================================
    // CREAR EL PUNTERO
    // ==================================================

    // Crear un puntero a Estudiante.
    //
    // Utiliza * para declarar el puntero.
    //
    // Luego utiliza & para guardar la direccion
    // del primer elemento del arreglo.

    Estudiante* puntero;

    // COMPLETAR


    // ==================================================
    // REGISTRAR ESTUDIANTES
    // ==================================================

    // Enviar el puntero y la cantidad
    // a la funcion registrarEstudiantes().

    // COMPLETAR


    // ==================================================
    // MENU
    // ==================================================

    int opcion = 0;

    while (opcion != 5)
    {
        cout << "\n========== MENU ==========" << endl;
        cout << "1. Mostrar estudiantes" << endl;
        cout << "2. Mostrar promedio" << endl;
        cout << "3. Mostrar mejor estudiante" << endl;
        cout << "4. Modificar estudiante" << endl;
        cout << "5. Salir" << endl;

        cout << "Seleccione una opcion: ";
        cin >> opcion;


        // ==================================================
        // OPCION 1
        // ==================================================

        if (opcion == 1)
        {
            // Llamar a mostrarEstudiantes().
            //
            // Debes enviar:
            // - El puntero.
            // - La cantidad.

            // COMPLETAR
        }


        // ==================================================
        // OPCION 2
        // ==================================================

        else if (opcion == 2)
        {
            // Llamar a calcularPromedio().
            //
            // Guardar el resultado en una variable
            // y mostrarlo.

            // COMPLETAR
        }


        // ==================================================
        // OPCION 3
        // ==================================================

        else if (opcion == 3)
        {
            // Buscar al mejor estudiante.
            //
            // La funcion mejorEstudiante()
            // retorna un puntero.
            //
            // Guarda ese puntero en una variable.
            //
            // Luego utiliza -> para mostrar:
            //
            // Nombre
            // Edad
            // Nota

            // COMPLETAR
        }


        // ==================================================
        // OPCION 4
        // ==================================================

        else if (opcion == 4)
        {
            int posicion;

            cout << "Que estudiante desea modificar: ";
            cin >> posicion;


            // Validar que la posicion exista.
            //
            // Recuerda que los arreglos comienzan
            // desde la posicion 0.
            //
            // Si el usuario dice 1, debes pensar
            // si esta hablando del primer estudiante
            // o de la posicion 1.

            // COMPLETAR


            // Obtener la direccion del estudiante.
            //
            // Recomendacion:
            //
            // Estudiante* estudiante;
            //
            // estudiante = &estudiantes[posicion];
            //
            // Luego enviar ese puntero a:
            //
            // modificarEstudiante(...)

            // COMPLETAR
        }


        // ==================================================
        // OPCION 5
        // ==================================================

        else if (opcion == 5)
        {
            cout << "Programa finalizado." << endl;
        }


        // ==================================================
        // OPCION INVALIDA
        // ==================================================

        else
        {
            cout << "Opcion invalida." << endl;
        }
    }


    return 0;
}