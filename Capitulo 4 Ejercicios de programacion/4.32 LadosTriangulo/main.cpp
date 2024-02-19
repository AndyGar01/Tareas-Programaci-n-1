#include <iostream>
#include <string>

using namespace std;

int main()
{
    //Declarando Variables
    string nombre;
    int Ingresar_Valores;
    double lado1, lado2, lado3;


    //Obteniendo nombre del usuario
    cout << "Por favor ingresar su nombre: ";
    cin >> nombre;


    //BIENVENIDA AL USUARIO
    cout << "Bienvenido " << nombre << " a continuacion se le pedira ingresar 3 lados de un triangulo y determinaremos si se podra representar los lados del triangulo" << endl;


    //Decision del usuario
    cout << "Si desea ingresar los valores escribir 1, si desea salir escribir -1: ";
    cin >> Ingresar_Valores;


    //INICIO DEL CICLO WHILE
    while(Ingresar_Valores != -1)
    {
        //PEDIR LOS 3 LADOS DEL TRIANGULO
        cout << "Ingresar el primer lado del triangulo : ";
        cin >> lado1;


        cout << "Ingresar el segundo lado del triangulo : ";
        cin >> lado2;


        cout << "Ingresar el tercer lado del triangulo : ";
        cin >> lado3;


        //INICIO DEL CICLO IF
        if ((lado1 + lado2 > lado3) && (lado1 + lado3 > lado2) && (lado2 + lado3 > lado1)){

            cout << "Con los 3 valores ingresados SI se puede representar un triangulo" << endl;

        } else {
            cout << "Con los 3 valores ingresados NO se puede representar un triangulo" << endl;

        }

        cout << "Si desea ingresar los valores escribir 1, si desea salir escribir -1: ";
        cin >> Ingresar_Valores;

    }

        cout << "Finalizando ejecucion feliz dia " << nombre << endl;
}
