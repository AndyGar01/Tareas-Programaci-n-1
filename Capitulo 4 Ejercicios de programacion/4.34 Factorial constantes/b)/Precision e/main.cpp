#include <iostream>
#include <string>

using namespace std;

int main()
{
    //DECLARANDO VARIABLES
    string nombre;
    int p, i=1;
    float Factorial=1, d=0, e=1;



    //PEDIR NOMBRE
    cout << "Porfavor ingresar su nombre: ";
    cin >> nombre;


    //BIENVENIDA AL USUARIO
    cout << "Bienvenido " << nombre << " a continuacion se le pedira ingresar la precision para la constante de e " << endl;


    //PEDIR DATOS
    cout << "Porfavor Ingresar la precision para e: ";
    cin >> p;


    //Inicio del IF
    if (p > 0)
    {

        //INICIO DEL CICLO WHILE
        while (i <= p)
        {
        Factorial = Factorial * i;
        d = 1 / (Factorial);
        e = e + d;
        i++;
        }

        cout << "La constante e es : " << e << endl;

    }
    else
    {
        cout << "Error, el numero ingresado no debe de ser negativo";
    }

    return 0;
}
