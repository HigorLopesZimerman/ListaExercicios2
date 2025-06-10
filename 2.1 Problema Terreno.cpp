#include <iostream>
#include <iomanip>

using namespace std;

class Terreno {
private:
    double largura;
    double comprimento;
    double valorMetroQuadrado;

public:
    void lerDados() {
        cout << "Digite a largura do terreno: ";
        cin >> largura;
        cout << "Digite o comprimento do terreno: ";
        cin >> comprimento;
        cout << "Digite o valor do metro quadrado: ";
        cin >> valorMetroQuadrado;
    }

    double calcularArea() {
        return largura * comprimento;
    }

    double calcularPreco() {
        return calcularArea() * valorMetroQuadrado;
    }

    void mostrarResultados() {
        double area = calcularArea();
        double preco = calcularPreco();

        cout << fixed << setprecision(2);
        cout << "\nArea do terreno = " << area << endl;
        cout << "Preco do terreno = " << preco << endl;
    }
};

int main() {
    Terreno t;

    t.lerDados();
    t.mostrarResultados();

    return 0;
}

