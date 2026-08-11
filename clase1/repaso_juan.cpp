/*
    EJERCICIO: SISTEMA DE REGISTRO DE ESTUDIANTES
    ------------------------------------------------
    Completa el codigo donde dice TODO.

    Debes usar:
      - struct       -> para modelar a cada estudiante
      - do while      -> para validar cuantos estudiantes se van a registrar
      - for anidado   -> para recorrer estudiantes y pedir sus 3 calificaciones
      - if / else if  -> para clasificar el promedio de cada estudiante
      - while         -> para imprimir el reporte final uno por uno
*/

#include <iostream>
#include <string>
using namespace std;

// ---------------------------------------------
// STRUCT: modelo de un estudiante
// ---------------------------------------------
// TODO: Crea el struct "Estudiante" con estos campos:
//   - nombre (string)
//   - calificaciones (arreglo de 3 enteros)
//   - promedio (double)
//   - estado (string) -> guardara "Excelente", "Aprobado" o "Reprobado"


int main() {
    const int MAX_ESTUDIANTES = 20;

    // TODO: declara un arreglo "lista" de tipo Estudiante, de tamano MAX_ESTUDIANTES

    int numEstudiantes;

    // ---------------------------------------------
    // DO WHILE: pide cuantos estudiantes se registraran
    // Debe ejecutarse al menos una vez y validar que:
    //   numEstudiantes > 0  Y  numEstudiantes <= MAX_ESTUDIANTES
    // Si el valor no es valido, debe volver a preguntar.
    // ---------------------------------------------
    // TODO: escribe aqui el do while



    cout << endl;

    // ---------------------------------------------
    // FOR ANIDADO
    // Ciclo externo: recorre cada estudiante (usa numEstudiantes)
    // Ciclo interno: pide las 3 calificaciones de ese estudiante
    // ---------------------------------------------
    // TODO: for externo
    // TODO: dentro del for externo, pide el nombre del estudiante
    // TODO: for interno (3 vueltas) para pedir cada calificacion
    //       y ve sumando las calificaciones en una variable "suma"

    // TODO: calcula el promedio -> promedio = suma / 3.0

    // ---------------------------------------------
    // IF / ELSE IF: clasifica al estudiante segun su promedio
    //   >= 90            -> "Excelente"
    //   >= 70 y < 90      -> "Aprobado"
    //   < 70              -> "Reprobado"
    // Guarda el resultado en el campo "estado" del estudiante
    // ---------------------------------------------
    // TODO: escribe aqui el if / else if / else


    // ---------------------------------------------
    // WHILE: imprime el reporte final, uno por uno
    // Debe mostrar: nombre, las 3 calificaciones, promedio y estado
    // ---------------------------------------------
    cout << "=========================================" << endl;
    cout << "           REPORTE FINAL" << endl;
    cout << "=========================================" << endl;

    // TODO: declara un indice en 0 y usa un while para recorrer "lista"
    //       imprimiendo los datos de cada estudiante


    // ---------------------------------------------
    // RETO EXTRA (opcional):
    // Dentro del while anterior, guarda en dos variables
    // (mejorPromedio y mejorEstudiante) el nombre y promedio
    // del estudiante con la calificacion mas alta.
    // Al final, imprime quien fue el mejor estudiante.
    // ---------------------------------------------
    // TODO: reto extra


    return 0;
}
