#pragma once
#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

void menu2() {

    int av = 0, c = 0, asiento = 0, m = 0, av1[49], av2[49], av3[49], i;
    char opcion;
    for (i = 0; i < 49; i++)  av1[i] = 0;
    for (i = 0; i < 49; i++)  av2[i] = 0;
    for (i = 0; i < 49; i++)  av3[i] = 0;


    getch();
    do {
        system("cls");
        cout << "\n\n\t\t*******************BIENVENIDO AL SISTEMA DE RESERVA DE VUELOS**********************";
        cout << "\n\n\t\t -------------------------MENU DE OPCIONES-------------------------------\n";
        cout << "\n\n\t Seleccione Una Opcion Del Menu\n";
        cout << "\n\t 1. Reservar\n";
        cout << "\n\t 2. Confirmar Reserva\n";
        cout << "\n\t 3. Cancelar Reserva\n";
        cout << "\n\t 4. Estado del Avion\n";
        cout << "\n\t 5. Salir\n";
        cout << "\n\t Introduzca el Numero de la Opcion:";
        cin >> opcion;

        switch (opcion) {
        case '1':
            cout << "\n\n\t Desea Vijar En:""\n\t"" Avion 1""\n\t"" Avion 2""\n\t"" Avion 3""\n\t"" Elija el Avion Deseado: ";
            cin >> av;
            cout << "\n\n\t En que Clase Desea Viajar: ""\n\t"" 1-Primera Clase""\n\t"" 2-Segunda Clase\n\t"" Elija la clase: ";
            cin >> c;

            if (c == 1) {
                do {
                    cout << "\n\n\t Intodusca Un Numero De Asiento Entre 0 y 14: "; cin >> asiento;
                    if ((asiento < 0) || (asiento > 14))
                        cout << "\n\t Asiento No Valido....";
                } while ((asiento < 0) || (asiento > 14));
            }

            else {
                cout << "\n\t Elija Un Asiento Entre 15 y 49:";
                do {
                    cout << "\n\n\t Introduzca el numero de asiento: ";
                    cin >> asiento;
                    if ((asiento < 15) || (asiento > 49))
                        cout << "\n\n\t Asiento No Valido....";
                } while ((asiento < 15) || (asiento > 49));
            }
            if (av == 1) {
                if (av1[asiento] == 0) {
                    av1[asiento] = 1;
                    cout << "\n\t Su operacion se realizo con exito...";
                }
                else  cout << "\n\t El Asiento No Esta Disponible....";
            }
            if (av == 2) {
                if (av2[av == 2] == 0) {
                    av2[asiento] = 1;
                    cout << "\n\t Su operacion se realizo con exito...";
                }
                else cout << "\n\t El Asiento No Esta Disponible....";
            }
            if (av == 3) {
                if (av3[av == 3] == 0) {
                    av3[asiento] = 1;
                    cout << "\n\t Su operacion se realizo con exito...";
                }
                else  cout << "\n\t El Asiento No Esta Disponible....";
            }

            break;

        case '2':
            cout << "\n\t Para Confirmar Su Reserva:""\n""Ingrese El Numero De Avion En Que Reservo:";
            cin >> av;
            cout << "\n\t Ingrese El Numero De Asiento:";
            cin >> asiento;

            if (av == 1) {
                if (av1[asiento] == 1) {
                    av1[asiento] = 2;
                    cout << "\n\t Su confirmacion se realizo con exito...";
                }
                else
                    cout << "\n\t El Asiento No Ha Sido Reservado Aun Por Favor Reservelo Antes....";
            }

            if (av == 2) {
                if (av2[av == 2] == 1) {
                    av2[asiento] = 2;
                    cout << "\n\t Su confirmacion se realizo con exito...";
                }
                else
                    cout << "\n\t El Asiento No Ha Sido Reservado Aun por Favor Reservelo Antes....";
            }

            if (av == 3) {
                if (av3[av == 3] == 1) {
                    av3[asiento] = 2;
                    cout << "\n\t Su confirmacion se realizo con exito...";
                }
                else
                    cout << "\n\t El Asiento No Ha Sido Reservado Aun por Favor Reservelo Antes....";
            }

            break;

        case '3':
            cout << "\n\t Para Cancelar Su Reserva:""\n""Ingrese El Numero De Avion En Que Reservo:";
            cin >> av;
            cout << "\n\t Ingrese El Numero De Asiento:";
            cin >> asiento;

            if (av == 1) {
                if (av1[asiento] == 0)
                    cout << "\n\t El Asiento No Ha Sido Reservado Aun Por Favor Reservelo Antes....";
                {if (av1[asiento] == 2)
                    cout << "\n\t El Asiento Ya No Se Puede Cancelar Gracias....";
                else {
                    if (av1[asiento] == 1)
                        av1[asiento] = 0;
                    cout << "\n\t Su Reserva Ha Sido Cancelada.";
                }
                }
            }

            if (av == 2) {
                if (av2[av == 2] == 2)
                    av2[asiento] = 0;
                else
                    cout << "\n\t El Asiento Ya No Se Puede Cancelar Gracias....";
            }

            if (av == 3) {
                if (av3[av == 3] == 2)
                    av3[asiento] = 0;
                else
                    cout << "\n\t El Asiento Ya No Se Puede Cancelar Gracias....";
            }

            break;

        case '4':
            cout << "\n\t Que avion Desea Verificar Avion 1, Avion 2 o Avion 3:";
            cin >> av;
            cout << "\n\t Que Desea Veriaficar:""\n\t"" 1-Reservas""\n\t"" 2-Reservas Confirmadas""\n\t"" 3-Asientos Vacios""\n\t"" Elija La Opcion a Verificar: ";
            cin >> m;

            if ((av == 1) && (m == 1)) {
                cout << "\n\t Los Asientos Reservados Son: \n";
                for (i = 0; i <= 49; i++) {
                    if (av1[i] == 1)
                        cout << i << "-";
                }
            }
            else
                if ((av == 1) && (m == 2)) {
                    cout << "\n\t Los Asientos Confirmados Son: \n";
                    for (i = 0; i <= 49; i++) {
                        if (av1[i] == 2)
                            cout << i << "-";
                    }
                }
                else
                    if ((av == 1) && (m == 3)) {
                        cout << "\n\t Los Asientos Vacios Son: \n";
                        for (i = 0; i <= 49; i++) {
                            if (av1[i] == 0)
                                cout << i << "-";
                        }
                    }
            if ((av == 2) && (m == 1)) {
                cout << "\n\t Los Asientos Reservados Son: \n";
                for (i = 0; i <= 49; i++) {
                    if (av2[i] == 1)
                        cout << i << "-";
                }
            }
            else
                if ((av == 2) && (m == 2)) {
                    cout << "\n\t Los Asientos Confirmados Son: \n";
                    for (i = 0; i <= 49; i++) {
                        if (av2[i] == 2)
                            cout << i << "-";
                    }
                }
                else
                    if ((av == 2) && (m == 3)) {
                        cout << "\n\t Los Asientos Vacios Son: \n";
                        for (i = 0; i <= 49; i++) {
                            if (av2[i] == 0)
                                cout << i << "-";
                        }
                    }

            if ((av == 3) && (m == 1)) {
                cout << "\n\t Los Asientos Reservados Son: \n";
                for (i = 0; i <= 49; i++) {
                    if (av3[i] == 1)
                        cout << i << "-";
                }
            }
            else
                if ((av == 3) && (m == 2)) {
                    cout << "\n\t Los Asientos Confirmados Son: \n";
                    for (i = 0; i <= 49; i++) {
                        if (av3[i] == 2)
                            cout << i << "-";
                    }
                }
                else
                    if ((av == 3) && (m == 3)) {
                        cout << "\n\t Los Asientos Vacios Son: \n";
                        for (i = 0; i <= 49; i++) {
                            if (av3[i] == 0)
                                cout << i << "-";
                        }
                    }
            break;

        case '5':
            break;
        default:
            cout << "\n  ";
        }
        getch();

    } while (opcion != '5');
    cout << "\n\t Ha Decidido Salir Del Menu...";
    getch();
}
