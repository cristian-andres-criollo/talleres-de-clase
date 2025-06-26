#include <iostream>
#include <cmath> // Para usar sqrt() y M_PI

using namespace std;

int main() {
    double area, radio;

    cout << "Ingrese el área del círculo: ";
    cin >> area;

    if (area <= 0) {
        cout << "El área debe ser un número positivo." << endl;
        return 1;
    }

    // Fórmula: radio = sqrt(area / pi)
    radio = sqrt(area / M_PI);

    cout << "El radio del círculo es: " << radio << endl;return0;
}