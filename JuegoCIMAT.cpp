#include <iostream>
#include <wchar.h>

using namespace std;

int main()
{

    setlocale(LC_ALL, "");

    string dificultad;
    int pregunta;

    cout << "Seleccione la dificultad" << endl;
    cout << "Facil" << endl;
    cout << "Dificil" << endl;
    cin >> dificultad;

    if (dificultad == "facil")
    {

        cout << "Ha seleccionado la dificultad: Facil" << endl;

        cout << "Seleccione la pregunta" << endl;
        cout << "1. " << endl;
        cout << "2. " << endl;
        cout << "3. " << endl;
        cout << "4. " << endl;
        cout << "5. " << endl;
        cin >> pregunta;

        switch (pregunta)
        {

        case 1:

            cout << "Uno" << endl;

            break;

        case 2:

            cout << "2" << endl;

            break;

        case 3:

            cout << "3" << endl;

            break;

        case 4:

            cout << "4" << endl;

            break;
        case 5:

            cout << "5" << endl;

            break;

        default:
            break;
        }
    }
    else
    {

        cout << "Ha seleccionado la dificultad: Dificil" << endl;
        
        cout << "Seleccione la pregunta" << endl;
        cout << "1. " << endl;
        cout << "2. " << endl;
        cout << "3. " << endl;
        cout << "4. " << endl;
        cout << "5. " << endl;
        cin >> pregunta;

        switch (pregunta)
        {

        case 1:

            cout << "1" << endl;

            break;

        case 2:

            cout << "2" << endl;

            break;

        case 3:

            cout << "3" << endl;

            break;

        case 4:

            cout << "4" << endl;

            break;
        case 5:

            cout << "5" << endl;

            break;

        default:
            break;
        }
    }

    return 0;
}