#include <iostream>
#include <iomanip>

using namespace std;

class Consumo {
private:
    double distancia;
    double combustivel;

public:
    void lerDados() {
        cout << "Distancia percorrida: ";
        cin >> distancia;
        cout << "Combustivel gasto: ";
        cin >> combustivel;
    }

    double calcularConsumoMedio() {
        return distancia / combustivel;
    }

    void mostrarResultado() {
        cout << fixed << setprecision(3);
        cout << "\nConsumo medio = " << calcularConsumoMedio() << endl;
    }
};

int main() {
    Consumo c;

    c.lerDados();
    c.mostrarResultado();

    return 0;
}

