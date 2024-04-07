//--------------------------------------------------------Pendiente----------------------------------------------------------------------------------------------
#ifndef JUEGO_H
#define JUEGO_H
#include "Tablero.h" //Archivo del encabezado de la clase "Tablero"

//Clase Juego
class Juego
{

//Miembros privados
private:
	Tablero tablero;    //objeto de la clase Tablero
	int cantidadMinas; //El numero de cantidad de minas

	//Generar numeros aleatorios
	int aleatorio_en_rango(int minimo, int maximo);
	int filaAleatoria();
	int columnaAleatoria();

//Miembros Publicos
public:

    //Constructor de la clase juego que inicializa sus variables miembros
    Juego(Tablero tablero, int cantidadMinas);

    //Funcion para colocar minas aleatoriamente
	void colocarMinasAleatoriamente();

	//Funcion para solicitar la fila en donde quiera comenzar el usuario
	int solicitarFilaUsuario();

	//Funcion para solicitar la columnas en donde quiera comenzar el usuario
	int solicitarColumnaUsuario();

	//Funcion para verificar si el jugador gano
	bool jugadorGana();

	//Funcion para iniciar el juego
	void iniciar();

	//Funcion para dibujar la portada del juego
	void dibujarPortada(string nombreArchivo);
};

#endif // JUEGO_H
