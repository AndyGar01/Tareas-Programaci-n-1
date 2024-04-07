//Incluir archivos y bibliotecas
#ifndef TABLERO_H
#define TABLERO_H
#include <iostream>  //biblioteca estandar
#include <vector>    // Biblioteca estándar de vectores
#include "Celda.h"   //Archivo del encabezado de la clase "Celda"

using namespace std;


//Clase tablero
class Tablero
{
    //Miembros publicos
    public:

        //Constructor tablero
        Tablero();

        //Constructor de la clase tablero que inicializa sus variables miembros
        Tablero(int alturaTablero, int anchoTablero, bool modoDesarrollador);

        //obtenemos la altura tablero
        int getAlturaTablero();

        //Establecemos la altura tablero
        int setAlturaTablero(int alturaTablero);

        //Obtenemos el ancho del tablero
        int getAnchoTablero();

        //Establecemeos el ancho del tablero
        int setAnchoTablero(int anchoTablero);

        //Obtenemos el modo desarrollador
        bool getModoDesarrollador();

        //Establecemos el modo desarrollador
        bool setModoDesarrollador(bool modoDesarrollador);

        //Funcion para imprimir el tablero
        void imprimirSeparadorEncabezado();
        void imprimirSeparadorFilas();
        void imprimirEncabezado();
        void imprimir();

        //Funcion para la mina en la celda especifica
        bool colocarMina(int x, int y);

        //Funcion para descubrir la mina en el tablero
        bool descubrirMina(int x, int y);

        //Contar las celdas sin minas y sin descubrir
        int contarCeldasSinMinasYSinDescubrir();

    //Miembros protegidos
    protected:

    //Miembros privados
    private:
        int alturaTablero, anchoTablero;
        bool modoDesarrollador;
        vector<vector<Celda> > contenidoTablero; //Matriz que representa el contenido del tablero

        //obtenemos la representacion de una celda en el tablero y contar las minas cercanas
        string getRepresentacionMina(int x, int y);
        int minasCercanas(int fila, int columna);
};

#endif // TABLERO_H
