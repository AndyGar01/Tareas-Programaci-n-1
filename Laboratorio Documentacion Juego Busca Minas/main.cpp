//Agregamos las biblioteca y archivos para utilizar
#include <iostream> //biblioteca estandar
#include <unistd.h> //biblioteca del nombre del archivo de encabezado que brinda acceso a la API del sistema operativo POSIX
#include "Juego.h"  //Archivo del encabezado de la clase "Juego"
#include "Config.h" //Archivo del encabezado de la clase "Config"


using namespace std; //Importa todo el espacio de nombres (namespace) std al ámbito actual


int main()
{
    //Agregamos constantes a utilizar
    const int FILASTABLERO = 5; //Establecemos la cantidad de filas del tablero (en este caso son 5 filas)
    const int COLUMNASTABLERO = 5; //Establecemos la cantidad de columnas del tablero (en este caso 5 columnas)
    const int MINASENTABLERO = 3; //Establecemos cuantas minas estaran en el tablero (en este caso son 3)


    const bool MODODESARROLLADOR = true; //El modo desarrollador
    const int VIDASTABLERO = 3; //Establecemos las vidas (intentos) para poder jugar


    //Instancia de la clase juego para poder configurarlo
    Config configuracionJuego(FILASTABLERO, COLUMNASTABLERO, MINASENTABLERO, MODODESARROLLADOR, VIDASTABLERO);


    //Instancia de la clase juego con parametros
    Juego juego(Tablero(configuracionJuego.getfilasTablero(), configuracionJuego.getcolumnasTablero(), configuracionJuego.getmodoDesarrolladorTablero()), configuracionJuego.getminasTablero());
    srand(getpid()); //Genera numeros aleatorios


    //establecemos las opciones para el usuario y almacenamos las opciones que elija el ususario
    int opciones;


    //repetimos el ciclo del menu
    bool repetir = true;


    //Inicio del ciclo do while
    do
    {
        system("cls"); //limpiamos pantalla


        //Menu del juego
        cout << "\n\n\t\tBUSCA MINAS -Menu-" << endl;
        cout << "\t\t-------------------"<< endl;
        cout << "\t\t1. Configuaracion del Juego" << endl;
        cout << "\t\t2. Iniciar el Juego" << endl;
        cout << "\t\t3. Salir del Juego" << endl;
        cout << "\n\t\tIngrese una opcion: ";
        cin >> opciones;


        switch (opciones)
        {

        //Configuracion y el menu del juego
        case 1:
            {
                configuracionJuego.menuConfiguracion(); //llamamos a la funcion configuracionJuego
                break;
            }


        //Se inicia el juego
        case 2:
            {
                //Instancia temporal para luego iniciarla
              	Juego juegoTemporal(Tablero(configuracionJuego.getfilasTablero(), configuracionJuego.getcolumnasTablero(), configuracionJuego.getmodoDesarrolladorTablero()), configuracionJuego.getminasTablero());
                juegoTemporal.iniciar();


                system("pause"); //Se pausa la consola y muestra los resultados del juego antes de continuar
                break;
            }


        //Salir del juego
        case 3: repetir = false;
                break;
        }

    } while (repetir); //Repite todo el bucle hasta que el usuario decida salir
    system("cls"); //Limpiamos pantalla
    return 0;
}
