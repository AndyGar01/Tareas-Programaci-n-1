#include <iostream>
#include <string>

using namespace std;

int main()
{
    //VARIABLES A UTILIZAR
    string nombre;
    unsigned int Aprobados = 0, Reprobados = 0, Cont_Estudiantes = 0;


    //PEDIR NOMBRE
    cout << "Porfavor ingresar su nombre: ";
    cin >> nombre;


    //BIENVENIDA AL USUARIO
    cout << "Bienvenido " << nombre << " A continuacion se le pedira ingresar los estudiantes aprobados y reprobados para obtener el total y saber si darle un bono al instructor" << endl;

    while ( Cont_Estudiantes <= 10 )
    {
            //INSTRUCCIONES
            cout << "Escriba el resultado (1 = aprobado, 2 = reprobado): ";
            int resul = 0;
            cin >> resul;

            //INICIO DEL IF
            if ( resul == 1 )
            {
            Aprobados = Aprobados + 1;
            Cont_Estudiantes = Cont_Estudiantes + 1;
            }


            else if ( resul == 2 )
            {
            Reprobados = Reprobados + 1;
            Cont_Estudiantes = Cont_Estudiantes + 1;
            }


            else
            {
            cout << "Solo se puede ingresar 1 y 2" << endl;
            cout << "Escriba el resultado del estudiante (1 = aprobado, 2 = reprobado): ";
            }

    }
    //IMPRIMIENDO RESULTADOS
    cout << Aprobados << " Estudiantes Aprobados y " <<  Reprobados << " Estudiantes Reprobados" << endl;


    //INICIO DEL IF
    if ( Aprobados > 8 )
    {
    cout << "Se otorga bono para el instructor" << endl;
    }

    return 0;
}
