#include <iostream>
#include <wchar.h>
#include "respuestas.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    int pregunta, dificultad;
    float respuesta;
    bool fin = false;

    while (true)
    {
        cout << "Seleccione la dificultad" << "\n";
        cout << "0. Salir" << "\n";
        cout << "1. Facil" << "\n";
        cout << "2. Dificil" << "\n";
        cin >> dificultad;

        if (dificultad == 0)
        {
            cout << "Ha salido del juego" << "\n";
            return 0;
        }

        if (dificultad == 1 || dificultad == 2)
        {
            break;
        }
        else
        {
            cout << "Ingrese una opcion valida" << "\n";
        }
    } // ciclo while de opciones

    cout << "===========" << "\n";
    cout << "Bienvenido" << "\n";
    cout << "===========" << "\n";
    cin.ignore();
    cin.get();

    if (dificultad == 1)
    {
        cout << "======================================" << "\n";
        cout << "Ha seleccionado la dificultad : Facil" << "\n";
        cout << "======================================" << "\n";
        cin.ignore();
        cin.get();

        while (true)
        {
            cout << "=======================" << "\n";
            cout << "Seleccione su pregunta" << "\n";
            cout << "=======================" << "\n";
            cin.ignore();
            cin.get();

            cout << "Presione 0 para salir" << "\n";

            for (int i = 1; i <= 20; i++)
            {
                cout << "Pregunta #" << i << "\n";
            }

            cin >> pregunta;

            if (pregunta > 0)
            {
                switch (pregunta)
                {
                case 1:
                    cout << "Cuanto es 2 + 2" << "\n";
                    cin.ignore();
                    cin.get();
                    cout << respuestas[0] << endl;
                    break;

                default:
                    cout << "Respuesta no disponible" << endl;
                    break;
                } // Switch de preguntas
            } // if que define el número de la pregunta
            else
            {
                cout << "Ha salido del juego. Gracias por jugar" << "\n";
                return 0;
            }
        } // fin del ciclo de preguntas
    } // if que identifica la dificultad facil
} // main
