#include <iostream>
#include <cmath>
#include <chrono>  // Para medir o tempo
using namespace std;
using namespace std::chrono;

bool primo(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int num;
    cout << "Digite um número: ";
    cin >> num;

    // Início da medição de tempo
    auto inicio = high_resolution_clock::now();

    bool resultado = primo(num);

    // Fim da medição de tempo
    auto fim = high_resolution_clock::now();
    auto duracao = duration_cast<nanoseconds>(fim - inicio);

    if (resultado)
        cout << num << " é primo." << endl;
    else
        cout << num << " não é primo." << endl;

    cout << "Tempo de execução: " << duracao.count() << " nanosegundos." << endl;

    return 0;
}
