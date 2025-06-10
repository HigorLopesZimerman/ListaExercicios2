#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

class Circulo {
private:
    double raio;

public:
    void lerRaio() {
        cout << "Digite o valor do raio do circulo: ";
        cin >> raio;
    }

    double calcularArea() {
        const double PI = 3.14159;
        return PI * pow(raio, 2);
    }

    void mostrarArea() {
        cout << fixed << setprecision(3);
        cout << "\nAREA = " << calcularArea() << endl;
    }
};

int main() {
    Circulo c;

    c.lerRaio();
    c.mostrarArea();

    return 0;
}

