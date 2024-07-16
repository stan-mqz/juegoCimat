#include <iostream>
#include "respuestas.h"

using namespace std;

int main()
{


    int pregunta, dificultad;
    float respuesta;
    bool fin = false;

    while (true)
    {
        cout << "Seleccione la dificultad" << "\n";
        cout << "0. Salir" << "\n";
        cout << "1. Fácil" << "\n";
        cout << "2. Difícil" << "\n";
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
            cout << "Ingrese una opción válida" << "\n";
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
        cout << "Ha seleccionado la dificultad: Fácil" << "\n";
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
                    cout << "¿Cuánto es 2 + 2?" << "\n";
                    cin.ignore();
                    cin.get();
                    cout << respuestas[0] << endl;
                    break;

                case 2:
                    cout << "¿Cuánto es 10/5?" << "\n";
                    cin.ignore();
                    cin.get();
                    cout << respuestas[1] << endl;
                    break;

                case 3:
                    cout << "¿Cuánto es 9 + 10?" << "\n";
                    cin.ignore();
                    cin.get();
                    cout << respuestas[2] << endl;
                    break;

                case 4:
                    cout << "¿Cuánto es 100/5?" << "\n";
                    cin.ignore();
                    cin.get();
                    cout << respuestas[3] << endl;
                    break;

                case 5:
                    cout << "¿Cuánto es 5 x 10?" << "\n";
                    cin.ignore();
                    cin.get();
                    cout << respuestas[4] << endl;
                    break;

                case 6:
                    cout << "¿Cuánto es 9 x 9?" << "\n";
                    cin.ignore();
                    cin.get();
                    cout << respuestas[5] << endl;
                    break;

                case 7:
                    cout << "¿Cuánto es 50/2?" << "\n";
                    cin.ignore();
                    cin.get();
                    cout << respuestas[6] << endl;
                    break;

                case 8:
                    cout << "¿Cuánto es 200 + 500?" << "\n";
                    cin.ignore();
                    cin.get();
                    cout << respuestas[7] << endl;
                    break;

                case 9:
                    cout << "¿Cuánto es 100/20?" << "\n";
                    cin.ignore();
                    cin.get();
                    cout << respuestas[8] << endl;
                    break;

                case 10:
                    cout << "¿Cuánto es 7 x 3?" << "\n";
                    cin.ignore();
                    cin.get();
                    cout << respuestas[9] << endl;
                    break;

                case 11:
                    cout << "¿Cuánto es 15 - 10?" << "\n";
                    cin.ignore();
                    cin.get();
                    cout << respuestas[10] << endl;
                    break;

                case 12:
                    cout << "¿Cuánto es 2 + 12?" << "\n";
                    cin.ignore();
                    cin.get();
                    cout << respuestas[11] << endl;
                    break;

                case 13:
                    cout << "¿Cuánto es 30 - 15?" << "\n";
                    cin.ignore();
                    cin.get();
                    cout << respuestas[12] << endl;
                    break;

                case 14:
                    cout << "¿Cuánto es 50 + 50?" << "\n";
                    cin.ignore();
                    cin.get();
                    cout << respuestas[13] << endl;
                    break;

                case 15:
                    cout << "¿Cuánto es 200 - 90?" << "\n";
                    cin.ignore();
                    cin.get();
                    cout << respuestas[14] << endl;
                    break;

                case 16:
                    cout << "¿Cuánto es 8 x 9?" << "\n";
                    cin.ignore();
                    cin.get();
                    cout << respuestas[15] << endl;
                    break;

                case 17:
                    cout << "¿Cuánto es 4 x 4?" << "\n";
                    cin.ignore();
                    cin.get();
                    cout << respuestas[16] << endl;
                    break;

                case 18:
                    cout << "¿Cuánto es 70 - 35?" << "\n";
                    cin.ignore();
                    cin.get();
                    cout << respuestas[17] << endl;
                    break;

                case 19:
                    cout << "¿Cuánto es 60 + 15?" << "\n";
                    cin.ignore();
                    cin.get();
                    cout << respuestas[18] << endl;
                    break;

                case 20:
                    cout << "¿Cuánto es 300/2?" << "\n";
                    cin.ignore();
                    cin.get();
                    cout << respuestas[19] << endl;
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

    if (dificultad == 2)
    {
        cout << "=======================================" << "\n";
        cout << "Ha seleccionado la dificultad: Difícil" << "\n";
        cout << "=======================================" << "\n";
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
                    cout << "¿Cuánto es 4 × 4 - 4 + 4 x 4?" << "\n";
                    cin.ignore();
                    cin.get();
                    cout << respuestasDificiles[0] << endl;
                    break;

                case 2:
                    cout << "¿Cuánto es 132/4?" << "\n";
                    cin.ignore();
                    cin.get();
                    cout << respuestasDificiles[1] << endl;
                    break;

                case 3:
                    cout << "¿Cuánto es 160/0.25?" << "\n";
                    cin.ignore();
                    cin.get();
                    cout << respuestasDificiles[2] << endl;
                    break;

                case 4:
                    cout << "¿Cuánto es 48.25 - 33.25?" << "\n";
                    cin.ignore();
                    cin.get();
                    cout << respuestasDificiles[3] << endl;
                    break;

                case 5:
                    cout << "¿Cuánto es 19 x 20?" << "\n";
                    cin.ignore();
                    cin.get();
                    cout << respuestasDificiles[4] << endl;
                    break;

                case 6:
                    cout << "¿Cuánto es 36 x 4?" << "\n";
                    cin.ignore();
                    cin.get();
                    cout << respuestasDificiles[5] << endl;
                    break;

                case 7:
                    cout << "¿Cuánto es 440 x 20?" << "\n";
                    cin.ignore();
                    cin.get();
                    cout << respuestasDificiles[6] << endl;
                    break;

                case 8:
                    cout << "¿Cuánto es 120 x 0.25?" << "\n";
                    cin.ignore();
                    cin.get();
                    cout << respuestasDificiles[7] << endl;
                    break;

                case 9:
                    cout << "¿Cuánto es 648/24?" << "\n";
                    cin.ignore();
                    cin.get();
                    cout << respuestasDificiles[8] << endl;
                    break;

                case 10:
                    cout << "¿Cuánto es 840 - 390?" << "\n";
                    cin.ignore();
                    cin.get();
                    cout << respuestasDificiles[9] << endl;
                    break;

                case 11:
                    cout << "¿Cuánto es 0.3% de 100?" << "\n";
                    cin.ignore();
                    cin.get();
                    cout << respuestasDificiles[10] << endl;
                    break;

                case 12:
                    cout << "¿Cuánto es 496/4?" << "\n";
                    cin.ignore();
                    cin.get();
                    cout << respuestasDificiles[11] << endl;
                    break;

                case 13:
                    cout << "¿Cuánto es 840/30?" << "\n";
                    cin.ignore();
                    cin.get();
                    cout << respuestasDificiles[12] << endl;
                    break;

                case 14:
                    cout << "¿Cuánto es el 75% de 804?" << "\n";
                    cin.ignore();
                    cin.get();
                    cout << respuestasDificiles[13] << endl;
                    break;

                case 15:
                    cout << "¿Cuánto es 100/0.25?" << "\n";
                    cin.ignore();
                    cin.get();
                    cout << respuestasDificiles[14] << endl;
                    break;

                case 16:
                    cout << "¿Cuánto es 440/4?" << "\n";
                    cin.ignore();
                    cin.get();
                    cout << respuestasDificiles[15] << endl;
                    break;

                case 17:
                    cout << "¿Cuánto es 25% de 1636?" << "\n";
                    cin.ignore();
                    cin.get();
                    cout << respuestasDificiles[16] << endl;
                    break;

                case 18:
                    cout << "¿Cuánto es 2220/20?" << "\n";
                    cin.ignore();
                    cin.get();
                    cout << respuestasDificiles[17] << endl;
                    break;

                case 19:
                    cout << "Lisa recibió un cheque regalo de 100 euros por su cumpleaños. Se compró unas deportivas que costaban 30 euros, un vestido de 23 euros y dos libros de 17 euros. ¿Cuánto dinero le quedó en el cheque regalo?" << "\n";
                    cin.ignore();
                    cin.get();
                    cout << respuestasDificiles[18] << endl;
                    break;

                case 20:
                    cout << "Si David tiene el doble de monedas de 5 céntimos que Tomás y Tomás tiene 15 monedas de 5 céntimos más que Juan, ¿cuántas monedas tiene David si Juan tiene 6 monedas de cinco céntimos?" << "\n";
                    cin.ignore();
                    cin.get();
                    cout << respuestasDificiles[19] << endl;
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
    }

} // main
