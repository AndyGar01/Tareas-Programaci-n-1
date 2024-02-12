#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nombre;
    int numero;


    //Obteniendo nombre del usuario
    cout << "Por favor ingresar su nombre: ";
    getline(cin, nombre);



    //Dar bienvenida al usuario
    cout << "Bienvenido " << nombre << ", a continuacion se le pedira ingresar un numero entero" << endl;


    //Pedir datos
    cout << "Ingresar un numero entero de 5 digitos: ";
    cin >> numero;


    //Separar el entero por 3 espacios utilizando la division entera y modulo

    //Se obtiene el ultimo digito
    int digito5 = numero % 10;
    numero = numero / 10;

    //Se obtiene el cuarto digito
    int digito4 = numero % 10;
    numero = numero / 10;

    //Se obtiene el tercer digito
    int digito3 = numero % 10;
    numero = numero / 10;

    //Se obtiene el segundo digito
    int digito2 = numero % 10;
    numero = numero / 10;

    //Se obtiene el primer digito
    int digito1 = numero % 10;
    numero = numero / 10;


    //Imprimeindo los digitos separados
    cout << digito1 << "  " << digito2 << "  " << digito3 << "  " << digito4 << "  " << digito5 << endl;



    return 0;
}
