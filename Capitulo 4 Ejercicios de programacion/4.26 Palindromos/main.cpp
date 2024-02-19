#include <iostream>
#include <string>

using namespace std;

int main()
{
    //DECLARANDO VARIABLES A UTILIZAR
    string nombre;
    int Num_Entero, Dig_1, Dig_2, Dig_4, Dig_5;


    //OBTENIENDO NOMBRE DEL USUARIO
    cout << "Por favor ingresar su nombre: ";
    cin >> nombre;


    //DAR BIENVENIDA AL USUARIO
    cout << "Bienvenido " << nombre << ", a continuacion se le pedira ingresar un numero entero de 5 digitos y determinaremos si es o no un palindromo" << endl;


    //Pedir numero entero
    cout << "Ingresar el numero entero de 5 digitos (Ingresar -1 para salir) : ";
    cin >> Num_Entero;


    //INICIO DEL CICLO WHILE
    while (Num_Entero != -1)
    {
        Dig_1 = (Num_Entero % 100000) / 10000;
        Dig_2 = (Num_Entero % 10000) / 1000;
        Dig_4 = (Num_Entero % 100) / 10;
        Dig_5 = Num_Entero % 10;

        if (Dig_1 == Dig_5 && Dig_2 == Dig_4)
        {
            cout << Num_Entero << " Si es un palindromo" << endl;
        } else {
            cout << Num_Entero << " No es un palindromo"<< endl;
        }

        cout << "Ingresar el numero entero de 5 digitos (Ingresar -1 para salir) : ";
        cin >> Num_Entero;
    }

    cout << "Finalizando ejecucion feliz dia " << nombre << endl;
}

