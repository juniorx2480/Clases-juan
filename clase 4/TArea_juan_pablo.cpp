#include <iostream>
#include <string>
using namespace std;

const int NUM_CANALES_ARREGLO = 3;
const int NUM_CANALES_CONSTRUCTOR = 5;

struct datos_televisor {

    string nombre;
    float rating;

    

    datos_televisor(string n, float r) {
        nombre = n;
        rating = r;
    }
};

void ingresardatos(datos_televisor canales[], int n) {

    for (int i = 0; i < n; i++) {
        cout << " ingrese el nombre del canal: ";
        getline(cin >> ws, canales[i].nombre);

        cout << endl;

        cout << ". ingrese el rating del canal: ";
        cin >> canales[i].rating;
    }
}

void cargardatos(datos_televisor canales[], int n) {

    string nombres[5] = {
        "nombre 1",
        "nombre 2",
        "nombre 3",
        "nombre 4",
        "nombre 5",
    };

    float ratings[5] = {
        70.7, 77.7, 55.5, 44.4, 99.9
    };

    for (int i = 0; i < n; i++) {
        canales[i] = datos_televisor(nombres[i], ratings[i]);
    }
}

void mostralcanal(const datos_televisor &c) {

    cout << "canal: " << c.nombre
         << "   rating: " << c.rating << endl;
}

void calcularPromedioMayor(datos_televisor canales[], int n) {

    float suma = 0;
    float promedio;
    datos_televisor mayor = canales[0];

    for (int i = 0; i < n; i++) {

        suma += canales[i].rating;

        if (canales[i].rating > mayor.rating) {
            mayor = canales[i];
        }
    }

    promedio = suma / n;

    cout << "promedio de ratings: " << promedio << endl;
    cout << "mayor rating: " << mayor.nombre
         << " su rating es: " << mayor.rating << endl;
}

int main() {

    datos_televisor canalesArreglo[NUM_CANALES_ARREGLO];
    datos_televisor canalesConstructor[NUM_CANALES_CONSTRUCTOR];

    cout << "ingrese 3 canales: " << endl;
    ingresardatos(canalesArreglo, NUM_CANALES_ARREGLO);

    int opcion;

    calcularPromedioMayor(canalesArreglo, NUM_CANALES_ARREGLO);

    cout << "\ncanales con Constructor :D" << endl;
    cargardatos(canalesConstructor, NUM_CANALES_CONSTRUCTOR);

    cout << "\nque canal quieres ver? (1 a " << NUM_CANALES_CONSTRUCTOR << "): ";
    cin >> opcion;
    mostralcanal(canalesConstructor[opcion - 1]);

    calcularPromedioMayor(canalesConstructor, NUM_CANALES_CONSTRUCTOR);

    return 0;
}