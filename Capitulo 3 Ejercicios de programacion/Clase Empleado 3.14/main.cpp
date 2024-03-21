//AGREGAMOS LAS BIBLIOTECAS A UTILIZAR
#include <iostream>
#include <string>

using namespace std;

//CREAMOS LAS CLASE EMPLEADO
class Empleado
{

public:

    //AGREGAMOS LAS 3 PIEZAS DEL CONSTRUCTOR EMPLEADO
    Empleado(string Nombre_E, string Apellido_P, int Salario_M)
    {

    //DEFINIMOS VARIABLES
    Nombre = Nombre_E;
    Apellido = Apellido_P;

//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    //VALIDAMOS EL SALARIO, SI EL SALARIO ES NEGATIVO = 0
    if (Salario_M > 0)
    {
        Salario = Salario_M;
    }
    else
    {
        Salario = 0;
    }
    }
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    //FUNCIONES A UTILIZAR ESTABLECER Y OBTENER

    //Establecemos el nombre del empleado
    void Establecer_Nombre(string Nombre_E)
    {
        Nombre = Nombre_E;
    }
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    //ESTABLECEMOS EL APELLIDO DEL
    void Establecer_ApellidoP(string Apellido_E)
    {
        Apellido = Apellido_E;
    }
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    //ESTABLECEMOS EL SALARIO MENSUAL DEL EMPLEADO
    void Establecer_Salario(int Salario_M)
    {
        if (Salario_M > 0)
    {
        Salario = Salario_M;
    }
    else
    {
        Salario = 0;
    }
    }
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    //OBTENEMOS EL NOMBRE DEL EMPLEADO
    string Obtener_Nombre()
    {
        return Nombre;
    }
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    //OBTENEMOS EL APELLIDO PATERNO DEL EMPLEADO
    string Obtener_ApellidoP()
    {
        return Apellido;
    }
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    //OBTENEMOS EL SALARIO DEL EMPLEADO
    int Obtener_Salario()
    {
        return Salario;
    }
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    int Obtener_Salario_Anual()
    {
        return Salario * 12;
    }

    int Obtener_Salario_Anual_Aumentado()
    {
        return Salario *= 1.10;
    }

private:

string Nombre;
string Apellido;
int Salario;


};

int main()
{
    //DEFINIMOS VARIABLES A USAR
    string Nombre_Empleado1, Apellido_Paterno_Empleado1, Nombre_Empleado2, Apellido_Paterno_Empleado2;
    int Salario_Mensual_Empleado1, Salario_Mensual_Empleado2;


//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

    //PEDIR DATOS DEL EMPLEADO 1
    cout << " Ingresar el nombre del empleado 1: ";
    cin >> Nombre_Empleado1;

    cout << " Ingresar el apellido paterno del empleado 1: ";
    cin >> Apellido_Paterno_Empleado1;

    cout << " Ingresar el salario mensual del empleado 1: ";
    cin >> Salario_Mensual_Empleado1;
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

    //PEDIR DATOS DEL EMPLEADO 2
    cout << " Ingresar el nombre del empleado 2: ";
    cin >> Nombre_Empleado2;

    cout << " Ingresar el apellido paterno del empleado 2: ";
    cin >> Apellido_Paterno_Empleado2;

    cout << " Ingresar el salario mensual del empleado 1: ";
    cin >> Salario_Mensual_Empleado2;

//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

 //ASOCIAMOS LA CUENTA OBJETO CON LOS DATOS INGRESADOS POR EL USUARIO
    Empleado Empleado1(Nombre_Empleado1, Apellido_Paterno_Empleado1, Salario_Mensual_Empleado1);
    Empleado Empleado2(Nombre_Empleado2, Apellido_Paterno_Empleado2, Salario_Mensual_Empleado2);

    cout << "El empleado 1 " << Empleado1.Obtener_Nombre() << " " << Empleado1.Obtener_ApellidoP() << " tiene un salario anual de $" << Empleado1.Obtener_Salario_Anual() << endl;
    cout << "El empleado 2 " << Empleado2.Obtener_Nombre() << " " << Empleado2.Obtener_ApellidoP() << " tiene un salario anual de $" << Empleado2.Obtener_Salario_Anual() << endl;

    Empleado1.Obtener_Salario_Anual_Aumentado();
    Empleado2.Obtener_Salario_Anual_Aumentado();

    cout << "El empleado 1 " << Empleado1.Obtener_Nombre() << " " << Empleado1.Obtener_ApellidoP() << " tiene un salario anual de $" << Empleado1.Obtener_Salario_Anual() << endl;
    cout << "El empleado 2 " << Empleado2.Obtener_Nombre() << " " << Empleado2.Obtener_ApellidoP() << " tiene un salario anual de $" << Empleado2.Obtener_Salario_Anual() << endl;
}
