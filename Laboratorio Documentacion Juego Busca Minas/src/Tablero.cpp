//Incluimos las bibliotecas y archivos a utilizar
#include "Tablero.h" //Archivo del encabezado de la clase "Tablero"
#include <sstream>   //Biblioteca que define un tipo llamado stringstream que nos permite tratar un string como un stream
#include <iostream>  //Biblioteca estandar


////Importa todo el espacio de nombres (namespace) std al ámbito actual
using namespace std;


//Constructor Tablero
Tablero::Tablero()
{
}


//Constructor con sus parametros
Tablero::Tablero(int alturaTablero, int anchoTablero, bool modoDesarrollador)
{
    //Variables miembro inicializadas con sus parametros
    this->alturaTablero = alturaTablero;
    this->anchoTablero = anchoTablero;
    this->modoDesarrollador = modoDesarrollador;

    //Bucle para la creacion del tablero y su contenido
    int x, y;
    for (y=0; y < this->alturaTablero; y++)
    {
        vector<Celda> fila; //almacena las celdas de una fila

        //Bucle para la creacion de una nueva celda y se agrega a la fila
        for (x=0; x < this->anchoTablero; x++)
        {
            fila.push_back((Celda(x, y, false)));
        }
        this->contenidoTablero.push_back(fila);// Se agrega la fila al contenido
    }
}

//Obtenemos la altura del tablero
int Tablero::getAlturaTablero()
{
    return this->alturaTablero;
}


//Establecemos la altura del tablero
int Tablero::setAlturaTablero(int alturaTablero)
{
    this->alturaTablero = alturaTablero;
}


//Obtenemos el ancho del tablero
int Tablero::getAnchoTablero()
{
    return this->anchoTablero;
}


//Establecemos el ancho del tablero
int Tablero::setAnchoTablero(int anchoTablero)
{
    this->anchoTablero = anchoTablero;
}


//Obtenemos el modo desarrollador
bool Tablero::getModoDesarrollador()
{
    return this->modoDesarrollador;
}


//Establecemos el modo desarrollador
bool Tablero::setModoDesarrollador(bool modoDesarrollador)
{
    this->modoDesarrollador = modoDesarrollador;
}

//Funcion para la representacion en forma de cadena de una celda de las cordenadas especificadas
string Tablero::getRepresentacionMina(int coordenadaX, int coordenadaY)
{
    //Obtenemos la celda de las cordenadas especificadas
    Celda celdaTemporal = this->contenidoTablero.at(coordenadaY).at(coordenadaX);


    //Verificacion de la celda si la mina esta descubierta o esta en el modo desarrollador
    if (celdaTemporal.getMinaDescubierta() || this->modoDesarrollador)
    {

        //Si la mina esta en la celda o esta en el modo desarrollador se muestra "*"
        if (celdaTemporal.getMina())
        {
            return "*";
        }

        //Si la mina no esta en la celda, obtenemos un numero de minas cercanas
        else
        {
            int cantidadCelda=this->minasCercanas(coordenadaY,coordenadaX);
            string cantidadCeldaString = " ";
            stringstream ss;
            ss << cantidadCelda;
            ss >> cantidadCeldaString;
            return cantidadCeldaString; //devolviendo el numero de minas cercanas
        }
    }
    else
    {
        return "?"; //Si no se descubre la mina se devuelve "?"
    }
}

//Funcion para contar el numero de minas cercanas de una celda especificada
int Tablero::minasCercanas(int filaTablero, int columnaTablero)
{
        //variables
        int contadorTablero = 0;
        int filaInicioTablero, filaFinTablero, columnaInicioTablero, columnaFinTablero;

        //limites de las minas y columnas para buscar las minas cercanas
        if (filaTablero <= 0)
		{
			filaInicioTablero = 0;
		}
		else
		{
			filaInicioTablero = filaTablero - 1;
		}

		if (filaTablero + 1 >= this->alturaTablero)
		{
			filaFinTablero = this->alturaTablero - 1;
		}
		else
		{
			filaFinTablero = filaTablero + 1;
		}

		if (columnaTablero <= 0)
		{
			columnaInicioTablero = 0;
		}
		else
		{
			columnaInicioTablero = columnaTablero - 1;
		}
		if (columnaTablero + 1 >= this->anchoTablero)
		{
			columnaFinTablero = this->anchoTablero - 1;
		}
		else
		{
			columnaFinTablero = columnaTablero + 1;
		}

		//variable
		int m;

		//Recorre el rango de las celdas para poder contar las minas
		for (m = filaInicioTablero; m <= filaFinTablero; m++)
		{
			int l;
			for (l = columnaInicioTablero; l <= columnaFinTablero; l++)
			{
				if (this->contenidoTablero.at(m).at(l).getMina())
				{
					contadorTablero++;
				}
			}
		}
		return contadorTablero;
}


//Funcion para imprimir el separador del encabezado
void Tablero::imprimirSeparadorEncabezado()
	{
	    //variable
		int m;
		for (m = 0; m <= this->anchoTablero; m++)
		{
			cout << "----";

			//si esta en la ultima celda se imprime un - mas
			if (m + 2 == this->anchoTablero)
			{
				cout << "-";
			}
		}
		cout << "\n"; //nueva linea
	}


    //Funcion para imprimir el separador de filas
	void Tablero::imprimirSeparadorFilas()
	{
		int m;
		for (m = 0; m <= this->anchoTablero; m++)
		{

		    //Delimitar celdas
			if (m <= 1)
			{
				cout << "|---";
			}
			else
			{
				cout << "+---";
			}

			//si esta en la ultima celda se imprime un +
			if (m == this->anchoTablero)
			{
				cout << "+";
			}
		}
		cout << "\n"; //nueva linea
	}


    //Funcion para imprimir el encabezado
	void Tablero::imprimirEncabezado()
	{
	    //imprimiendo el separador del encabezado
		this->imprimirSeparadorEncabezado();

		//imprimiendo | en el espacio inicial en el encabezado
		cout << "|   ";
		int l;

		//Reccorriendo las columnas del tablero
		for (l = 0; l < this->anchoTablero; l++)
		{
		    //imprimiendo el numero de columna
			cout << "| " << l + 1 << " ";

			//al llegar a la ultima columna se cierra colocando una |
			if (l + 1 == this->anchoTablero)
			{
				cout << "|";
			}
		}
		cout << "\n"; //nueva linea
	}


    //Funcion para imprimir el tablero con su encabezado y separador del encabezado
	void Tablero::imprimir()
	{
	    //imprimiendo el encabezado
		this->imprimirEncabezado();

		//imprimiendo el separador del encabezado
		this->imprimirSeparadorEncabezado();
		int x, y;

		//se recorren todas las filas
		for (y = 0; y < this->alturaTablero; y++)
		{

		    //imprimiendo numero de fila
			cout << "| " << y + 1 << " ";

			//reccorriendo columnas del tablero
			for (x = 0; x < this->anchoTablero; x++)
			{
			    //imprimiendo el contenido de la posicion
				cout << "| " << this->getRepresentacionMina(x, y) << " ";

				//al llegar a la ultima columna se cierra con la barra
				if (x + 1 == this->anchoTablero)
				{
					cout << "|";
				}
			}
			cout << "\n";
			this->imprimirSeparadorFilas();
		}
	}


	//Funcion para establecer la mina en ciertas cordenadas
    bool Tablero::colocarMina(int x, int y)
	{
		return this->contenidoTablero.at(y).at(x).setMina(true);
	}


	//Funcion para descubrir en la celda especificada
    bool Tablero::descubrirMina(int x, int y)
	{
	    //Marcando la celda descubierta
		this->contenidoTablero.at(y).at(x).setMinaDescubierta(true);

		//obteniendo celda especificada
		Celda celda = this->contenidoTablero.at(y).at(x);

		//si la celda contiene mina devolvera false
		if (celda.getMina())
		{
			return false;
		}
		//y si no tiene mina devulve true
		return true;
	}


	//Funcion para contar las minas sin descubrir y las celdas sin minas del tablero
	int Tablero::contarCeldasSinMinasYSinDescubrir()
	{
	    //variable
		int x, y, contador = 0;

		//recorriendo celdas tablero
		for (y = 0; y < this->alturaTablero; y++)
		{
			for (x = 0; x < this->anchoTablero; x++)
			{
				Celda celdaTemporal = this->contenidoTablero.at(y).at(x);

				//verificando si la celda no ha sido descubierta y si no contiene mina
				if (!celdaTemporal.getMinaDescubierta() && !celdaTemporal.getMina())
				{
				    //incrementando el contador
					contador++;
				}
			}
		}
		return contador; //retornamos al contador
	}
