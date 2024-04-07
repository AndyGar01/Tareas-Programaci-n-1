//Incluimos las bibliotecas y archivos a utilizar
#include "Juego.h"   //Archivo del encabezado de la clase "Juego"
#include <fstream>   //Biblioteca estandar para poder manejar archivos de texto
#include <unistd.h>  //biblioteca del nombre del archivo de encabezado que brinda acceso a la API del sistema operativo POSIX


//Funcion para generar un numero aleatorio en el rango especificado
int Juego::aleatorio_en_rango(int minimo, int maximo)
	{
		return minimo + rand() / (RAND_MAX / (maximo - minimo + 1) + 1);
	}


	//Funcion para poder obtener una fila aleatoria del tablero
	int Juego::filaAleatoria()
	{
		return this->aleatorio_en_rango(0, this->tablero.getAlturaTablero() - 1);
	}


    //Funcion para poder obtener una columna aleatoria del tablero
	int Juego::columnaAleatoria()
	{
		return this->aleatorio_en_rango(0, this->tablero.getAnchoTablero() - 1);
	}


    //Constructor de la clase tablero, inicializa e juego con la cantidad de minas especificadas
	Juego::Juego(Tablero tablero, int cantidadMinas)
	{
	    //Variables miembro inicializadas con sus parametros
		this->tablero = tablero;
		this->cantidadMinas = cantidadMinas;
		this->colocarMinasAleatoriamente(); //colocamos minas
	}


    //Funcion para colocar las minas aleatoriamente en el tablero
	void Juego::colocarMinasAleatoriamente()
	{
	    //variables
		int x, y, minasColocadas = 0;

		while (minasColocadas < this->cantidadMinas)
		{
			x = this->columnaAleatoria(); //generando columna  aleatoria
			y = this->filaAleatoria(); //generando fila aleatoria

			//coloca una mina en la celda xy
			if (this->tablero.colocarMina(x, y))
			{
				minasColocadas++;//incrementando contador
			}
		}
	}


    //Funcion para solicitar la fila de donde quiere comenzar el usuario
	int Juego::solicitarFilaUsuario()
	{
		int fila = 0;
		cout << "Ingresa la FILA en la que desea jugar: ";
		cin >> fila;
		return fila - 1;
	}


    //Funcion para solicitar la columna de donde quiere comenzar el usuario
	int Juego::solicitarColumnaUsuario()
	{
	    //inicializando la variable
		int columna = 0;
		cout << "Ingresa la COLUMNA en la que desea jugar: ";
		cin >> columna;
		return columna - 1; //retornamos la fila restandole 1
	}


    //Funcion para ver si el jugador (usuario) ha ganado el juego
	bool Juego::jugadorGana()
	{
	    //Obtenemos el conteo de las celdas sin minas y sin descubrir
		int conteo = this->tablero.contarCeldasSinMinasYSinDescubrir();

		//Al no haber minas y sin descubrir el jugador ha ganado
		if (conteo == 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

    //Funcion para iniciar el juego
	void Juego::iniciar()
	{
        //variables
		int fila, columna;

		//Inicio del while
		while (true)
		{
		    //imprimiendo el tablero
			this->tablero.imprimir();
			fila = this->solicitarFilaUsuario();
			columna = this->solicitarColumnaUsuario();

			//Descubriendo la celda seleccionada por el jugador (usuario) almacenando la respuesta
			bool respuestaAUsuario = this->tablero.descubrirMina(columna, fila);

			//La respuesta indica que has perdido indicara el mensaje "has perdido el juego"
			if (!respuestaAUsuario)
			{
				cout << "Perdiste el Juego\n";
				this->tablero.setModoDesarrollador(true);
				this->tablero.imprimir();
				break;
			}
            //Mensaje si el jugador ha ganado
			if (this->jugadorGana())
			{
				cout << "Ganaste el Juego\n";
				this->tablero.setModoDesarrollador(true); //modo desarrollador activado
				this->tablero.imprimir(); //imprimiendo el tablero
				break;
			}
		}
	}
