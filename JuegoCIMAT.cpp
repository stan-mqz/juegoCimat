#include <iostream>
#include <wchar.h>

using namespace std;

int main()
{

    setlocale(LC_ALL, "");

    int pregunta, dificultad;
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

    if(dificultad == 1)
    
    {
        cout<<"Ha seleccionado la dificultad : Facil"<<endl;
    }

    if (dificultad == 2)
    {
        cout<<"Ha seleccionado la dificultad : Dificil"<<endl;
    }
    

} // main
