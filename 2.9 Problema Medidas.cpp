#include <iostream>
#include <iomanip>

using namespace std;

class Medidas {
private:
    double A, B, C;

public:
    void lerDados() {
        cout << "Digite a medida A: ";
        cin >> A;
        cout << "Digite a medida B: ";
        cin >> B;
        cout << "Digite a medida C: ";
        cin >> C;
    }

    double areaQuadrado() {
        return A * A;
    }

    double areaTriangulo() {
        return (A * B) / 2.0;
    }

    double areaTrapezio() {
        return ((A + B) * C) / 2.0;
    }

    void mostrarResultados() {
        cout << fixed << setprecision(4);
        cout << "\nAREA DO QUADRADO = " << areaQuadrado() << endl;
        cout << "AREA DO TRIANGULO = " << areaTriangulo() << endl;
        cout << "AREA DO TRAPEZIO = " << areaTrapezio() << endl;
    }
};

int main() {
    Medidas m;

    m.lerDados();
    m.mostrarResultados();

    return 0;
}

