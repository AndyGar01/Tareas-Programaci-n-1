//Incluimos las bibliotecas y archivos a utilizar
#include "Celda.h"  //Archivo del encabezado de la clase "Celda"
#include <iostream> //Biblioteca estandar


using namespace std; //Importa todo el espacio de nombres (namespace) std al ámbito actual


//Constructor celda
Celda::Celda()
{
}


//Constructor de la clase celda que inicializa las variables miembros (cordendadas = celdas) y si tienen o no una mina
Celda::Celda(int coordenadaX, int coordenadaY, bool estadoMina)
{
    //Variables miembro inicializadas con sus parametros
    this->coordenadaX = coordenadaX;
    this->coordenadaY = coordenadaY;
    this->mina = estadoMina;
    this->minaDescubierta = false;
}


//Funcion para establecer la cordenada X
int Celda::setCoordenadaX(int coordenadaX)
{
    this->coordenadaX = coordenadaX;
}


//Funcion para obtener la cordenada X
int Celda::getCoordenadaX()
{
    return this->coordenadaX;
}


//Funcion para establecer la cordenada Y
int Celda::setCoordenadaY(int coordenadaY)
{
    this->coordenadaY = coordenadaY;
}


//Funcion para obtener la cordenada Y
int Celda::getCoordenadaY()
{
    return this->coordenadaY;
}


//Funcion para establecer la mina
bool Celda::setMina(bool estadoMina)
{
    if (this->getMina())
    {
        return false;
    }
    else{
        this->mina = estadoMina;
        return true;
    }
}


//Funcion para obtener la mina
bool Celda::getMina()
{
    return this->mina;
}


//Funcion para establecer la mina descubierta
bool Celda::setMinaDescubierta(bool minaDescubierta)
{
    this->minaDescubierta = minaDescubierta;
}


//Funcion para obtener la mina descubierta
bool Celda::getMinaDescubierta()
{
    return this->minaDescubierta;
}

//Funcion para imprimir la celda con sus cordenadas y si tiene mina
void Celda::imprimirCelda()
{
    cout << "Celda en " << this->coordenadaX << ", " << this->coordenadaY << " con mina? " << this->mina << "\n";
}


