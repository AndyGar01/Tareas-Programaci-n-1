#include <iostream>
#include <string>

using namespace std;

//CREACION DE LA CLASE FRECUENCIASCARDIACAS
class FrecuenciasCardiacas
{
public:
    //CONSTRUCTOR PARA RECIBIR PARAMETROS
    FrecuenciasCardiacas(string Primer_Nombre, string Apellido_P, int dia_nacimiento, int mes_nacimiento, int anio_nacimiento)
    : Nombre(Primer_Nombre), Apellido(Apellido_P), Dia_De_Nacimiento(dia_nacimiento), Mes_De_Nacimiento(mes_nacimiento), Anio_De_Nacimiento(anio_nacimiento) {}

//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    //FUNCIONES DE ESTABLECER

    void Establecer_PrimerNombre(string Primer_Nombre)
    {
      Nombre = Primer_Nombre;
    }
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

    void Establecer_Apellido(string Apellido_P)
    {
      Apellido = Apellido_P;
    }
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

    void Establecer_DiaDeNacimiento(int dia_nacimiento)
    {
      Dia_De_Nacimiento = dia_nacimiento;
    }
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

    void Establecer_MesDeNacimiento(int mes_nacimiento )
    {
      Mes_De_Nacimiento = mes_nacimiento;
    }
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

    void Establcer_AnioDeNacimiento(int anio_nacimiento )
    {
      Anio_De_Nacimiento = anio_nacimiento;
    }
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    //FUNCIONES OBTENER

    string Obtener_PrimerNombre()
    {
      return Nombre;
    }

    string Obtener_Apellido()
    {
      return Apellido;
    }

    int Obtener_DiaDeNacimiento()
    {
      return Dia_De_Nacimiento;
    }

    int Obtener_MesDeNacimiento()
    {
      return Mes_De_Nacimiento;
    }

    int Obtener_AnioDeNacimiento()
    {
      return Anio_De_Nacimiento;
    }
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    //FUNCIONES EXTRAS DE OBTENER

    int Obtener_Edad()
    {
        int Edad = 2024 - Anio_De_Nacimiento;
        return Edad;
    }
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

    int Obtener_FrecuenciaCardiacaMaxima()
    {
        int Pulsos = 220;
        int Frecuencia_Cardiaca_Maxima = Pulsos - Obtener_Edad();
        return Frecuencia_Cardiaca_Maxima;
    }
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    int Obtener_FrecuenciaCardiacaMaximaEsperada()
    {
        return Obtener_FrecuenciaCardiacaMaxima() * 0.85;
    }
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

    int Obtener_FrecuenciaCardiacaMinimaEsperada()
    {
        return Obtener_FrecuenciaCardiacaMaxima() * 0.5;
    }
private:
    string Nombre;
    string Apellido;
    int Dia_De_Nacimiento;
    int Mes_De_Nacimiento;
    int Anio_De_Nacimiento;
};

//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
int main ()
{
    string Nombre, Apellido;
    int dia, mes, anio;


    cout << "Ingresar su primer nombre: ";
    cin >> Nombre;

    cout << "Ingresar su apellido : ";
    cin >> Apellido;

    cout << "Ingresar su fecha de nacimiento (dia/mes/año) : ";
    cin >> dia >> mes >> anio;

    FrecuenciasCardiacas Persona1(Nombre, Apellido, dia, mes, anio);

    cout <<"----------Su Informacion----------" << endl;
    cout <<" Nombre: " << Persona1.Obtener_PrimerNombre() << endl;
    cout <<" Apellido: " << Persona1.Obtener_Apellido() << endl;
    cout <<" Fecha Nacimiento: " << Persona1.Obtener_DiaDeNacimiento() << " - " << Persona1.Obtener_MesDeNacimiento() << " - " << Persona1.Obtener_AnioDeNacimiento() << endl;
    cout <<" Su edad es: " << Persona1.Obtener_Edad() << " años" << endl;
    cout <<"----------Su frecuencia cardiaca----------" << endl;
    cout <<" Su frecuencia cardiaca maxima es de: " << Persona1.Obtener_FrecuenciaCardiacaMaxima() << " LPM" << endl;
    cout <<" Su frecuencia cardiaca esperada: " << Persona1.Obtener_FrecuenciaCardiacaMinimaEsperada() << " - " << Persona1.Obtener_FrecuenciaCardiacaMaximaEsperada() <<" LPM" << endl;

}
