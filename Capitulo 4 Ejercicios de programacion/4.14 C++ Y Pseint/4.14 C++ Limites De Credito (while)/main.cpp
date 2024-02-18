#include <iostream>
#include <string>
using namespace std;

int main()
{
    //DECLARANDO VARIABLES A UTILIZAR
    string nombre;
    int Numero_Cuenta;
    float Saldo_Inicial, Total_Articulos_Cargados, Total_Creditos_Aplicados, Nuevo_Saldo,Limite_Credito;

    //PEDIR NOMBRE
    cout << "Porfavor ingresar su nombre: ";
    cin >> nombre;


    //BIENVENIDA AL USUARIO
    cout << "Bienvenido, " << nombre << " a continuacion se le pedira ingresar los siguientes datos para calcular si ha llegado al limite del credito " << endl;


    //PEDIR DATOS
    cout << "Introduzca su numero de cuenta (o -1 para salir): ";
    cin >> Numero_Cuenta;


    //INICIO DEL CICLO WHILE
    while (Numero_Cuenta != -1)
    {
        cout << "Introduzca su saldo inicial: ";
        cin >> Saldo_Inicial;

        cout << "Introduzca los cargos totales: ";
        cin >> Total_Articulos_Cargados;

        cout << "Introduzca los creditos totales: ";
        cin >> Total_Creditos_Aplicados;

        cout << "Introduzca el limite de credito: ";
        cin >> Limite_Credito;


        //CALCULANDO NUEVO SALARIO
        Nuevo_Saldo = Saldo_Inicial + Total_Articulos_Cargados - Total_Creditos_Aplicados;


        //INICIO DEL CICLO IF
        if (Nuevo_Saldo >= Limite_Credito)
        {
            cout << "El nuevo saldo es: " << Nuevo_Saldo << endl;
            cout << "Cuenta: " << Numero_Cuenta << endl;
            cout << "Limite de credito: " << Limite_Credito << endl;
            cout << "Saldo: " << Nuevo_Saldo << endl;
            cout << "se excedio el limite de credito" << endl;


        } else
        {
            cout << "El nuevo saldo es: " << Nuevo_Saldo << endl;
        }

            cout << "Introduzca su numero de cuenta (o -1 para salir): ";
            cin >> Numero_Cuenta;
    }
            cout << "Ejecucion finalizada, feliz dia " << nombre << endl;
}
