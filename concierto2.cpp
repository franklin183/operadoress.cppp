#include <iostream>

using namespace std;

int main() {
    int ubicacion, cantidad, total = 0, opcion;
    char bebida;

    cout << "Ingrese ubicacion (1-4): ";
    cin >> ubicacion;
    cout << "Ingrese cantidad de entradas: ";
    cin >> cantidad;

    switch (ubicacion) {
        case 1:
            total += cantidad * 50;
            break;
        case 2:
            total += cantidad * 80;
            break;
        case 3:
            total += cantidad * 120;
            break;
        case 4:
            total += cantidad * 160;
            break;
    }

    cout << "Desea compra entradas VIP? (1:si, 0:No): ";
    cin >> opcion;

    if (opcion == 1) {
        cout << "Seleccione bebida (G:Gaseosa, C:Cerveza, A:Agua): ";
        cin >> bebida;

        switch (bebida) {
            case 'G':
                total += cantidad * 15;
                break;
            case 'C':
                total += cantidad * 20;
                break;
            case 'A':
                total += cantidad * 10;
                break;
        }

        cout << "Total a pagar: $" << total << endl;
    } else {
        cout << "Total a pagar: $" << total << endl;
    }

    return 0;
}