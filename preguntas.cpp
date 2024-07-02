#include <iostream>
#include "respuestas.h"
#include "preguntas.h"

void preguntasFacil(){

    int pregunta;

                    switch (pregunta)
                {

                case 1:
                    cout << "Cuanto es 2 + 2" << "\n";
                    cin.ignore();
                    cin.get();
                    cout << respuestas[0] << endl;
                    break;

                case 2:
                    cout << "Cuanto es 2 + 2" << "\n";
                    cin.ignore();
                    cin.get();
                    cout << respuestas[1] << endl;
                    break;

                case 3:
                    cout << "Cuanto es 2 + 2" << "\n";
                    cin.ignore();
                    cin.get();
                    cout << respuestas[2] << endl;
                    break;

                case 4:
                    cout << "Cuanto es 2 + 2" << "\n";
                    cin.ignore();
                    cin.get();
                    cout << respuestas[3] << endl;
                    break;

                case 5:
                    cout << "Cuanto es 2 + 2" << "\n";
                    cin.ignore();
                    cin.get();
                    cout << respuestas[4] << endl;
                    break;

                case 6:
                    cout << "Cuanto es 2 + 2" << "\n";
                    cin.ignore();
                    cin.get();
                    cout << respuestas[5] << endl;
                    break;

                case 7:
                    cout << "Cuanto es 2 + 2" << "\n";
                    cin.ignore();
                    cin.get();
                    cout << respuestas[6] << endl;
                    break;

                case 8:
                    cout << "Cuanto es 2 + 2" << "\n";
                    cin.ignore();
                    cin.get();
                    cout << respuestas[7] << endl;
                    break;

                case 9:
                    cout << "Cuanto es 2 + 2" << "\n";
                    cin.ignore();
                    cin.get();
                    cout << respuestas[8] << endl;
                    break;

                case 10:
                    cout << "Cuanto es 2 + 2" << "\n";
                    cin.ignore();
                    cin.get();
                    cout << respuestas[9] << endl;
                    break;

                case 11:
                    cout << "Cuanto es 2 + 2" << "\n";
                    cin.ignore();
                    cin.get();
                    cout << respuestas[10] << endl;
                    break;

                case 12:
                    cout << "Cuanto es 2 + 2" << "\n";
                    cin.ignore();
                    cin.get();
                    cout << respuestas[11] << endl;
                    break;

                case 13:
                    cout << "Cuanto es 2 + 2" << "\n";
                    cin.ignore();
                    cin.get();
                    cout << respuestas[12] << endl;
                    break;

                case 14:
                    cout << "Cuanto es 2 + 2" << "\n";
                    cin.ignore();
                    cin.get();
                    cout << respuestas[13] << endl;
                    break;

                case 15:
                    cout << "Cuanto es 2 + 2" << "\n";
                    cin.ignore();
                    cin.get();
                    cout << respuestas[14] << endl;
                    break;

                case 16:
                    cout << "Cuanto es 2 + 2" << "\n";
                    cin.ignore();
                    cin.get();
                    cout << respuestas[15] << endl;
                    break;

                case 17:
                    cout << "Cuanto es 2 + 2" << "\n";
                    cin.ignore();
                    cin.get();
                    cout << respuestas[16] << endl;
                    break;

                case 18:
                    cout << "Cuanto es 2 + 2" << "\n";
                    cin.ignore();
                    cin.get();
                    cout << respuestas[17] << endl;
                    break;

                case 19:
                    cout << "Cuanto es 2 + 2" << "\n";
                    cin.ignore();
                    cin.get();
                    cout << respuestas[18] << endl;
                    break;

                case 20:
                    cout << "Cuanto es 2 + 2" << "\n";
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
};