#include <iostream>
using namespace std;


//COMENZAMOS CREANDO LA CLASE CUENTA
class Cuenta
{
public:

    //EL INICIO DEL CONSTRUCTOR DONDE SE OBTENDRA EL SALDO INICIAL
    Cuenta(double SaldoIni)
    {

    //VALIDAMOS SI EL SALDO ES MAYOR O IGUAL QUE 0,SI ES MENOR IMPRIMIRA "ERROR, EL SALDO INCIAL ES INVALIDO"
    if (SaldoIni >= 0)
    {
        Saldo = SaldoIni;
    }

    else
    {
        cout << " ERROR!, EL SALDO INCIAL ES INVALIDO" << endl;
    }
    }
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

    //FUNCIONES A UTILIZAR

    //FUNCION PARA ABONAR AL SALDO
    void abonar_saldo(double monto)
    {
    //VALIDAR QUE EL MONTO SEA MAYOR A 0
    if(monto > 0)
    {
        Saldo += monto;
        cout << " Se abono el monto: " << monto << " al saldo actual que es de: " << Saldo << endl;
    }

    else
    {
        cout << " ERROR!, EL MONTO DEBE DE SER MAYOR A 0" << endl;
    }
    }
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

    //FUNCION PARA CARGAR AL SALDO (DONDE SE RETIRA EL MONTO)
    void cargar_saldo (double monto)
    {

    //VALIDAR QUE EL MONTO NO SE EXCEDA DEL SALDO INICIAL, SI EXCEDE IMPRIMIRA EL MENSAJE "EL MONTO A CARGAR EXCEDE AL SALDO DE LA CUENTA"
    if(monto <= Saldo)
    {
        Saldo -= monto;
        cout << " Retirando monto de: "  << monto << " del saldo actual que es de: " << Saldo << endl;
    }

    else
    {
        cout << " EL MONTO A CARGAR EXCEDE AL SALDO DE LA CUENTA" << endl;
    }
}
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

    //FUNCION PARA OBTENER EL SALDO ACTUAL
    void Obteniendo_Saldo()
    {
        cout << " El saldo actual es de " << " $" << Saldo << endl;
    }
private:

    //SE ALMACENA EL SALDO
    double Saldo;
    };


//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

int main()
{
    //DEFINIMOS VARIABLES
    double SaldoIniC1,Abonar_SaldoC1,Cargar_SaldoC1,SaldoIniC2,Abonar_SaldoC2,Cargar_SaldoC2;

//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

    //PEDIR LOS SALDOS INICIALES DE LAS DOS CUENTAS

    cout << " Ingresar el saldo inicial de la cuenta 1: ";
    cin >> SaldoIniC1;

    cout << " Ingresar el saldo inicial de la cuenta 2: ";
    cin >> SaldoIniC2;

//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

    //ASOCIAMOS LA CUENTA OBJETO CON LOS DATOS INGRESADOS POR EL USUARIO
    Cuenta cuenta1(SaldoIniC1);
    Cuenta cuenta2(SaldoIniC2);

//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    //DATOS CUENTA1

    //PEDIR DATOS DE ABONO A LA CUENTA 1
    cout << " Ingresar el monto que desea abonar a la cuenta 1: ";
    cin >> Abonar_SaldoC1;

    cuenta1.abonar_saldo(Abonar_SaldoC1);

    //PEDIR DATOS PARA CARGAR A LA CUENTA 1
    cout << " Ingresar el monto a cargar a la cuenta 1: ";
    cin >> Cargar_SaldoC1;

    cuenta1.cargar_saldo(Cargar_SaldoC1);

//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    //DATOS CUENTA2

    //PEDIR DATOS DE ABONO A LA CUENTA 2
    cout << "Ingresar el monto que desea abonar a la cuenta 2: ";
    cin >> Abonar_SaldoC2;

    cuenta2.abonar_saldo(Abonar_SaldoC2);

    //PEDIR DATOS PARA CARGAR A LA CUENTA 2
    cout << "Ingresar el monto a cargar a la cuenta 2: ";
    cin >> Cargar_SaldoC2;

    cuenta2.cargar_saldo(Cargar_SaldoC2);

//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

  //IMPRIMIENDO DATOS
  cout << " El saldo de la cuenta 1 con un total de:"; cuenta1.Obteniendo_Saldo();
  cout << " El saldo de la cuenta 2 con un total de:"; cuenta2.Obteniendo_Saldo();
}
