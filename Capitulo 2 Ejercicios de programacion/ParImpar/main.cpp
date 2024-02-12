#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nombre;
    int num;


    //Obteniendo nombre del usuario
    cout << "Por favor ingresar su nombre: ";
    getline(cin, nombre);


    //Dar bienvenida al usuario
    cout << "Bienvenido " << nombre << ", a continuacion se le pedira ingresar EL numero a evaluar si es impar o par " << endl;


    //Pedir datos
    cout << "Ingresar el primer numero: ";
    cin >> num;


    //Inicio del ciclo if
    if (num % 2 == 0) {
        cout << "El numero " << num << " es par ";

    } else {
        cout << "El numero " << num << " es impar ";
    }

    return 0;
}
