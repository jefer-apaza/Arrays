// Arrays.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int x = 1;

    while (x != 0) {

        string x = " ";
        bool esPalindromo = false;

        cout << "Detector de Palindromos" << endl;

        cout << "\nIngrese una palabra para comprobar si es palindrmo" << endl;

        cin >> x;

        for (int i = 0; i < x.length()/2; i++) {

            for (int j = x.length() - 1; j >= 0; j--) {

                if (x[i] == x[j]) {

                    esPalindromo = true;

                }

                else {

                    esPalindromo = false;

                }
            }
        }
        if (esPalindromo = true) {

            cout << "La palabra " << x << " es Palindroma";

        }
        else {

            cout << "La palabra " << x << " no es Palindroma";

        }

        cout << "\n\nPara continuar el programa inserte un valor distinto de 0: ";

        cin >> x;
    }
    return 0;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
