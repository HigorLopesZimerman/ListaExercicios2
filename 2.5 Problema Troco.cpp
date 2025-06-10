#include <iostream>
#include <iomanip>

using namespace std;

class Troco {
private:
    double precoUnitario;
    int quantidade;
    double dinheiroRecebido;

public:
    void lerDados() {
        cout << "Preco unitario do produto: ";
        cin >> precoUnitario;
        cout << "Quantidade comprada: ";
        cin >> quantidade;
        cout << "Dinheiro recebido: ";
        cin >> dinheiroRecebido;
    }

    double calcularTroco() {
        return dinheiroRecebido - (precoUnitario * quantidade);
    }

    void mostrarTroco() {
        cout << fixed << setprecision(2);
        cout << "\nTROCO = " << calcularTroco() << endl;
    }
};

int main() {
    Troco t;

    t.lerDados();
    t.mostrarTroco();

    return 0;
}

