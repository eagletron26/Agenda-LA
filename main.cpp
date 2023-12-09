/*

Proyecto para la clase de lógica y algoritmos

Este programa busca ser una agenda de clase para la materia logica y algoritmos, la cual ayuda al estudiante
a llevar a cabo su proceso de estudio en dicha materia y a su vez le proporciona herramientas para
llevar cuentas de las materias de su carrera (Ingenieria de Telecomunicaciones).

*/

#include <iostream>
#include "string.h"
#include "string"
#include <Windows.h>

using namespace std;
// definicion de funciones
float notas_semestre();
int menu_notas(int y);
void cuantosacar(), conceptos(int z);

// definicion de variables 
string nombre;
int opcion, opcion2, semestre, m, creditos, numcreditos = 0, cortes;
float temp_nota, asignaturas[50], promgeneral, sumanotas;
long int id;


int main()

{
    system("color f4");

    cout << "   ******************************************************************************************" << endl;
    cout << "   *\t\t\t\t\t\t\t\t\t\t\t   *" << endl;
    cout << "   *\t\t                          AGENDA DE CLASES L.A.                            *" << endl;
    cout << "   *\t\t\t\t\t\t\t\t\t\t\t   *";
    cout << "\n   * \t\t                           LOGICA Y ALGORITMOS                            * " << endl;
    cout << "   *\t\t\t\t\t\t\t\t\t\t\t   *" << endl;
    cout << "   ******************************************************************************************\n" << endl;

    cout << "\n\n\tBIENVENIDO A TU AGENDA L.A.\n\n\t - Ingrese su nombre: ";
    getline(cin, nombre);

    cout << "\t - Ingrese su codigo: ";
    cin >> id;

    do {

        system("CLS");
        cout << "   ******************************************************************************************" << endl;
        cout << "   *\t\t\t\t\t\t\t\t\t\t\t    *" << endl;
        cout << "   *\t\t                        AGENDA DE CLASES L.A.                               *" << endl;
        cout << "   *\t\t\t\t\t\t\t\t\t\t\t    *" << endl;
        cout << "   ******************************************************************************************\n" << endl;
        cout << "\n\t    Nombre: " << nombre << "\t\t      Codigo: " << id;
        cout << "\n\n\n  [1]. CLASES DE LOGICA " << endl;
        cout << "  [2]. NOTAS DE LA CARRERA" << endl;
        cout << "  [3]. CUANTO DEBO SACAR EN EL ULTIMO CORTE? " << endl;
        cout << "  [4]. PROMEDIO DE LA CARRERA " << endl;
        //       cout << "  [5]. NOTAS PERSONALES " << endl;
        cout << "  [5]. SALIR " << endl;
        cout << "\n      DIGITE UNA OPCION: ";
        cin >> opcion;

        switch (opcion) {
            // apuntes logica y algoritmos
        case 1:
        {
            do {
                system("CLS");
                cout << "\n\n\n\t\t\t\t :::::: CLASES DE LOGICA :::::: " << endl;
                cout << "\n\n\n  [1]. INTRODUCCION Y CONSIDERACIONES PREVIAS " << endl;
                cout << "  [2]. OPERACIONES Y PORCENTAJES" << endl;
                cout << "  [3]. DESICION " << endl;
                cout << "  [4]. CICLO PARA " << endl;
                cout << "  [5]. CICLO MIENTRAS" << endl;
                cout << "  [6]. SUBPROGRAMAS " << endl;
                cout << "  [7]. MENU ANTERIOR " << endl;
                cout << "\n       DIGITE UNA OPCION: ";
                cin >> opcion2;


                switch (opcion2) {

                    // Intro y consideraciones previas
                case 1:
                {system("CLS");
                conceptos(opcion2);
                system("pause");
                break; }

                // Operaciones y Porcentajes 
                case 2: {
                    system("CLS");
                    conceptos(opcion2);
                    break; }

                case 3:
                    system("CLS");
                    conceptos(opcion2);
                    break;

                case 4:
                    system("CLS");
                    conceptos(opcion2);
                    break;

                case 5:
                    system("CLS");
                    conceptos(opcion2);
                    break;

                case 6:
                    system("CLS");
                    conceptos(opcion2);

                    break;

                case 7:
                    system("CLS");
                    break;


                default: {
                    system("CLS");
                    cout << "\n\n  ---------------------------------------------";
                    cout << "\n |            OPCION NO VALIDA                 |";
                    cout << "\n  ---------------------------------------------\n\n\n\n\n   ";
                    system("pause");

                }
                }

            } while (opcion2 != 7);



            break; }

        // Notas de la carrera
        case 2: {
            system("CLS");
            cout << "\n\n\tNOTAS DE LA CARRERA\n" << endl;
            cout << "\n\n\tSELECCIONE UNA OPCION: ";
            cout << "\n\n\n  [*]. SEMESTRE 1" << endl;
            cout << "  [*]. SEMESTRE 2" << endl;
            cout << "  [*]. SEMESTRE 3" << endl;
            cout << "  [*]. SEMESTRE 4" << endl;
            cout << "  [*]. SEMESTRE 5" << endl;
            cout << "  [*]. SEMESTRE 6" << endl;
            cout << "\n      DIGITE UNA OPCION: ";
            cin >> semestre;

            if (semestre == 1)
            {
                m = menu_notas(semestre);

                if (m == 1 || m == 2) {
                    if (asignaturas[m] == 0) { numcreditos = numcreditos + 4; }
                    temp_nota = notas_semestre();
                    system("cls");
                    cout << "\n\n\n\n    NOTA FINAL: " << temp_nota;
                    asignaturas[m] = temp_nota * 4;
                }

                else if (m == 3 || m == 4 || m == 5) {
                    if (asignaturas[m] == 0) { numcreditos = numcreditos + 2; }
                    temp_nota = notas_semestre();
                    system("cls");

                    cout << "\n\n\n   NOTA FINAL: " << temp_nota;
                    asignaturas[m] = temp_nota * 2;
                }

                else if (m == 6) {
                    if (asignaturas[m] == 0) { numcreditos = numcreditos + 1; }
                    temp_nota = notas_semestre();
                    system("cls");
                    cout << "\n\n\n   NOTA FINAL: " << temp_nota;
                    asignaturas[m] = temp_nota * 1;
                }

            }
            else if (semestre == 2)
            {
                m = menu_notas(semestre);

                if (m == 1 || m == 2 || m == 3) {
                    if (asignaturas[m + 6] == 0) { numcreditos = numcreditos + 4; }
                    temp_nota = notas_semestre();
                    system("cls");
                    cout << "\n\n\n   NOTA FINAL: " << temp_nota;
                    asignaturas[m + 6] = temp_nota * 4;
                }

                else if (m == 4 || m == 5) {
                    if (asignaturas[m + 6] == 0) { numcreditos = numcreditos + 2; }
                    temp_nota = notas_semestre();
                    system("cls");
                    cout << "\n\n\n   NOTA FINAL: " << temp_nota;
                    asignaturas[m + 6] = temp_nota * 2;
                }

                else if (m == 6 || m == 7) {
                    if (asignaturas[m + 6] == 0) { numcreditos = numcreditos + 1; }
                    temp_nota = notas_semestre();
                    system("cls");
                    cout << "\n\n\n   NOTA FINAL: " << temp_nota;
                    asignaturas[m + 6] = temp_nota * 1;
                }

            }

            else if (semestre == 3)
            {
                m = menu_notas(semestre);

                if (m == 1 || m == 2 || m == 3) {
                    if (asignaturas[m + 13] == 0) { numcreditos = numcreditos + 4; }
                    temp_nota = notas_semestre();
                    system("cls");
                    cout << "\n\n\n   NOTA FINAL: " << temp_nota;
                    asignaturas[m + 13] = temp_nota * 4;
                }

                else if (m == 4 || m == 5 || m == 6) {
                    if (asignaturas[m + 13] == 0) { numcreditos = numcreditos + 2; }
                    temp_nota = notas_semestre();
                    system("cls");
                    cout << "\n\n\n   NOTA FINAL: " << temp_nota;
                    asignaturas[m + 13] = temp_nota * 2;
                }

            }
            else if (semestre == 4)
            {
                m = menu_notas(semestre);

                if (m == 2 || m == 4) {
                    if (asignaturas[m + 19] == 0) { numcreditos = numcreditos + 4; }
                    temp_nota = notas_semestre();
                    system("cls");
                    cout << "\n\n\n   NOTA FINAL: " << temp_nota;
                    asignaturas[m + 19] = temp_nota * 4;
                }

                else if (m == 6 || m == 7) {
                    if (asignaturas[m + 19] == 0) { numcreditos = numcreditos + 2; }
                    temp_nota = notas_semestre();
                    system("cls");
                    cout << "\n\n\n   NOTA FINAL: " << temp_nota;
                    asignaturas[m + 19] = temp_nota * 2;
                }

                else if (m == 1 || m == 3 || m == 5) {
                    if (asignaturas[m + 19] == 0) { numcreditos = numcreditos + 1; }
                    temp_nota = notas_semestre();
                    system("cls");
                    cout << "\n\n\n   NOTA FINAL: " << temp_nota;
                    asignaturas[m + 19] = temp_nota * 1;
                }

            }
            else if (semestre == 5)
            {
                m = menu_notas(semestre);

                if (m == 2 || m == 3) {
                    if (asignaturas[m + 26] == 0) { numcreditos = numcreditos + 4; }
                    temp_nota = notas_semestre();
                    system("cls");
                    cout << "\n\n\n   NOTA FINAL: " << temp_nota;
                    asignaturas[m + 26] = temp_nota * 4;
                }

                else if (m == 5 || m == 6 || m == 7) {
                    if (asignaturas[m + 26] == 0) { numcreditos = numcreditos + 2; }
                    temp_nota = notas_semestre();
                    system("cls");
                    cout << "\n\n\n   NOTA FINAL: " << temp_nota;
                    asignaturas[m + 26] = temp_nota * 2;
                }

                else if (m == 1 || m == 4) {
                    if (asignaturas[m + 26] == 0) { numcreditos = numcreditos + 1; }
                    temp_nota = notas_semestre();
                    system("cls");
                    cout << "\n\n\n   NOTA FINAL: " << temp_nota;
                    asignaturas[m + 26] = temp_nota * 1;
                }

            }
            else if (semestre == 6)
            {
                m = menu_notas(semestre);

                if (m == 1 || m == 3) {
                    if (asignaturas[m + 33] == 0) { numcreditos = numcreditos + 4; }
                    temp_nota = notas_semestre();
                    system("cls");
                    cout << "\n\n\n   NOTA FINAL: " << temp_nota;
                    asignaturas[m + 33] = temp_nota * 4;
                }

                else if (m == 2 || m == 5 || m == 6 || m == 7) {
                    if (asignaturas[m + 33] == 0) { numcreditos = numcreditos + 2; }
                    temp_nota = notas_semestre();
                    system("cls");
                    cout << "\n\n\n   NOTA FINAL: " << temp_nota;
                    asignaturas[m + 33] = temp_nota * 2;
                }

                else if (m == 4) {
                    if (asignaturas[m + 33] == 0) { numcreditos = numcreditos + 1; }
                    temp_nota = notas_semestre();
                    system("cls");
                    cout << "\n\n\n   NOTA FINAL: " << temp_nota;
                    asignaturas[m + 33] = temp_nota * 1;
                }

            }

            cout << "\n\n\n\n\n\n\n\n    ";
            system("pause");
            break; }

              // Cuanto debo sacar
        case 3:
        { system("CLS");
        cout << "\n**********************************  CUANTO DEBO SACAR  **********************************" << endl;

        cuantosacar();


        system("pause");
        break; }

        // Promedio de la carrera
        case 4:
        { system("CLS");
        cout << "\n**********************************  PROMEDIO DE LA CARRERA  **********************************" << endl;
        sumanotas = 0;
        for (int i = 1; i < 49; i = i + 1)
        {
            sumanotas = sumanotas + asignaturas[i];
        }

        promgeneral = (sumanotas / numcreditos);
        cout << "\n\n\n    -  Su promedio actual es: " << promgeneral << endl;
        cout << "\n    -  Numero de creditos vistos actualmente: " << numcreditos << "\n\n\n\n\n    ";
        system("pause");
        break; }

        /*
                case 5:
                {
                    system("CLS");
                    cout << "Opcion 5" << endl;
                    system("pause");
                    break; } */


        case 5:
            system("CLS");
            cout << "\n\n\n\n   Gracias por usar este programa " << nombre << ". Hasta Luego.\n\n" << endl;
            cout << "________________________________________________________________________________________________________";

            break;

        default: {
            system("CLS");
            cout << "\n\n  ---------------------------------------------";
            cout << "\n |            OPCION NO VALIDA                 |";
            cout << "\n  ---------------------------------------------\n\n\n\n\n   ";
            system("pause");

        }

        }

    } while (opcion != 5);


    cout << "\n\n\n\n\n\n\n\n\n    Agenda L.A - Version 1.0 \n    Autor: Daniel Eduardo Calderon Martinez\n\n\n\n\n\n\n\n   ";
    system("pause");

}

float notas_semestre()
{
    float a, b, c, n1, n2, n3, nf;

    system("CLS");
    cout << "\n\n  Ingrese las notas del PRIMER corte \n";
    cout << "\n    Nota del parcial: ";
    cin >> a;
    cout << "\n    Nota de quices y talleres: ";
    cin >> b;
    cout << "\n    Nota de autoevaluacion: ";
    cin >> c;
    n1 = (a * 60 / 100) + (b * 30 / 100) + (c * 10 / 100);

    system("CLS");
    cout << "\n\n  Ingrese las notas del SEGUNDO corte \n";
    cout << "\n    Nota del parcial: ";
    cin >> a;
    cout << "\n    Nota de quices y talleres: ";
    cin >> b;
    cout << "\n    Nota de autoevaluacion: ";
    cin >> c;
    n2 = (a * 60 / 100) + (b * 30 / 100) + (c * 10 / 100);

    system("CLS");
    cout << "\n\n  Ingrese las notas del TERCER corte \n";
    cout << "\n    Nota del parcial: ";
    cin >> a;
    cout << "\n    Nota de quices y talleres: ";
    cin >> b;
    cout << "\n    Nota de autoevaluacion: ";
    cin >> c;
    n3 = (a * 60 / 100) + (b * 30 / 100) + (c * 10 / 100);

    nf = (n1 * 33 / 100) + (n2 * 33 / 100) + (n3 * 34 / 100);
    return nf;
}

int menu_notas(int y) {

    int f = 0;
    system("cls");
    if (y == 1) {
        cout << "\n\n\tMaterias Semestre 1 \n\n";
        cout << "\n\t1 - Alegebra Superior";
        cout << "\n\t2 - Calculo Diferencial";
        cout << "\n\t3 - Medios De Transmision";
        cout << "\n\t4 - Logica y Algoritmos";
        cout << "\n\t5 - Procesos de Lectura y Escritura";
        cout << "\n\t6 - Cultura Fisica";
        cout << "\n\n\t DIGITE UNA OPCION: ";
        cin >> f;
    }
    else     if (y == 2) {
        cout << "\n\n\tMaterias Semestre 2 \n\n";
        cout << "\n\t1 - Calculo Integral";
        cout << "\n\t2 - Mecanica";
        cout << "\n\t3 - Analisis de Circuitos Electricos I";
        cout << "\n\t4 - Telematica 1";
        cout << "\n\t5 - Optativa 1";
        cout << "\n\t6 - Laboratorio de Medidas y Ciruitos Electricos";
        cout << "\n\t7 - Programacion";
        cout << "\n\n\t DIGITE UNA OPCION: ";
        cin >> f;
    }
    else     if (y == 3) {
        cout << "\n\n\tMaterias Semestre 3 \n\n";
        cout << "\n\t1 - Electromagnetismo";
        cout << "\n\t2 - Analisis de Circuitos Electricos II ";
        cout << "\n\t3 - Electronica I";
        cout << "\n\t4 - Telematica II";
        cout << "\n\t5 - Epistemologia";
        cout << "\n\t6 - Optativa II";
        cout << "\n\n\t DIGITE UNA OPCION: ";
        cin >> f;
    }
    else     if (y == 4) {
        cout << "\n\n\tMaterias Semestre 4 \n\n";
        cout << "\n\t1 - Laboratorio De Fisica";
        cout << "\n\t2 - Comunicaciones Analogas";
        cout << "\n\t3 - Laboratorio de Comunicaciones Analogas";
        cout << "\n\t4 - Electronica II";
        cout << "\n\t5 - Laboratorio de Electronica";
        cout << "\n\t6 - Telematica III";
        cout << "\n\t7 - Ingles I";
        cout << "\n\n\t DIGITE UNA OPCION: ";
        cin >> f;
    }
    else     if (y == 5) {
        cout << "\n\n\tMaterias Semestre 5 \n\n";
        cout << "\n\t1 - Programacion WEB";
        cout << "\n\t2 - Comunicaciones Digitales I";
        cout << "\n\t3 - Electronica Digital";
        cout << "\n\t4 - Laboratorio De Electronica Digital";
        cout << "\n\t5 - Electiva de Profundizacion I";
        cout << "\n\t6 - Metodologia de Investigacion I";
        cout << "\n\t7 - Ingles II";
        cout << "\n\n\t DIGITE UNA OPCION: ";
        cin >> f;
    }
    else     if (y == 6) {
        cout << "\n\n\tMaterias Semestre 6 \n\n";
        cout << "\n\t1 - Calculo Multivariable";
        cout << "\n\t2 - Introduccion a la Ingenieria";
        cout << "\n\t3 - Comunicaciones Digitales II";
        cout << "\n\t4 - Laboratorio De Comunicaciones Digitales";
        cout << "\n\t5 - Conmutacion Digital";
        cout << "\n\t6 - Electiva de Profundizacion II";
        cout << "\n\t7 - Etica";
        cout << "\n\n\t DIGITE UNA OPCION: ";
        cin >> f;
    }


    return f;
}

void cuantosacar() {

    float a, b, c, n1, n2, nf, nr;

    cout << "\n\n  Ingrese las notas del PRIMER corte \n";
    cout << "\n   - Nota del parcial: ";
    cin >> a;
    cout << "\n   - Nota de quices y talleres: ";
    cin >> b;
    cout << "\n   - Nota de autoevaluacion: ";
    cin >> c;
    n1 = (a * 60 / 100) + (b * 30 / 100) + (c * 10 / 100);
    system("cls");
    cout << "\n**********************************  CUANTO DEBO SACAR  **********************************" << endl;
    cout << "\n\n  Ingrese las notas del SEGUNDO corte \n";
    cout << "\n   - Nota del parcial: ";
    cin >> a;
    cout << "\n   - Nota de quices y talleres: ";
    cin >> b;
    cout << "\n   - Nota de autoevaluacion: ";
    cin >> c;
    n2 = (a * 60 / 100) + (b * 30 / 100) + (c * 10 / 100);

    nf = (n1 * 33 / 100) + (n2 * 33 / 100);
    system("cls");
    cout << "\n**********************************  CUANTO DEBO SACAR  **********************************" << endl;

    if (nf >= 3) {
        cout << "\n\n  Usted ya aprobo la materia \n\n\n\n\n  ";
    }
    else {
        nr = (3 - nf);
        a = ((nr) * 100 / 34); b = (a - 1.7); c = b * 100 / 60;
        cout << "\n\n   - Debe sacar " << nr << " en el ultimo corte.";
        cout << "\n\n   - Puede obtenerlo sacando:\n    * Autoevaluacion: 5.0\n    * Talleres: 4.0\n    * Parcial: "<< c;
        cout << "\n\n   - Tambien puede obtenerlo sacando " << a << " en todas sus notas (parcial, talleres y autoevaluacion)\n\n  ";

        
    }

}

void conceptos(int z) {
    int ot;

    switch (z)
    {
    case 1: {

        cout << "\n********************************  INTRODUCCION Y CONSIDERACIONES PREVIAS  ********************************" << endl;
        cout << "\n\n  CONCEPTO DE ALGORITMO\n" << endl;
        cout << "  Es una serie ordenada de instrucciones, pasos o procesos que llevan a la solucion de un determinado problema." << endl;
        cout << "  Sus caracteristicas es que son finitos, eficientes, legibles, modificables y modulares." << endl;
        cout << "\n  PASOS PARA LA SOLUCION DE ALGORITMOS" << endl;
        cout << "  1) Analizar los datos de entrada" << endl;
        cout << "  2) Procesos" << endl;
        cout << "  3) Datos de salida" << endl;
        cout << "  4) Variables" << endl;
        cout << "  5) Ejecucion\n\n\n\n\n\n  ";
        system("pause");
        system("cls");
        cout << "\n********************************  INTRODUCCION Y CONSIDERACIONES PREVIAS  ********************************" << endl;
        cout << "\n\n  DFD\n" << endl;
        cout << "  Es un programa que permite la representacion grafica de diagramas de flujo de datos a traves de un sistema " << endl;
        cout << "  de informacion. En DFD se utilizan graficos para expresar los algoritmos que permiten la resolucion " << endl;
        cout << "  de los problemas.\n  (Puede descargarlo a traves de este link: https://dfd.es.download.it/)" << endl;
        cout << "\n\n  OPERADORES\n" << endl;
        cout << "  Hay tres tipos de operadores que se usan en DFD" << endl;
        cout << "  \n  1) Operadores Aritmeticos: + (suma), - (resta), * (producto), / (division), mod (residuo)" << endl;
        cout << "  \n  2) Operadores de Comparacion: > (mayor que), < (menor que), >= (mayor o igual que), <= (menor o igual que)" << endl;
        cout << "                                != (diferente que)" << endl;
        cout << "  \n  3) Operadores Logicos: and (si), or (0), not (negacion)\n\n\n\n  ";
        system("pause");
        system("cls");
        cout << "\n********************************  INTRODUCCION Y CONSIDERACIONES PREVIAS  ********************************" << endl;
        cout << "\n\n  VARIABLES\n" << endl;
        cout << "  Son elementos en los cuales se puede almacenar informacion, estos pueden ser variables o constantes." << endl;
        cout << "  Consideraciones: Las variables no inician con numeros ni caracteres, no deben llevar espacios." << endl;
        cout << "\n\n  SIMBOLOGIA PRINCIPAL\n\n";
        cout << "  1) SALIDA (https://postimg.cc/grJzN01R): Permite mostrar mensajes al usuario. Para que se muestre " << endl;
        cout << "     correctamente debe ir en medio de comillas simples ('Aqui va el mensaje'). Si se desea imprimir " << endl;
        cout << "     una variable va por fuera de las comillas. Los mensajes y variables se separan con comas '(,)'." << endl;
        cout << "\n  2) ENTRADA (https://postimg.cc/gLnGJM34): Esta herramienta permite captar informacion dada";
        cout << "\n     por el usuario y almacenarla" << endl;

        cout << "\n  3) ASIGNACION (https://postimg.cc/2bHzCpLV): Esta herramienta se usa para crear variables en la aplicacion";
        cout << "\n     tambien para asignar valores de resultados a las variables de operaciones realizadas previamente. Se pueden" << endl;
        cout << "     realizar tres asignaciones dentro de un mismo recuadro \n\n";
        cout << "___________________________________________________________________________________________________________________";
        cout << "\n\n  EJERCICIO: Realice un programa que imprima el mensaje 'Hola mundo'. (Pista: Utilice una salida)\n  ";
        break;
    }
    case 2: {

        cout << "\n**********************************  OPERACIONES Y PORCENTAJES  **********************************" << endl;
        cout << "\n\n  OPERACIONES\n" << endl;
        cout << "\n  Para realizar programas que utilicen operaciones es necesario usar los operadores aritmeticos. Dichas " << endl;
        cout << "  operaciones se pueden realizar dentro de una ASIGNACION poniendo en el primer parametro la variable en donde" << endl;
        cout << "  se almacena la operacion y en el segundo la operacion que se va a realizar." << endl;
        cout << "\n  Ejemplo: ASIGNACION: [Suma --- a + b]     (Las variables a y b se pueden pedir al usuario con una ENTRADA)\n\n\n\n\n  ";

        system("pause");
        system("cls");

        cout << "\n**********************************  OPERACIONES Y PORCENTAJES  **********************************" << endl;
        cout << "\n\n   EJERCICIOS: \n\n  1) Ejercicio 1 (Operaciones Basicas)\n  2) Ejercicio 2 (Area De Una Circunferencia)";
        cout << "\n  3) Ejercicio 3 (Descuentos a un Trabajador)\n  4) Regresar al menu anterior";
        cout << "\n\n       DIGITE UNA OPCION: ";
        cin >> ot;
        switch (ot)
        {

        case 1: {
            system("cls");
            cout << "\n\n  EJERCICIO 1";
            cout << "\n\n  Debe hacer un diagrama de flujo que pida al usuario dos numeros (ENTRADA) y le informe la suma,";
            cout << "\n   resta, producto y division de los dos numeros.";
            cout << "\n\n  COMPROBACION: Si el programa es correcto al ingresar el '6' y el '8' debe dar los siguientes resultados: ";
            cout << "\n  - Suma: 14 \n  - Resta: -2\n  - Producto: 48 \n  - Division: 0.75\n\n\n\n\n  ";
            system("pause");
            break;
        }

        case 2: {
            system("cls");
            cout << "\n\n  EJERCICIO 2";
            cout << "\n\n  Debe hacer un diagrama de flujo que calcule el area de una circunferencia. (Area = Pi * r * r) ";
            cout << "\n\n  COMPROBACION: Si el programa es correcto al ingresar el radio 4 debe dar el siguiente resultado: ";
            cout << "\n  - Area: 50,24\n\n\n\n\n  ";
            system("pause");
            break;
        }

        case 3: {
            system("cls");
            cout << "\n\n  EJERCICIO 3";
            cout << "\n\n  Debe hacer un programa que calcula y muestra a un trabajador los siguientes descuentos sobre su sueldo minimo: ";
            cout << "\n    1% por vivienda, 4% por seguridad social, 0.5% por retiro forzoso y 5% por caja de compensacion.";
            cout << "\n    Al final muestra el sueldo total.";
            cout << "\n\n  COMPROBACION: Si el programa es correcto al ingresar el sueldo de 1200000 dara los siguientes datos:";
            cout << "\n   - Descuento de vivienda: 12000\n   - Descuento de seguridad social: 48000\n   - Descuento de retiro forzoso: 6000";
            cout << "\n   - Descuento de caja de compensacion : 60000\n   - SUELDO TOTAL : 1074000\n\n\n\n  ";
            system("pause");
            break;
        }
        case 4: { break; }

        default: {
            system("CLS");
            cout << "\n\n  ---------------------------------------------";
            cout << "\n |            OPCION NO VALIDA                 |";
            cout << "\n  ---------------------------------------------\n\n\n\n\n   ";
            system("pause");

        }

        }


        break;

    }
    case 3: {

        cout << "\n********************************  DESICION  ********************************" << endl;
        cout << "\n\n  DESICION (https://postimg.cc/67Yc0zGd)\n";
        cout << "\n\n   Una decision es una estructura de control, que sirve para tomar decisiones simples";
        cout << "\n   Al interior del rombo se pondra una condicion, si la condicion se evalua como verdadera";
        cout << "\n   se ejecutara el codigo que se encuentre en la linea que diga 'SI' a uno de los lados del rombo,";
        cout << "\n   en caso contrario se ejecutara lo de la linea que dice 'NO'. El lado al que se ubica cada respuesta";
        cout << "\n   se puede cambiar facilmente.\n\n\n\n\n  ";

        system("pause");
        system("cls");

        cout << "\n********************************  DESICION  ********************************" << endl;
        cout << "\n\n   EJERCICIOS: \n\n  1) Ejercicio 1 (Numero Positivo o Negativo)\n  2) Ejercicio 2 (Descuentos De Empresa)";
        cout << "\n  3) Regresar al menu anterior";
        cout << "\n\n       DIGITE UNA OPCION: ";
        cin >> ot;
        switch (ot)
        {

        case 1: {
            system("cls");
            cout << "\n\n  EJERCICIO 1";
            cout << "\n\n\n  Debe hacer un programa que determine si un numero es positivo, negativo o nulo.";
            cout << "\n  PISTA: Puede usar una desicion dentro de otra desicion.\n\n\n\n\n  ";
            system("pause");
            break;
        }

        case 2: {
            system("cls");
            cout << "\n\n  EJERCICIO 2";
            cout << "\n\n  Una empresa realiza los siguientes descuentos debido al valor del producto. Si el producto";
            cout << "\n  es menor de 50.000 tiene un descuento del 2 %, si el valor del producto esta entre 50.000 y 100.000 ";
            cout << "\n  tiene un descuento del 5 %, si el valor del producto es mayor de 100.000 tendra un descuento del 10%.";
            cout << "\n  Determinar segun el valor del producto el descuento y el total a pagar por el producto.";
            cout << "\n\n  COMPROBACION: Si el programa es correcto debe darle los siguientes resultados ";
            cout << "\n  - Al ingresar 40000 debe dar como resultado: 39200";
            cout << "\n  - Al ingresar 70000 debe dar como resultado: 66500";
            cout << "\n  - Al ingresar 120000 debe dar como resultado: 108000\n\n\n  ";
            system("pause");
            break;
        }
        case 3: { break; }

        default: {
            system("CLS");
            cout << "\n\n  ---------------------------------------------";
            cout << "\n |            OPCION NO VALIDA                 |";
            cout << "\n  ---------------------------------------------\n\n\n\n\n   ";
            system("pause");

        }


        }


        break;

    }
    case 4: {

        cout << "\n********************************  CICLO PARA  ********************************" << endl;
        cout << "\n\n  CICLO PARA (https://postimg.cc/XBygnb18)\n" << endl;
        cout << "\n   El ciclo para es un bucle (tareas repetitivas) que se utiliza para repetir una condicion dada.";
        cout << "\n   Un ciclo debe incluir una condicion y el ciclo se ejecutara siempre que la condicion dada se cumpla.";
        cout << "\n   La estructura del ciclo consiste en agregar un inicio, un fin y un incremento de la siguiente";
        cout << "\n   manera. El ciclo presenta 4 recuadros: En el primer recuadro se coloca la variable controladora,";
        cout << "\n   es decir la variable que se va a usar para el ciclo (Ej: X). En el segundo recuadro se pone el valor";
        cout << "\n   inicial que se le dara a la variable. En el tercer recuadro se introduce el valor final que se le dara";
        cout << "\n   a la variable. Y por ultimo se introduce el crecimiento del ciclo, es decir, la cantidad en que va";
        cout << "\n   aumentando el ciclo.\n\n\n\n\n  ";


        system("pause");
        system("cls");
        cout << "\n********************************  CICLO PARA  ********************************" << endl;
        cout << "\n\n  EJERCICIOS: \n\n  1) Ejercicio 1 (Numeros del 1 al 10)\n  1) Ejercicio 2 (N Numeros)";
        cout << "\n  3) Regresar al menu anterior";
        cout << "\n\n       DIGITE UNA OPCION: ";
        cin >> ot;
        switch (ot)
        {

        case 1: {
            system("cls");
            cout << "\n\n  EJERCICIO 1";
            cout << "\n\n  Debe realizar un programa que muestre los numeros del 1 al 10.\n  NOTA: Debe usar un ciclo Para.";
            cout << "\n\n\n\n\n  ";
            system("pause");
            break;
        }

        case 2: {
            system("cls");
            cout << "\n\n  EJERCICIO 2";
            cout << "\n\n  Debe hacer un programa que genere numeros desde 1 hasta N";
            cout << "\n  NOTA: N corresponde a un numero que se le pide al usuario.\n\n\n\n\n  ";
            system("pause");
            break;
        }
        case 3: { break; }

        default: {
            system("CLS");
            cout << "\n\n  ---------------------------------------------";
            cout << "\n |            OPCION NO VALIDA                 |";
            cout << "\n  ---------------------------------------------\n\n\n\n\n   ";
            system("pause");

        }


        }


        break;

    }
    case 5: {

        cout << "\n********************************  CICLO MIENTRAS  ********************************" << endl;
        cout << "\n\n  CICLO MIENTRAS (https://postimg.cc/4705CdPy)\n" << endl;
        cout << "\n   El ciclo mientras, es el otro tipo de bucle (tarea repetitiva) de DFD.Su funcionamiento es similar";
        cout << "\n   al de 'decision', ya que se debe poner una condicion, la cual debe ser cierta para que el programa";
        cout << "\n   ingrese al ciclo. Al insertar un nuevo 'ciclo mientras' a DFD, apareceran dos figuras. En la primera";
        cout << "\n   aparecen las letras MQ (Mientras que), se colocara una condicion logica (ver operadores logicos)";
        cout << "\n   que de considerarse verdadera, ejecutara las instrucciones que se encuentren dentro del ciclo [Fin(MQ)]";
        cout << "\n\n   Nota: Es importante tener en cuenta que las condiciones tienen que ser falsas en algun momento para que";
        cout << "\n   el ciclo se rompa y el programa pueda finalmente continuar y terminar en algun momento.\n\n\n  ";


        system("pause");
        system("cls");
        cout << "\n********************************  CICLO MIENTRAS  ********************************" << endl;

        cout << "\n\n  EJERCICIOS: \n\n  1) Ejercicio 1 (Numeros del 1 al 10)\n  2) Ejercicio 2 (Numero distintos de 100)";
        cout << "\n  3) Regresar al menu anterior";
        cout << "\n\n       DIGITE UNA OPCION: ";
        cin >> ot;
        switch (ot)
        {

        case 1: {
            system("cls");
            cout << "\n\n  EJERCICIO 1";
            cout << "\n\n  Realizar un programa que muestre los numeros del 1 al 10 usando un ciclo mientras";
            cout << "\n  NOTA: Los contandores son variables que se inicializan en 0 (ASIGNACION: [c --- 0]). Mediante";
            cout << "\n  un contador se puede llevar la cuenta de cuantas veces el ciclo ha funcionado y poder avisar al ";
            cout << "\n  en que momento terminar.\n\n\n\n  ";
            system("pause");
            break;
        }

        case 2: {
            system("cls");
            cout << "\n\n  EJERCICIO 2";
            cout << "\n\n  Realizar un programa que me pida numeros consecutivos hasta que el numero digitado sea igual a 100.";
            cout << "\n  NOTA: Para este ejercicio le puede ayudar el uso de una 'desicion'.\n\n\n\n\n  ";
            system("pause");
            break;
        }
        case 3: { break; }

        default: {
            system("CLS");
            cout << "\n\n  ---------------------------------------------";
            cout << "\n |            OPCION NO VALIDA                 |";
            cout << "\n  ---------------------------------------------\n\n\n\n\n   ";
            system("pause");

        }


        }


        break;

    }
    case 6: {

        cout << "\n********************************  SUBPROGRAMAS  ********************************" << endl;
        cout << "\n\n  SUBPROGRAMAS (https://postimg.cc/gXjDBRv1)\n" << endl;
        cout << "\n  Un subprograma es una herramienta que hace alguna operacion en especial pero a su vez no es independiente,";
        cout << "\n  y por ello puede ser llamado en momentos determinados por el programa principal, para que realize una";
        cout << "\n  operacion que necesite el programa en dicho momento (por ejemplo, calcular el area de un cuadrado).";
        cout << "\n  Lo primero es crear el subprograma (NUEVO SUBPROGRAMA). La ventana del subprograma tiene los siguientes campos:";
        cout << "\n  Nombre del subprograma, aqui se coloca el nombre que le queramos poner a nuestro subprograma; parametros, aqui";
        cout << "\n  se pone las variables que va a recibir el subprograma; descripcion, solo sirve para poner un comentario.";
        cout << "\n  Ahora para llamar al subprograma dentro del algoritmo principal se debe dar click en 'LLAMADA' y dentro del mismo";
        cout << "\n  poner el nombre del subprograma que se va a llamar.\n\n\n\n  ";

        system("pause");
        system("cls");

        cout << "\n********************************  SUBPROGRAMAS  ********************************" << endl;
        cout << "\n\n  EJERCICIOS: \n\n  1) Ejercicio 1 (Operaciones Basicas)\n  2) Ejercicio 2 (Calculo de distintas areas)";
        cout << "\n  3) Regresar al menu anterior";
        cout << "\n\n       DIGITE UNA OPCION: ";
        cin >> ot;
        switch (ot)
        {

        case 1: {
            system("cls");
            cout << "\n\n  EJERCICIO 1";
            cout << "\n\n  Realizar un programa que realize las cuatro operaciones basicas (suma, resta, multiplicacion,";
            cout << "\n  division) utilizando subprogramas para las operaciones.";

            cout << "\n\n  COMPROBACION: Si el programa es correcto al ingresa el '6' y el '8' debe dar los siguientes resultados: ";
            cout << "\n  - Suma: 14 \n  - Resta: -2\n  - Producto: 48 \n  - Division: 0.75\n\n\n\n  ";
            system("pause");
            break;
        }

        case 2: {
            system("cls");
            cout << "\n\n  EJERCICIO 2";
            cout << "\n\n  Debe hacer un diagrama de flujo que calcule el area de un triangulo, de un cuadrado y de una";
            cout << "\n  circunferencia utilizando subprogramas para calcular las distintas areas.";
            cout << "\n\n  COMPROBACION: Si el programa es correcto debe arrojar los siguientes resultados: ";
            cout << "\n  - Area del circulo con radio 4: 50,24\n  - Area del triangulo con base 4 y altura 10: 5";
            cout << "\n  - Area del cuadrado con lado 5: 25\n\n\n\n\n  ";
            system("pause");
            break;
        }
        case 3: { break; }

        default: {
            system("CLS");
            cout << "\n\n  ---------------------------------------------";
            cout << "\n |            OPCION NO VALIDA                 |";
            cout << "\n  ---------------------------------------------\n\n\n\n\n   ";
            system("pause");

        }


        }


        break;

    }

    }


}
