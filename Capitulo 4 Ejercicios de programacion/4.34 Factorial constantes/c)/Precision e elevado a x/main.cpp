#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
    string nombre;
    int x, i=1;
    float Factorial=1, d=0, e=1, P=0;


    //OBTENIENDO NOMBRE
    cout << "Porfavor ingresar su nombre: ";
    cin >> nombre;


    //BIENVENIDA
    cout << "Bienvenido, " << nombre << " a continuacion se le pedira ingresar los siguientes datos"<< endl;


    //OBTENIENDO DATOS
    cout << "Escriba la precision para e elevado a x: ";
    cin >> x;


    //INICIO DEL IF
    if (x > 0)
    {

        //INICIO DEL CICLO WHILE
        while (i <= x)
        {
            Factorial = Factorial * i;
            P = pow(x,i);
            d = P/(Factorial);
            e = e + d;
            i++;
        }
        cout << " La constante e elevado a la x " << " es : " << e << endl;

    }
    else
    {
        cout << " El numero ingresado no debe de ser negativo.";
    }

    return 0;
}
