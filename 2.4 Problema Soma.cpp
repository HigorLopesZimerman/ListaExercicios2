#include <iostream>

using namespace std;

class Soma {
private:
    int x;
    int y;

public:
    void lerValores() {
        cout << "Digite o valor de X: ";
        cin >> x;
        cout << "Digite o valor de Y: ";
        cin >> y;
    }

    int calcularSoma() {
        return x + y;
    }

    void mostrarResultado() {
        cout << "\nSOMA = " << calcularSoma() << endl;
    }
};

int main() {
    Soma s;

    s.lerValores();
    s.mostrarResultado();

    return 0;
}

