#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int tempoTotal, horas, minutos, segundos;

    cout << "Digite o tempo de duracao do evento em segundos: ";
    cin >> tempoTotal;

    horas = tempoTotal / 3600;
    tempoTotal = tempoTotal % 3600;

    minutos = tempoTotal / 60;
    segundos = tempoTotal % 60;

    cout << "O evento durou: ";
    cout << horas << " hora(s), ";
    cout << minutos << " minuto(s), ";
    cout << segundos << " segundo(s)." << endl;

    return 0;
}
