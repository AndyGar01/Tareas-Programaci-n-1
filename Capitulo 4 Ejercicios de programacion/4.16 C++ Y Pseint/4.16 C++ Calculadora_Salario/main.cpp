#include <iostream>
#include <string>

using namespace std;

int main()
{
   //DECLARANDO VARIABLES
    string nombre;
    int Horas_trabajadas;
    double Tarifa, Salario;


    //OBTENIENDO NOMBRE DEL USUARIO
    cout << "Por favor ingresar su nombre: ";
    cin >> nombre;


    //DAR BIENVENIDA AL USUARIO
    cout << "Bienvenido " << nombre << ", a continuacion se le pedira ingresar las horas trabajadas para mostrar el sueldo bruto" << endl;


    //PEDIR DATOS
    cout << "Introduzca las horas trabajadas (-1 para salir): ";
    cin >> Horas_trabajadas;


    //INICIO DEL WHILE
    while (Horas_trabajadas != -1)
    {
        if (Horas_trabajadas <= 40)
        {
            cout << "Introduzca la tarifa por horas del empleado ($00.00): ";
            cin >> Tarifa;

            //Calcular salario
            double Salario = Horas_trabajadas * Tarifa;

            cout << "El salario es $" << Salario << endl;

        } else {


            cout << "Introduzca la tarifa por horas del empleado ($00.00): ";
            cin >> Tarifa;

            //Calcular salario
            double Salario = Horas_trabajadas * Tarifa + 5;


            cout << "El salario es $" << Salario << endl;
        }


            //PEDIR NUEVOS DATOS SI EL USUARIO LO DESEA
            cout << "Introduzca las horas trabajadas (-1 para salir): ";
            cin >> Horas_trabajadas;

    }
            cout << "Finalizando ejecucion  feliz dia " << nombre << endl;
}
