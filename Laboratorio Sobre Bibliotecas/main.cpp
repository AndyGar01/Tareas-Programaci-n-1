                                                        //BIBLIOTECAS
#include <iostream>
#include <iomanip>
#include "PrimerSemestre.h"
#include "SegundoSemestre.h"
#include "TercerSemestre.h"
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
                                                //DEFINIMOS LAS VARIABLES
#define Alumnos 5
#define Notas 4
#define MAX_NOTA_PRIMER_PARCIAL 20
#define MAX_NOTA_SEGUNDO_PARCIAL 25
#define MAX_NOTA_EXAMEN_FINAL 35


using namespace std;

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

                                                        //FUNCIONES

int BusquedaAleatoria(int minimo, int maximo);

void ImprimirMatriz(PrimerSemestre Matriz_1[], SegundoSemestre Matriz_2[], TercerSemestre Matriz_3[]);

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

int main() {

    PrimerSemestre Matriz_1[Alumnos];
    SegundoSemestre Matriz_2[Alumnos];
    TercerSemestre Matriz_3[Alumnos];

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

    for (int x = 0; x < Alumnos; ++x) {
                                                    //PRIMERA MATRIZ

        //LLENAMOS LA MATRIZ

        Matriz_1[x].nPrimerParcial = BusquedaAleatoria(1, MAX_NOTA_PRIMER_PARCIAL);
        Matriz_1[x].nSegundoParcial = BusquedaAleatoria(1, MAX_NOTA_SEGUNDO_PARCIAL);
        Matriz_1[x].nExamenFinal = BusquedaAleatoria(1, MAX_NOTA_EXAMEN_FINAL);

        //OBTENEMOS LOS TOTALES DE LA MATRIZ 2

        Matriz_1[x].Total = Matriz_1[x].nPrimerParcial + Matriz_1[x].nSegundoParcial + Matriz_1[x].nExamenFinal;

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

                                                    //SEGUNDA MATRIZ

        //LLENAMOS LA MATRIZ 2

        Matriz_2[x].nPrimerParcial = BusquedaAleatoria(1, MAX_NOTA_PRIMER_PARCIAL);
        Matriz_2[x].nSegundoParcial = BusquedaAleatoria(1, MAX_NOTA_SEGUNDO_PARCIAL);
        Matriz_2[x].nExamenFinal = BusquedaAleatoria(1, MAX_NOTA_EXAMEN_FINAL);

        //OBTENEMOS LOS TOTALES DE LA MATRIZ 2

        Matriz_2[x].Total = Matriz_2[x].nPrimerParcial + Matriz_2[x].nSegundoParcial + Matriz_2[x].nExamenFinal;

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

                                                    //SEGUNDA MATRIZ
        //LLENAMOS LA MATRIZ  3

        Matriz_3[x].nPrimerParcial = BusquedaAleatoria(1, MAX_NOTA_PRIMER_PARCIAL);
        Matriz_3[x].nSegundoParcial = BusquedaAleatoria(1, MAX_NOTA_SEGUNDO_PARCIAL);
        Matriz_3[x].nExamenFinal = BusquedaAleatoria(1, MAX_NOTA_EXAMEN_FINAL);

        //OBTENEMOS LOS TOTALES DE LA MATRIZ 3

        Matriz_3[x].Total = Matriz_3[x].nPrimerParcial + Matriz_3[x].nSegundoParcial + Matriz_3[x].nExamenFinal;
    }
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



    ImprimirMatriz(Matriz_1, Matriz_2, Matriz_3);


    return 0;
}
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

                                                //LLAMANDO FUNCION IMPRIMIR MATRIZ

void ImprimirMatriz(PrimerSemestre Matriz_1[], SegundoSemestre Matriz_2[], TercerSemestre Matriz_3[]) {

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
                                                                //1
    for (int x = 0; x < Alumnos; x++)
     {


     cout<< " Alumno No. " << x+1 << " Primer Semestre" << endl;

    cout << " Ingrese su nombre: ";
    cin >> Matriz_1[x].nombre;
    cout << endl;

     }
                                                //IMPRIMIENDO ENCABEZADO 1 SEMESTRE

    cout << "            Matriz Primer Semestre" << endl;
    cout << endl;
    cout<<"---------------------------------------------"<<endl;
    cout<< setw(9)<<"Nombre |"<<setw(9)<<"N.P.1 |"<<setw(9)<<"N.P.2 |"<< setw(9) << "N.E.F |" << setw(9) << "Total |" << endl;
    cout<<"---------------------------------------------"<<endl;


                                                        //IMPRIMIENDO DATOS
    for (int x = 0; x < Alumnos; ++x) {

    cout <<setw(5) << Matriz_1[x].nombre << setw(4) << "|" << setw(5) << Matriz_1[x].nPrimerParcial << setw(4) << "|" <<setw(5) << Matriz_1[x].nSegundoParcial << setw(4) << "|" << setw(5) << Matriz_1[x].nExamenFinal << setw(4) << "|" << setw(5) << Matriz_1[x].Total << setw(4) << "|" <<endl;
    }

    cout<<"---------------------------------------------"<<endl;

    cout << endl;
cout << endl;


//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
                                                                //2
for (int x = 0; x < Alumnos; x++)
     {

    cout<< " Alumno No. " << x+1 << " Segundo Semestre" << endl;

    cout << " Ingrese su nombre: ";
    cin >> Matriz_2[x].nombre;
    cout << endl;

     }
                                                //IMPRIMIENDO ENCABEZADO 2 SEMESTRE

    cout << "            Matriz Segundo Semestre" << endl;
    cout << endl;
    cout<<"---------------------------------------------"<<endl;
    cout<< setw(9)<<"Nombre |"<<setw(9)<<"N.P.1 |"<<setw(9)<<"N.P.2 |"<< setw(9) << "N.E.F |" << setw(9) << "Total |" << endl;
    cout<<"---------------------------------------------"<<endl;


                                                        //IMPRIMIENDO DATOS
    for (int x = 0; x < Alumnos; ++x) {

    cout <<setw(5) << Matriz_2[x].nombre << setw(4) << "|" << setw(5) << Matriz_2[x].nPrimerParcial << setw(4) << "|" <<setw(5) << Matriz_2[x].nSegundoParcial << setw(4) << "|" << setw(5) << Matriz_2[x].nExamenFinal << setw(4) << "|" << setw(5) << Matriz_2[x].Total << setw(4) << "|" <<endl;

    }
    cout<<"---------------------------------------------"<<endl;
cout << endl;
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
                                                                //3
    for (int x = 0; x < Alumnos; x++)
     {


     cout<< " Alumno No. " << x+1 << " Tercer Semestre" << endl;

    cout << " Ingrese su nombre: ";
    cin >> Matriz_3[x].nombre;
    cout << endl;

     }
                                                //IMPRIMIENDO ENCABEZADO 1 SEMESTRE

    cout << "            Matriz Tercer Semestre" << endl;
    cout << endl;
    cout<<"---------------------------------------------"<<endl;
    cout<< setw(9)<<"Nombre |"<<setw(9)<<"N.P.1 |"<<setw(9)<<"N.P.2 |"<< setw(9) << "N.E.F |" << setw(9) << "Total |" << endl;
    cout<<"---------------------------------------------"<<endl;


                                                        //IMPRIMIENDO DATOS
    for (int x = 0; x < Alumnos; ++x) {

    cout <<setw(5) << Matriz_3[x].nombre << setw(4) << "|" << setw(5) << Matriz_3[x].nPrimerParcial << setw(4) << "|" <<setw(5) << Matriz_3[x].nSegundoParcial << setw(4) << "|" << setw(5) << Matriz_3[x].nExamenFinal << setw(4) << "|" << setw(5) << Matriz_3[x].Total << setw(4) << "|" <<endl;
    }

    cout<<"---------------------------------------------"<<endl;
cout << endl;

}
