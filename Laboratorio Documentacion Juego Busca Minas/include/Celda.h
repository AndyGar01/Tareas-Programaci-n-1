//--------------------------------------------------------Pendiente----------------------------------------------------------------------------------------------
#ifndef CELDA_H
#define CELDA_H


//Libreria que guarda los atributos y los prototipos de los metodos utilizados para crear y administrar las celdas de juego
//Fecha: 17 marzo 2023


//Clase Celda del juego
class Celda
{

    //Miembros publicos
    public:
        //Constructor de la clase celda
        Celda();


        //Constructor de la clase celda que inciializa sus variables miembros (cordenadas) y su estado si tiene o no una mina
        Celda(int coordenadaX, int coordenadaY, bool estadoMina);


        //Establecemos la cordenada X
        int setCoordenadaX(int coordenadaX);


        //Obtener cordenadas X
        int getCoordenadaX();


        //Establecemos una cordenada Y
        int setCoordenadaY(int coordenadaY);

        //Obtenemos una cordenadaY
        int getCoordenadaY();


        //Establecemos la mina en la celda
        bool setMina(bool estadoMina);


        //Obtenemos la mina
        bool getMina();


        //Establecemos la mina descubierta
        bool setMinaDescubierta(bool minaDescubierta);


        //Obtenemos la mina descubierta
        bool getMinaDescubierta();


        //Funcion para imprimir la informacion de la celda
        void imprimirCelda();


    //Miembros protegidos
    protected:

    //Miembros privados
    private:
        int coordenadaX, coordenadaY;
        bool mina, minaDescubierta;
};

#endif // CELDA_H
