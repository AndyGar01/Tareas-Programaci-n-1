#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <string>
#define Numero_Equipos 6
#define Maximo_Goles 10

using namespace std;



// Función para generar un número aleatorio entre 0 y max
int generarAleatorio(int max) {
    return rand() % (max + 1);
}

// Función para actualizar la tabla de posiciones
void Act_Tabla(vector<vector<int>>& tabla, int equipoLocal, int equipoVisitante, int golesLocal, int golesVisitante) {

    // Actualizar partidos jugados
    tabla[equipoLocal][0]++;

    tabla[equipoVisitante][0]++;

    //Actualizar goles
    tabla[equipoLocal][1] += golesLocal;

    tabla[equipoVisitante][1] += golesVisitante;

    tabla[equipoLocal][2] += golesVisitante;

    tabla[equipoVisitante][2] += golesLocal;


    //Actualizar resultados
    if (golesLocal > golesVisitante) {

        tabla[equipoLocal][3]++;

        tabla[equipoLocal][5] += 3;

        tabla[equipoVisitante][4]++;

    } else if (golesLocal < golesVisitante) {

        tabla[equipoVisitante][3]++
        ;
        tabla[equipoVisitante][5] += 3;

        tabla[equipoLocal][4]++;

    } else {
        tabla[equipoLocal][6]++;

        tabla[equipoLocal][5]++;

        tabla[equipoVisitante][6]++;

        tabla[equipoVisitante][5]++;
    }
}

//Función para mostrar la tabla de posiciones
void mostrarTabla(const vector<vector<int>>& tabla, const vector<string>& nombresEquipos) {

    cout << "Tabla de posiciones:" << endl;

    cout << "PJ      GF      GC      PG      PP      PE        P" << endl;

    for (int i = 0; i < Numero_Equipos; ++i)
        {
        cout << nombresEquipos[i] << "\t";

        for (int j = 0; j < 7; ++j) {

            cout << tabla[i][j] << "\t";
        }
        cout << endl;
    }
}

int main() {

    // Inicialización de semilla aleatoria

    srand(time(0));

    vector<string> nombresEquipos;

    vector<vector<int>> tabla;


    for (int i = 0; i < Numero_Equipos; ++i) {

        cout << "Ingrese el nombre del equipo " << i + 1 << ": ";

        string nombreEquipo;

        cin >> nombreEquipo;

        nombresEquipos.push_back(nombreEquipo);

        tabla.push_back({0, 0, 0, 0, 0, 0, 0});
    }

    // Simulación de los partidos de ida y vuelta
    for (int i = 0; i < Numero_Equipos; ++i) {

        for (int j = i + 1; j < Numero_Equipos; ++j) {

            int golesLocal = generarAleatorio(Maximo_Goles);

            int golesVisitante = generarAleatorio(Maximo_Goles);

            cout << nombresEquipos[i] << " vs " << nombresEquipos[j] << ": " << golesLocal << " - " << golesVisitante << endl;

            Act_Tabla(tabla, i, j, golesLocal, golesVisitante);

            Act_Tabla(tabla, j, i, golesVisitante, golesLocal);
        }
    }

    // Mostrar tabla de posiciones
    mostrarTabla(tabla, nombresEquipos);

    // Calcular equipo ganador del campeonato y equipo que baja de categoría
    int equipoGanador = 0;

    int equipoBaja = 0;


    for (int i = 1; i < Numero_Equipos; ++i) {

        if (tabla[i][5] > tabla[equipoGanador][5]) {

            equipoGanador = i;


        }
        if (tabla[i][5] < tabla[equipoBaja][5]) {

            equipoBaja = i;
        }
    }
    cout << " El equipo ganador del campeonato es: " << nombresEquipos[equipoGanador] << endl;
    cout << " El equipo que baja de categoría es: " << nombresEquipos[equipoBaja] << endl;

    return 0;
}
