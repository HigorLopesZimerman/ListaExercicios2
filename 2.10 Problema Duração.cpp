#include <iostream>

using namespace std;

class Duracao {
private:
    int segundos;

public:
    void lerSegundos() {
        cout << "Digite a duracao em segundos: ";
        cin >> segundos;
    }

    void mostrarTempoFormatado() {
        int horas = segundos / 3600;
        int minutos = (segundos % 3600) / 60;
        int restoSegundos = segundos % 60;

        cout << "\n" << horas << ":" << minutos << ":" << restoSegundos << endl;
    }
};

int main() {
    Duracao d;

    d.lerSegundos();
    d.mostrarTempoFormatado();

    return 0;
}

