/*
    REPASO BASICO DE PROGRAMACION EN C++
    -------------------------------------
    Este programa muestra ejemplos de:
      1. for
      2. while
      3. do while
      4. funciones (con y sin retorno)
    Cada sección se puede compilar y correr por separado,
    aquí las juntamos todas en un solo main() para practicar.
*/

#include <iostream>
#include <string>
using namespace std;

// ---------------------------------------------
// FUNCIONES (se declaran antes de usarse en main)
// ---------------------------------------------

// Función CON retorno: suma dos números y devuelve el resultado
int sumar(int a, int b) {
    return a + b;
}

// Función CON retorno: calcula el factorial de un número usando un for
int factorial(int n) {
    int resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado = resultado * i;
    }
    return resultado;
}

// Función SIN retorno (void): solo imprime un saludo
void saludar(string nombre) {
    cout << "Hola, " << nombre << "! Bienvenido/a al repaso de C++." << endl;
}

// ---------------------------------------------
// MAIN: aquí se usan for, while, do while y las funciones
// ---------------------------------------------
int main() {

    // --- Usando una función ---
    saludar("Mi amor");
    cout << endl;

    // --- FOR ---
    // Se usa cuando sabemos exactamente cuántas veces repetir
    cout << "== Ejemplo de FOR ==" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Vuelta numero: " << i << endl;
    }
    cout << endl;

    // --- WHILE ---
    // Se usa cuando no sabemos cuántas veces, solo la condición de parada
    cout << "== Ejemplo de WHILE ==" << endl;
    int contador = 0;
    while (contador < 5) {
        cout << "Contador: " << contador << endl;
        contador++;
    }
    cout << endl;

    // --- DO WHILE ---
    // Se ejecuta primero y pregunta después (mínimo 1 vez)
    cout << "== Ejemplo de DO WHILE ==" << endl;
    int numero;
    do {
        numero = 3; // simulamos una entrada válida sin pedir input real
        cout << "El numero ingresado fue: " << numero << endl;
    } while (numero <= 0);
    cout << endl;

    // --- FUNCIONES con retorno ---
    cout << "== Ejemplo de FUNCIONES ==" << endl;
    int resultadoSuma = sumar(3, 4);
    cout << "La suma de 3 + 4 es: " << resultadoSuma << endl;

    int num = 5;
    cout << "El factorial de " << num << " es: " << factorial(num) << endl;

    return 0;
}
