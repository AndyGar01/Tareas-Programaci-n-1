#include <iostream>


using namespace std;

int main()
{
    //DECLARANDO VARIABLE
    int N = 1;

    //BIENVENIDA AL USUSARIO
    cout << "Bienvenido usuario a continuacion se le mostrara una tabla de valores"


    //IMPRIMIR EL ENCABEZADO DE LA TABLA DE VALORES
    cout << "N\t10*N\t100*N\t1000*N" << endl;


    //INICIO DEL CICLO WHILE
    while (N <= 5)
    {
        cout << N << "\t" << 10 * N << "\t" << 100 * N << "\t" << 1000 * N << endl;
        ++N;
    }
}
