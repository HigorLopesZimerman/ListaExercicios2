#include <iostream>
#include <iomanip>

using namespace std;

class Funcionario {
private:
    string nome;
    double valorPorHora;
    int horasTrabalhadas;

public:
    void lerDados() {
        cout << "Nome: ";
        cin.ignore();
        getline(cin, nome);
        cout << "Valor por hora: ";
        cin >> valorPorHora;
        cout << "Horas trabalhadas: ";
        cin >> horasTrabalhadas;
    }

    double calcularPagamento() {
        return valorPorHora * horasTrabalhadas;
    }

    void mostrarPagamento() {
        cout << fixed << setprecision(2);
        cout << "\nO pagamento para " << nome << " deve ser " << calcularPagamento() << endl;
    }
};

int main() {
    Funcionario f;

    f.lerDados();
    f.mostrarPagamento();

    return 0;
}

