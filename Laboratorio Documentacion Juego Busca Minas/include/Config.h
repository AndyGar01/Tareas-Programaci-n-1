//--------------------------------------------------------Pendiente----------------------------------------------------------------------------------------------
#ifndef CONFIG_H
#define CONFIG_H


//Clase configuracion del juego
class Config
{
    //Miembros publicos
    public:

        //Constructor config qu inicializa sus variables miembros
        Config(int filasTablero, int columnasTablero, int minasTablero, bool modoDesarrolladorTablero, int vidasTablero);

        //Obtenemos filas del tablero
        int getfilasTablero();

        //Establecemos las filas del tablero
        int setfilasTablero(int filasTablero);

        //Obtenemos las columnas del tablero
        int getcolumnasTablero();

        //Establecemos las columnas del tablero
        int setcolumnasTablero(int columnasTablero);

        //Obtenemos las minas del tablero
        int getminasTablero();

        //Establecemos las minas del tablero
        int setminasTablero(int minasTablero);

        //Obtenemos el desarrollador del tablero
        bool getmodoDesarrolladorTablero();

        //Establecemos el modo desarrollador del tablero
        bool setmodoDesarrolladorTablero(bool modoDesarrolladorTablero);

        //Obtenemos las vidas
        int getvidasTablero();

        //Establecemos las vidas del tablero
        int setvidasTablero(int vidasTablero);

        //funcion para mostrar el menu de la configuracion
        void menuConfiguracion();


    //Miembros protegidos
    protected:


    //Miembros privados
    private:

        int filasTablero;
        int columnasTablero;
        int minasTablero;
        bool modoDesarrolladorTablero;
        int vidasTablero;
};

#endif // CONFIG_H
