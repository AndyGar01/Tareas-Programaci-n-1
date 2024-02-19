#include <iostream>
#include <string>

using namespace std;

//FUNCION ENCRIPTAR
int enc(int Num) {


    //DECLARANDO VARIABLES
    int digito1;
    int digito2;
    int digito3;
    int digito4;


    digito1 = (Num / 1000 + 7) % 10;
    digito2 = ((Num / 100) % 10 + 7) % 10;
    digito3 = ((Num / 10) % 10 + 7) % 10;
    digito4 = (Num % 10 + 7) % 10;


    return digito3 * 1000 + digito4 * 100 + digito1 * 10 + digito2;
}

//FUNCION DESENCRIPTAR
int Des_Enc(int Encriptado) {


    //DECLARANDO VARIABLES A USAR
    int digito1;
    int digito2;
    int digito3;
    int digito4;


    digito1 = (Encriptado / 1000 - 7 + 10) % 10;
    digito2 = ((Encriptado / 100) % 10 - 7 + 10) % 10;
    digito3 = ((Encriptado / 10) % 10 - 7 + 10) % 10;
    digito4 = (Encriptado % 10 - 7 + 10) % 10;


    return digito3 * 1000 + digito4 * 100 + digito1 * 10 + digito2;
}


int main() {


    //DECLARACION VARIABLES
    string nombre;
    int Original;
    int NumEnc;
    int NumDesEnc;

    //PEDIR NOMBRE
    cout << "Ingrese su nombre: ";
    cin >> nombre;


    //BIENVENIDA AL USUARIO
    cout << "Bienvenido, " << nombre << "a continuacion se le pedira ingresar 4 digitos";


    //PEDIR NUMERO
    cout << "Ingrese un numero entero de cuatro digitos: ";
    cin >> Original;


    //ENCRIPTANDO
    NumEnc = enc(Original);
    cout << "El numero encriptado es: " << NumEnc << endl;


    // Desencriptar el n�mero encriptado con la funcion desencriptar
    NumDesEnc = Des_Enc(NumEnc);
    cout << "El numero desencriptado (numero original) es: " << NumDesEnc << endl;

    return 0;
}
