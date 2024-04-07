//Incluimos las bibliotecas y archivos a utilizar
#include <iostream> //Biblioteca estandar
#include <unistd.h> //biblioteca del nombre del archivo de encabezado que brinda acceso a la API del sistema operativo POSIX
#include "Config.h" //Archivo del encabezado de la clase "Config"


using namespace std; //Importa todo el espacio de nombres (namespace) std al ámbito actual


//Constructor de la clase config que incicializa sus configuraciones del juego
Config::Config(int filasTablero, int columnasTablero, int minasTablero, bool modoDesarrolladorTablero, int vidasTablero)
{
    //Variables miembro inicializadas con sus parametros
    this->filasTablero = filasTablero;
    this->columnasTablero = columnasTablero;
    this->minasTablero = minasTablero;
    this->modoDesarrolladorTablero = modoDesarrolladorTablero;
    this->vidasTablero = vidasTablero;
}


//Funcion para mostrar el menu la configuracion que permite cambiar los valores
void Config::menuConfiguracion()
{
    //Establecemos variables
    int opciones;
    int valorIngresado;

    bool repetir = true; //se repite el menu de la configuracion


    //Inicio del ciclo do while
    do
    {
        system("cls"); //Limpiamos pantalla

        //Imprimiendo el menu
        cout << "\n\n\t\tCONFIGURACION ACTUAL -Menu-" << endl;
        cout << "\t\t-------------------"<< endl;
        cout << "\t\t1. Filas del Tablero ----> " << this->getfilasTablero() << endl;
        cout << "\t\t2. Columnas del Tablero -> " << this->getcolumnasTablero() << endl;
        cout << "\t\t3. Minas del Tablero ----> " << this->getminasTablero() << endl;
        cout << "\t\t4. Modo del Juego -------> " << this->getmodoDesarrolladorTablero() << endl;
        cout << "\t\t5. Vidas del Jugador ----> " << this->getvidasTablero() << endl;
        cout << "\t\t6. Regresar al menu general" << endl;
        cout << "\n\t\tIngrese una opcion: ";
        cin >> opciones;

        //Opciones a elegir
        if (opciones!=6)
        {
            cout << "\n\tIngrese el valor que desea cambiar: ";
            cin >> valorIngresado;
        }

        switch (opciones)
        {


        //Establecemos las filas del valor nuevo ingresador
        case 1:
            {
                this->setfilasTablero(valorIngresado);
                cout << "Filas del Tablero actualizadas" << endl;
                break;
            }


        //Establecemos las columnas del valor nuevo ingresado
        case 2:
            {
                this->setcolumnasTablero(valorIngresado);
                cout << "Columnas del Tablero actualizadas" << endl;
                break;
            }


        //Establecemos la cantidad nueva de minas en el tablero
        case 3:
            {
                this->setminasTablero(valorIngresado);
                cout << "Minas del Tablero actualizadas" << endl;
                break;
            }


        //Establecemos la actualizacion el modo desarrollador
        case 4:
            {
                this->setmodoDesarrolladorTablero(valorIngresado);
                cout << "Modo del Juego actualizado" << endl;
                break;
            }


        //Establecemos las vidas del usuario (intentos)
        case 5:
            {
                this->setvidasTablero(valorIngresado);
                cout << "Vidas del Juego actualizadas" << endl;
                break;
            }


        //Salimos del juego
        case 6: repetir = false;
                break;
        }
        system("pause"); //Pausa la ejecucion del programa
    } while (repetir); //Repite todo el bucle hasta que el usuario decida salir
}


//Funcion para obtener las filas del tablero
int Config::getfilasTablero()
{
    return this->filasTablero;
}


//Funcion para establecer las filas del tablero
int Config::setfilasTablero(int filasTablero)
{
    this->filasTablero=filasTablero;
}


//Funcion para obtener las columnas del tablero
int Config::getcolumnasTablero()
{
    return this->columnasTablero;
}


//Funcion para establecer las colummnas del tablero
int Config::setcolumnasTablero(int columnasTablero)
{
    this->columnasTablero=columnasTablero;
}


//Funcion para obtener minas del tablero
int Config::getminasTablero()
{
    return this->minasTablero;
}


//Funcion para establecer las minas del tablero
int Config::setminasTablero(int minasTablero)
{
    this->minasTablero=minasTablero;
}


//Funcion para obtener el modo desarrollador
bool Config::getmodoDesarrolladorTablero()
{
    return this->modoDesarrolladorTablero;
}


//Funcion para establecer el modo desarrollador del tablero
bool Config::setmodoDesarrolladorTablero(bool modoDesarrolladorTablero)
{
    this->modoDesarrolladorTablero=modoDesarrolladorTablero;
}


//Funcion para obtener las vidas del tablero
int Config::getvidasTablero()
{
    return this->vidasTablero;
}


//Funcion para establecer las vidas del tablero
int Config::setvidasTablero(int vidasTablero)
{
    this->vidasTablero=vidasTablero;
}


