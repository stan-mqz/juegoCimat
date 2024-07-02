#include <iostream>
#include <wchar.h>

using namespace std;

int main()
{

    setlocale(LC_ALL, "");

    int pregunta, dificultad;
    float respuesta;
    bool fin = false;

    while (true)
    {
        cout << "Seleccione la dificultad" << endl;
        cout << "0. Salir" << endl;
        cout << "1. Facil" << endl;
        cout << "2. Dificil" << endl;
        cin >> dificultad;

        if (dificultad == 0)
        {
            cout << "Ha salido del juego" << endl;
            return 0;
        }

        if (dificultad == 1 || dificultad == 2)
        {
            break;
        }

        else
        {
            cout << "Ingrese una opcion valida" << endl;
        }

    } // ciclo while de opciones

    cout << "Bienvenido" << endl;

    if (dificultad == 1)
    {
        cout << "Ha seleccionado la dificultad : Facil" << endl;

        cout << "Seleccione su pregunta" << endl;

        do
        {

            cout << "0. Salir" << endl;
            cout << "1. Opcion 1" << endl;
            cout << "2. Opcion 2" << endl;
            cout << "3. Opcion 3" << endl;
            cout << "4. Opcion 4" << endl;
            cout << "5. Opcion 5" << endl;
            cout << "6. Opcion 6" << endl;
            cout << "7. Opcion 7" << endl;
            cout << "8. Opcion 8" << endl;
            cout << "9. Opcion 9" << endl;
            cout << "10. Opcion 10" << endl;
            cout << "11. Opcion 11" << endl;
            cout << "12. Opcion 12" << endl;
            cout << "13. Opcion 13" << endl;
            cout << "14. Opcion 14" << endl;
            cout << "15. Opcion 15" << endl;
            cout << "16. Opcion 16" << endl;
            cout << "17. Opcion 17" << endl;
            cout << "18. Opcion 18" << endl;
            cout << "19. Opcion 19" << endl;
            cout << "20. Opcion 20" << endl;
            cin >> pregunta;

            if (pregunta > 0)
            {
                switch (pregunta)
                {
                case 1:
                    cout << "Cuanto es 2 + 2" << endl;

                    while (true)
                    {
                        cout << "Ingrese su respuesta" << endl;
                        cin >> respuesta;

                        if (respuesta == 4)
                        {
                            cout << "Respuesta correcta!" << endl;
                            cout << "Continuemos!" << endl;
                            break;
                        }

                        else
                        {
                            cout << "Respuesta incorrecta. Intente de nuevo" << endl;
                        }

                    } // Cierra el ciclo while

                    break;

                case 2:
                    cout << "Pregunta 2: Cuanto es 5 * 5" << endl;

                    while (true)
                    {
                        cout << "Ingrese su respuesta" << endl;
                        cin >> respuesta;

                        if (respuesta == 25)
                        {
                            cout << "Respuesta correcta!" << endl;
                            cout << "Continuemos!" << endl;
                            break;
                        }

                        else
                        {
                            cout << "Respuesta incorrecta. Intente de nuevo" << endl;
                        }

                    } // Cierra el ciclo while

                    break;

                case 3:
                    cout << "Pregunta 3: Cuanto es 10 / 2" << endl;

                    while (true)
                    {
                        cout << "Ingrese su respuesta" << endl;
                        cin >> respuesta;

                        if (respuesta == 5)
                        {
                            cout << "Respuesta correcta!" << endl;
                            cout << "Continuemos!" << endl;
                            break;
                        }

                        else
                        {
                            cout << "Respuesta incorrecta. Intente de nuevo" << endl;
                        }

                    } // Cierra el ciclo while

                    break;

                case 4:
                    cout << "Pregunta 4: Cuanto es 6 + 7" << endl;

                    while (true)
                    {
                        cout << "Ingrese su respuesta" << endl;
                        cin >> respuesta;

                        if (respuesta == 13)
                        {
                            cout << "Respuesta correcta!" << endl;
                            cout << "Continuemos!" << endl;
                            break;
                        }

                        else
                        {
                            cout << "Respuesta incorrecta. Intente de nuevo" << endl;
                        }

                    } // Cierra el ciclo while

                    break;

                case 5:
                    cout << "Pregunta 5: Cuanto es 8 - 3" << endl;

                    while (true)
                    {
                        cout << "Ingrese su respuesta" << endl;
                        cin >> respuesta;

                        if (respuesta == 5)
                        {
                            cout << "Respuesta correcta!" << endl;
                            cout << "Continuemos!" << endl;
                            break;
                        }

                        else
                        {
                            cout << "Respuesta incorrecta. Intente de nuevo" << endl;
                        }

                    } // Cierra el ciclo while

                    break;

                case 6:
                    cout << "Pregunta 6: Cuanto es 12 / 4" << endl;

                    while (true)
                    {
                        cout << "Ingrese su respuesta" << endl;
                        cin >> respuesta;

                        if (respuesta == 3)
                        {
                            cout << "Respuesta correcta!" << endl;
                            cout << "Continuemos!" << endl;
                            break;
                        }

                        else
                        {
                            cout << "Respuesta incorrecta. Intente de nuevo" << endl;
                        }

                    } // Cierra el ciclo while

                    break;

                case 7:
                    cout << "Pregunta 7: Cuanto es 3 * 3" << endl;

                    while (true)
                    {
                        cout << "Ingrese su respuesta" << endl;
                        cin >> respuesta;

                        if (respuesta == 9)
                        {
                            cout << "Respuesta correcta!" << endl;
                            cout << "Continuemos!" << endl;
                            break;
                        }

                        else
                        {
                            cout << "Respuesta incorrecta. Intente de nuevo" << endl;
                        }

                    } // Cierra el ciclo while

                    break;

                case 8:
                    cout << "Pregunta 8: Cuanto es 9 + 1" << endl;

                    while (true)
                    {
                        cout << "Ingrese su respuesta" << endl;
                        cin >> respuesta;

                        if (respuesta == 10)
                        {
                            cout << "Respuesta correcta!" << endl;
                            cout << "Continuemos!" << endl;
                            break;
                        }

                        else
                        {
                            cout << "Respuesta incorrecta. Intente de nuevo" << endl;
                        }

                    } // Cierra el ciclo while

                    break;

                case 9:
                    cout << "Pregunta 9: Cuanto es 15 - 5" << endl;

                    while (true)
                    {
                        cout << "Ingrese su respuesta" << endl;
                        cin >> respuesta;

                        if (respuesta == 10)
                        {
                            cout << "Respuesta correcta!" << endl;
                            cout << "Continuemos!" << endl;
                            break;
                        }

                        else
                        {
                            cout << "Respuesta incorrecta. Intente de nuevo" << endl;
                        }

                    } // Cierra el ciclo while

                    break;

                case 10:
                    cout << "Pregunta 10: Cuanto es 7 * 2" << endl;

                    while (true)
                    {
                        cout << "Ingrese su respuesta" << endl;
                        cin >> respuesta;

                        if (respuesta == 14)
                        {
                            cout << "Respuesta correcta!" << endl;
                            cout << "Continuemos!" << endl;
                            break;
                        }

                        else
                        {
                            cout << "Respuesta incorrecta. Intente de nuevo" << endl;
                        }

                    } // Cierra el ciclo while

                    break;

                case 11:
                    cout << "Pregunta 11: Cuanto es 18 / 2" << endl;

                    while (true)
                    {
                        cout << "Ingrese su respuesta" << endl;
                        cin >> respuesta;

                        if (respuesta == 9)
                        {
                            cout << "Respuesta correcta!" << endl;
                            cout << "Continuemos!" << endl;
                            break;
                        }

                        else
                        {
                            cout << "Respuesta incorrecta. Intente de nuevo" << endl;
                        }

                    } // Cierra el ciclo while

                    break;

                case 12:
                    cout << "Pregunta 12: Cuanto es 13 + 7" << endl;

                    while (true)
                    {
                        cout << "Ingrese su respuesta" << endl;
                        cin >> respuesta;

                        if (respuesta == 20)
                        {
                            cout << "Respuesta correcta!" << endl;
                            cout << "Continuemos!" << endl;
                            break;
                        }

                        else
                        {
                            cout << "Respuesta incorrecta. Intente de nuevo" << endl;
                        }

                    } // Cierra el ciclo while

                    break;

                case 13:
                    cout << "Pregunta 13: Cuanto es 20 - 4" << endl;

                    while (true)
                    {
                        cout << "Ingrese su respuesta" << endl;
                        cin >> respuesta;

                        if (respuesta == 16)
                        {
                            cout << "Respuesta correcta!" << endl;
                            cout << "Continuemos!" << endl;
                            break;
                        }

                        else
                        {
                            cout << "Respuesta incorrecta. Intente de nuevo" << endl;
                        }

                    } // Cierra el ciclo while

                    break;

                case 14:
                    cout << "Pregunta 14: Cuanto es 8 / 2" << endl;

                    while (true)
                    {
                        cout << "Ingrese su respuesta" << endl;
                        cin >> respuesta;

                        if (respuesta == 4)
                        {
                            cout << "Respuesta correcta!" << endl;
                            cout << "Continuemos!" << endl;
                            break;
                        }

                        else
                        {
                            cout << "Respuesta incorrecta. Intente de nuevo" << endl;
                        }

                    } // Cierra el ciclo while

                    break;

                case 15:
                    cout << "Pregunta 15: Cuanto es 11 + 9" << endl;

                    while (true)
                    {
                        cout << "Ingrese su respuesta" << endl;
                        cin >> respuesta;

                        if (respuesta == 20)
                        {
                            cout << "Respuesta correcta!" << endl;
                            cout << "Continuemos!" << endl;
                            break;
                        }

                        else
                        {
                            cout << "Respuesta incorrecta. Intente de nuevo" << endl;
                        }

                    } // Cierra el ciclo while

                    break;

                case 16:
                    cout << "Pregunta 16: Cuanto es 14 - 7" << endl;

                    while (true)
                    {
                        cout << "Ingrese su respuesta" << endl;
                        cin >> respuesta;

                        if (respuesta == 7)
                        {
                            cout << "Respuesta correcta!" << endl;
                            cout << "Continuemos!" << endl;
                            break;
                        }

                        else
                        {
                            cout << "Respuesta incorrecta. Intente de nuevo" << endl;
                        }

                    } // Cierra el ciclo while

                    break;

                case 17:
                    cout << "Pregunta 17: Cuanto es 4 * 4" << endl;

                    while (true)
                    {
                        cout << "Ingrese su respuesta" << endl;
                        cin >> respuesta;

                        if (respuesta == 16)
                        {
                            cout << "Respuesta correcta!" << endl;
                            cout << "Continuemos!" << endl;
                            break;
                        }

                        else
                        {
                            cout << "Respuesta incorrecta. Intente de nuevo" << endl;
                        }

                    } // Cierra el ciclo while

                    break;

                case 18:
                    cout << "Pregunta 18: Cuanto es 16 / 4" << endl;

                    while (true)
                    {
                        cout << "Ingrese su respuesta" << endl;
                        cin >> respuesta;

                        if (respuesta == 4)
                        {
                            cout << "Respuesta correcta!" << endl;
                            cout << "Continuemos!" << endl;
                            break;
                        }

                        else
                        {
                            cout << "Respuesta incorrecta. Intente de nuevo" << endl;
                        }

                    } // Cierra el ciclo while

                    break;

                case 19:
                    cout << "Pregunta 19: Cuanto es 3 + 17" << endl;

                    while (true)
                    {
                        cout << "Ingrese su respuesta" << endl;
                        cin >> respuesta;

                        if (respuesta == 20)
                        {
                            cout << "Respuesta correcta!" << endl;
                            cout << "Continuemos!" << endl;
                            break;
                        }

                        else
                        {
                            cout << "Respuesta incorrecta. Intente de nuevo" << endl;
                        }

                    } // Cierra el ciclo while

                    break;

                case 20:
                    cout << "Pregunta 20: Cuanto es 5 * 4" << endl;

                    while (true)
                    {
                        cout << "Ingrese su respuesta" << endl;
                        cin >> respuesta;

                        if (respuesta == 20)
                        {
                            cout << "Respuesta correcta!" << endl;
                            cout << "Continuemos!" << endl;
                            break;
                        }

                        else
                        {
                            cout << "Respuesta incorrecta. Intente de nuevo" << endl;
                        }

                    } // Cierra el ciclo while

                    break;

                default:
                    break;

                } // Se cierra el switch con las preguntas

            } // if que identifica el número de la pregunta

            else
            {
                fin = true;
                cout << "Ha salido del juego. Gracias por jugar" << endl;
                break;
            }

        } while (!false);

    } // if que identifica la dificultad facil

    if (dificultad == 2)
    {
        cout << "Ha seleccionado la dificultad : Dificil" << endl;

        

    } // if que identifica la dificultad dificil

} // main
