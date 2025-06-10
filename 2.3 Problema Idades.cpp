#include <iostream>
#include <iomanip> 

using namespace std;

class Pessoa {
public:
    string nome;
    int idade;

    void lerDados() {
        cout << "Nome: ";
        cin.ignore();
        getline(cin, nome);
        cout << "Idade: ";
        cin >> idade;
    }
};

int main() {
    Pessoa p1, p2;

    cout << "Dados da primeira pessoa:\n";
    p1.lerDados();

    cout << "Dados da segunda pessoa:\n";
    p2.lerDados();

    double media = (p1.idade + p2.idade) / 2.0;

    cout << fixed << setprecision(1);
    cout << "\nA idade media de " << p1.nome << " e " << p2.nome << " eh de " << media << " anos." << endl;

    return 0;
}

