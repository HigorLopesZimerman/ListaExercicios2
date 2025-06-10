#include <iostream>
#include <cmath>     
#include <iomanip>   

using namespace std;

class Retangulo {
private:
    double base;
    double altura;

public:
    void lerDados() {
        cout << "Base do retangulo: ";
        cin >> base;
        cout << "Altura do retangulo: ";
        cin >> altura;
    }

    double calcularArea() {
        return base * altura;
    }

    double calcularPerimetro() {
        return 2 * (base + altura);
    }

    double calcularDiagonal() {
        return sqrt(base * base + altura * altura);
    }

    void mostrarResultados() {
        cout << fixed << setprecision(4);
        cout << "\nAREA = " << calcularArea() << endl;
        cout << "PERIMETRO = " << calcularPerimetro() << endl;
        cout << "DIAGONAL = " << calcularDiagonal() << endl;
    }
};

int main() {
    Retangulo r;

    r.lerDados();
    r.mostrarResultados();

    return 0;
}

