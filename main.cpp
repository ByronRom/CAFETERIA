#include <iostream>

using namespace std;

int main() {
    do{
    double precioCafe = 18.0;
    double precioTe = 14.0;
    double precioRefresco = 17.0;
    double precioSandwich = 22.0;
    double precioGalletas = 12.0;

    int cantidadCafe = 0;
    int cantidadTe = 0;
    int cantidadRefresco = 0;
    int cantidadSandwich = 0;
    int cantidadGalletas = 0;

    double total = 0;

    int opcion;
    do {
        cout << "Seleccione el producto:" << "\n";
        cout << "1. Cafe       $18.00" << "\n";
        cout << "2. Te         $14.00" << "\n";
        cout << "3. Refresco   $17.00" << "\n";
        cout << "4. Sandwich   $22.00" << "\n";
        cout << "5. Galletas   $12.00" << "\n";
        cout << "6. Finalizar compra" << "\n";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Ingrese la cantidad de cafe: ";
                cin >> cantidadCafe;
                total += cantidadCafe * precioCafe;
                break;
            case 2:
                cout << "Ingrese la cantidad de te: ";
                cin >> cantidadTe;
                total += cantidadTe * precioTe;
                break;
            case 3:
                cout << "Ingrese la cantidad de refresco: ";
                cin >> cantidadRefresco;
                total += cantidadRefresco * precioRefresco;
                break;
            case 4:
                cout << "Ingrese la cantidad de sandwich: ";
                cin >> cantidadSandwich;
                total += cantidadSandwich * precioSandwich;
                break;
            case 5:
                cout << "Ingrese la cantidad de galletas: ";
                cin >> cantidadGalletas;
                total += cantidadGalletas * precioGalletas;
                break;
            case 6:
                break;
            default:
                cout << "Opcion invalida. Por favor, seleccione una opcion valida." << "\n";
        }
    } while (opcion != 6);

    cout << "Resumen de la compra:" << "\n";
    if (cantidadCafe > 0) cout << "Cafe:     Cantidad: " << cantidadCafe << ", Precio Total: $" << cantidadCafe * precioCafe << "\n";
    if (cantidadTe > 0) cout << "Te:       Cantidad: " << cantidadTe << ", Precio Total: $" << cantidadTe * precioTe << "\n";
    if (cantidadRefresco > 0) cout << "Refresco: Cantidad: " << cantidadRefresco << ", Precio Total: $" << cantidadRefresco * precioRefresco << "\n";
    if (cantidadSandwich > 0) cout << "Sandwich: Cantidad: " << cantidadSandwich << ", Precio Total: $" << cantidadSandwich * precioSandwich << "\n";
    if (cantidadGalletas > 0) cout << "Galletas: Cantidad: " << cantidadGalletas << ", Precio Total: $" << cantidadGalletas * precioGalletas << "\n";

    cout << "Total a pagar: $" << total << "\n";
}while(1);
    return 0;
}


