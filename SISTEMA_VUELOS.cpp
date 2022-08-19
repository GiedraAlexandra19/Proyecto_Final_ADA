#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include "menu1.h"

using namespace std;

int main() {
    char opcion;
    cout << "\n\n\t\t*******************BIENVENIDO AL SISTEMA DE VUELOS**********************";

    getch();
    do {
        system("cls");
        cout << "\n\n\t ------------------------MENU DE OPCIONES-------------------------------\n";
        cout << "\n\n\t Seleccione Una Opcion Del Menu\n";
        cout << "\n\t 1. Consultar tiempo de un vuelo\n";
        cout << "\n\t 2. Entrar al Sistema de Reserva de vuelos\n";
        cout << "\n\t 3. Salir\n";
        cout << "\n\t Introduzca el Numero de la Opcion:";
        cin >> opcion;

        switch (opcion) {
        case '1':
          //  menu1();
            break;
        case '2':
            menu2();
            break;

        case '3':
            break;

        default:
            cout << "\n  ";
        }
        getch();

    } while (opcion != '3');
    cout << "\n\t Ha Decidido Salir Del Menu...";
    getch();
    return 0;
}
