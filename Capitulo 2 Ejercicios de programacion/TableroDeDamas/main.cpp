#include <iostream>
#include <string>
using namespace std;

int main()
{
    //Declarando Variables
    string nombre;


    //Solicitando nombre al usuario
    cout << "Por favor ingresar su nombre: ";
    getline(cin, nombre);


    //Dar bienvenida al usuario
    cout << "Bienvenido " << nombre << ", a continuacion se le mostrara dos tableros de ajedrez " << endl;

    cout << "Tablero de damas de 8 lineas de codigo";
    cout << "\n" << endl;

    cout << "    * * * * * * * *" << endl;
    cout << "     * * * * * * * *" << endl;
    cout << "    * * * * * * * *" << endl;
    cout << "     * * * * * * * *" << endl;
    cout << "    * * * * * * * *" << endl;
    cout << "     * * * * * * * *" << endl;
    cout << "    * * * * * * * *" << endl;
    cout << "     * * * * * * * *" << endl;

    cout << "\n" << endl;

    cout << "Tablero de damas de 1 linea de codigo";
    cout << "\n" << endl;

    cout << "   * * * * * * * *\n    * * * * * * * *\n   * * * * * * * *\n    * * * * * * * *\n   * * * * * * * *\n    * * * * * * * *\n   * * * * * * * *\n    * * * * * * * *\n";








    return 0;
}
