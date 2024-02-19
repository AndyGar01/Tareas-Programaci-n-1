#include <iostream>
#include <string>

using namespace std;

int main()
{

    //DECLARANDO VARIABLES A UTILIZAR
    int factorial=1, Num, i=1;
    string nombre;


    //PEDIR NOMBRE DEL USUARIO
    cout << "Por favor ingresear su nombre: ";
    cin >> nombre;


    //BIENVENIDA
    cout << "Bienvenido, " << nombre << " a continuacion se le pedira ingresar un numero para determinar el factorial" << endl;


    //OBTENIENDO DATOS
    cout << "Escriba un numero: ";
    cin >> Num;

    //INICIO DEL IF
    if (Num > 0)
    {


        //INICIO DEL WHILE
        while (i <= Num)
        {
        factorial = factorial * i;
        i++;
        }

        cout << "El factorial del numero ingresado  " << Num << " es : " << factorial << endl;

    }
    else
    {
        cout << " Error, el numero ingresado no debe ser negativo.";
    }

    return 0;
}
