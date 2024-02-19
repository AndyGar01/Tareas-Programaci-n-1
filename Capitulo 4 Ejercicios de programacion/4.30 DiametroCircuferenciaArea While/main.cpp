#include <iostream>

using namespace std;
const double PI = 3.14159;

int main()
{
    //DECLARANDO VARIABLES
    string nombre;
    int diametro;
    double radio, circuferencia, area;



    //OBTENIENDO NOMBRE DEL USUARIO
    cout << "Por favor ingresar su nombre: ";
    cin >> nombre;


    //DAR BIENVENIDA AL USUARIO
    cout << "Bienvenido " << nombre << ", a continuacion se le pedira ingresar el radio para obtener el diametro, circuferencia y area del circulo" << endl;


    //PEDIR RADIO
    cout << "Ingresar el radio o (ingresar -1 para salir del programa): ";
    cin >> radio;


    while (radio != -1)
    {
        //OPERACION PARA OBTENER EL DIAMETRO formula 2 * radio
        diametro = 2 * radio;


        //OPERACION PARA OBTENER CIRCUFERENCIA formula 2 * PI * radio al cuadrado
        circuferencia = 2 * PI * radio * radio;

        //OPERACION PARA OBTENER EL AREA formula PI * radio al cuadrado
        area = PI * radio * radio;

        cout << "El diametro es: " << diametro << endl;
        cout << "El circuferencia es: " << circuferencia  << endl;
        cout << "El area es: " << area  << endl;

        cout << "Ingresar el radio o (ingresar -1 para salir del programa): ";
        cin >> radio;
    }

}
