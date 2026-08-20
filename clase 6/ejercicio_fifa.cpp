#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

const int MAX_JUGADORES = 10;
const int MAX_CLUBES = 4;

/*
    EJERCICIO: MODO CARRERA ESTILO FIFA
    ------------------------------------------------------------
    Completa las partes marcadas con TODO.
    clase Jugador y un atributo "tipo" que indica la posicion.
*/

// ===================== CLASE JUGADOR =====================
class Jugador {
private:
    string nombre;
    string tipo; // "DEL", "MED", "DEF", "POR"
    int edad;
    int valoracion;
    int valorMercado;
    int goles;
    int asistencias;
    int atajadas;

public:
    Jugador() : nombre(""), tipo(""), edad(0), valoracion(0),
                valorMercado(0), goles(0), asistencias(0), atajadas(0) {}

    Jugador(string n, string t, int e, int val, int precio)
        : nombre(n), tipo(t), edad(e), valoracion(val),
          valorMercado(precio), goles(0), asistencias(0), atajadas(0) {}

    void mostrarInfo() const {
        cout << "  " << nombre << " | Pos: " << tipo
             << " | Edad: " << edad
             << " | Rating: " << valoracion
             << " | Valor: " << valorMercado << "M"
             << " | Goles: " << goles
             << " | Asist: " << asistencias;
        if (tipo == "POR") {
            cout << " | Atajadas: " << atajadas;
        }
        cout << endl;
    }

    // TODO 1: Completa "jugarPartido()".
    // int prob = rand() % 100;
    // Si tipo es "DEL": prob < 40 -> gol; si no goleo y prob < 60 -> asistencia
    // Si tipo es "MED": prob < 25 -> asistencia; si no asistio y prob < 35 -> gol
    // Si tipo es "DEF": prob < 10 -> gol
    // Si tipo es "POR": prob < 50 -> atajada
    void jugarPartido() {
        // tu codigo aqui
        int prob = rand() % 100;
        if (tipo = "DEL"){
            if(prob < 40){
            goles++;
            cout<<nombre<< "hizo gol :D "<<endl;
            }
        
            else if (prob < 60){
            asistencia ++;
            cout<<nombre<< " dio una asistencia "<<endl;
        }
        }
        else if (tipo = "MED"){
            if( prob < 25){
                asistencia ++;
                cout<<nombre<< "hizo una asistencia :3"<<endl;
                
            } else if (prob < 35){
                goles++;
                cout<<nombre<<"hizo un gol :v "<<endl;
            }
        }
        else if(tipo = "DEF"){
            if(prob < 10 ){
                goles++;
                cout<<nombre<<"hizo un golazo "<<endl;
            }
        }
        else if (tipo = "POR"){
            if (prob < 50){
                atajadas++;
                cout<<nombre<<"hizo una atajada siu"<<endl;
            }
        }
    }

    // TODO 2: Completa "subirValoracion(int puntos)".
    void subirValoracion(int puntos) {
        
        subida += puntos;
        
        cout<<nombre<<"subio la valoracion del mercado ; a )"<< subida <<endl;
    }

    // TODO 3: Completa "cumplirAnios()".
    // edad++; si edad > 30 y valoracion > 60, restar 1 a valoracion.
    void cumplirAnios() {
        // tu codigo aqui
        edad++;
        if(edad > 30 && valoracion > 60){
            valoracion -= 1;
        }
    }

    string getTipo() const { return tipo; }
    string getNombre() const { return nombre; }
    int getValoracion() const { return valoracion; }
    int getValor() const { return valorMercado; }
    int getEdad() const { return edad; }
};

// ===================== CLASE CLUB =====================
class Club {
private:
    string nombreClub;
    double presupuesto;
    Jugador* plantilla[MAX_JUGADORES];
    int totalJugadores;
    int puntos;
    int partidosGanados;
    int partidosPerdidos;
    int partidosEmpatados;

public:
    Club() : nombreClub(""), presupuesto(0), totalJugadores(0),
             puntos(0), partidosGanados(0), partidosPerdidos(0), partidosEmpatados(0) {
        for (int i = 0; i < MAX_JUGADORES; i++) plantilla[i] = nullptr;
    }

    Club(string nombre, double presupuestoInicial)
        : nombreClub(nombre), presupuesto(presupuestoInicial), totalJugadores(0),
          puntos(0), partidosGanados(0), partidosPerdidos(0), partidosEmpatados(0) {
        for (int i = 0; i < MAX_JUGADORES; i++) plantilla[i] = nullptr;
    }

    ~Club() {
        for (int i = 0; i < totalJugadores; i++) {
            delete plantilla[i];
        }
    }

    // TODO 4: Completa "fichar(Jugador* j)".
    // Si totalJugadores == MAX_JUGADORES -> error, delete j, return.
    // Si presupuesto >= j->getValor() -> restar valor, guardar en plantilla,
    //   incrementar totalJugadores, imprimir exito.
    // Si no alcanza -> imprimir error y delete j.
    void fichar(Jugador* j) {
        // tu codigo aqui
        if(totalJugadores = MAX_JUGADORES){
            cout<<nombreClub<<" plantilla llena, no se pudo fichar el jugador "
            << j->getNombre()<<endl;
            
            delete j;
            return;
        }
        
        if(Presupuesto >= j -> getValor()){
            Presupuesto -= j -> getValor();
            plantilla[totalJugadores]=j;
            totalJugadores++;
            cout<<"fichaje realizado"<<endl;
        }
        
        else {
            cout<<"Presupuesto insuficiente :("<<endl;
            delete j;
        }
    }

    // TODO 5: Completa "venderJugador(string nombre)".
    void venderJugador(string nombre) {
        // tu codigo aqui
        for(int i = 0; i < totalJugadores; i++){
            if(plantilla[i]->getNombre()= nombre){
                Presupuesto += plantilla[i]->getValor;
                cout<<nombre<<"fue vendido :}"<<endl;
                delete plantilla [i];
            
            for(int j = i; j<totalJugadores - 1; j++){
                plantilla[j]= plantilla[j + 1];
            }
            
            plantilla[totalJugadores - 1] = nullptr;
            totalJugadores --;
            return;
            }
        }
        
    }
    

    void mostrarPlantilla() const {
        cout << "\nPlantilla del " << nombreClub
             << " (Presupuesto: " << presupuesto << "M | Puntos: " << puntos << ")" << endl;
        for (int i = 0; i < totalJugadores; i++) {
            plantilla[i]->mostrarInfo();
        }
    }

    // TODO 6: Completa "fuerzaEquipo()".
    int fuerzaEquipo() const {
        
        int total = 0;
        
        for(int i = 0;i < totalJugadores; i ++){
            
            
        }
        return 0;
    }

    // TODO 7: Completa "simularPartidoParaJugadores()".
    void simularPartidoParaJugadores() {
        // tu codigo aqui
    }

    void registrarResultado(int resultado) {
        if (resultado == 1) { partidosGanados++; puntos += 3; }
        else if (resultado == 0) { partidosEmpatados++; puntos += 1; }
        else partidosPerdidos++;
    }

    // TODO 8: Completa "pasarTemporada()".
    void pasarTemporada() {
        // tu codigo aqui
    }

    // Necesario para el menu interactivo: saber si hay espacio disponible
    bool hayEspacio() const { return totalJugadores < MAX_JUGADORES; }
    double getPresupuesto() const { return presupuesto; }
    string getNombre() const { return nombreClub; }
    int getPuntos() const { return puntos; }
};

// ===================== CLASE LIGA =====================
class Liga {
private:
    string nombreLiga;
    Club* clubes[MAX_CLUBES];
    int totalClubes;

public:
    Liga(string nombre) : nombreLiga(nombre), totalClubes(0) {
        for (int i = 0; i < MAX_CLUBES; i++) clubes[i] = nullptr;
    }

    // TODO 9: Completa "agregarClub(Club* c)".
    void agregarClub(Club* c) {
        // tu codigo aqui
    }

    // TODO 10: Completa "simularJornada()".
    void simularJornada() {
        // tu codigo aqui
    }

    // TODO 11: Completa "mostrarTabla()".
    void mostrarTabla() const {
        // tu codigo aqui
    }
};

// ===================== FUNCIONES DE ENTRADA DEL USUARIO =====================

// Pide los datos del club al usuario y devuelve un Club creado con "new"
Club* crearClubDesdeTeclado() {
    string nombre;
    double presupuesto;

    cout << "\n--- Creacion de club ---" << endl;
    cout << "Nombre del club: ";
    cin.ignore();
    getline(cin, nombre);

    cout << "Presupuesto inicial (en millones): ";
    cin >> presupuesto;

    return new Club(nombre, presupuesto);
}

// Pide los datos de un jugador al usuario y devuelve un Jugador creado con "new"
Jugador* crearJugadorDesdeTeclado() {
    string nombre, tipo;
    int edad, valoracion, precio;

    cout << "\nNombre del jugador: ";
    cin.ignore();
    getline(cin, nombre);

    cout << "Posicion (DEL, MED, DEF, POR): ";
    cin >> tipo;

    cout << "Edad: ";
    cin >> edad;

    cout << "Valoracion (1-99): ";
    cin >> valoracion;

    cout << "Valor de mercado (en millones): ";
    cin >> precio;

    return new Jugador(nombre, tipo, edad, valoracion, precio);
}

// Permite al usuario fichar jugadores para su club hasta que decida parar
void menuFicharJugadores(Club* club) {
    char respuesta;
    do {
        if (!club->hayEspacio()) {
            cout << "La plantilla esta llena." << endl;
            break;
        }

        cout << "\nPresupuesto disponible: " << club->getPresupuesto() << "M" << endl;
        Jugador* j = crearJugadorDesdeTeclado();
        club->fichar(j);

        cout << "\nDeseas fichar otro jugador? (s/n): ";
        cin >> respuesta;

    } while (respuesta == 's' || respuesta == 'S');
}

// ===================== MAIN =====================
int main() {
    srand(time(0));

    cout << "===== MODO CARRERA: CREACION DE CLUB =====" << endl;
    Club* miClub = crearClubDesdeTeclado();

    menuFicharJugadores(miClub);

    miClub->mostrarPlantilla();

    // Club rival de ejemplo (fijo), para poder simular partidos
    Club* rival = new Club("Club Rival", 120);
    rival->fichar(new Jugador("Jugador Rival 1", "DEL", 24, 80, 30));
    rival->fichar(new Jugador("Jugador Rival 2", "MED", 26, 78, 25));
    rival->fichar(new Jugador("Jugador Rival 3", "DEF", 27, 76, 20));
    rival->fichar(new Jugador("Jugador Rival 4", "POR", 29, 79, 18));

    Liga liga("Liga del Estudiante");
    liga.agregarClub(miClub);
    liga.agregarClub(rival);

    for (int jornada = 1; jornada <= 3; jornada++) {
        cout << "\n\n---------- JORNADA " << jornada << " ----------" << endl;
        liga.simularJornada();
    }

    liga.mostrarTabla();

    miClub->pasarTemporada();
    rival->pasarTemporada();

    cout << "\n\n===== FIN DE TEMPORADA =====" << endl;
    miClub->mostrarPlantilla();
    rival->mostrarPlantilla();

    delete miClub;
    delete rival;

    return 0;
}