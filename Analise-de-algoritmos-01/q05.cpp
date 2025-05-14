#include <iostream>
#include <chrono>

bool primo_algo1(long long n) {
    int divs = 0;
    for (long long i = 1; i <= n; ++i)
        if (n % i == 0)
            divs++;
    return divs == 2;
}

bool primo_algo2(long long n) {
    int divs = 0;
    for (long long i = 1; i <= n / 2; ++i)
        if (n % i == 0)
            divs++;
    return divs == 1;
}

bool primo_algo3(long long n) {
    if (n == 1) return false;
    if (n == 2) return true;

    int divs = 1; // 1 é sempre divisor
    for (long long i = 3; i <= n / 2; i += 2)
        if (n % i == 0)
            divs++;
    return divs == 1;
}

void medir_tempo(bool (*func)(long long), long long n, const std::string& nome_algo) {
    auto ini = std::chrono::high_resolution_clock::now();
    bool resultado = func(n);
    auto fim = std::chrono::high_resolution_clock::now();
    auto duracao = std::chrono::duration_cast<std::chrono::microseconds>(fim - ini);

    std::cout << nome_algo << ": ";
    std::cout << (resultado ? "primo" : "nao primo") << " | ";
    std::cout << duracao.count() << " microseconds" << std::endl;
}

int main() {
    long long valores[] = {
        11, 240000029, 480000077, 720000103, 960000131, 1200000133, 1440000137,
        1680000149, 1920000161, 2160000163, 2400000167, 2640000217, 2880000251,
        3120000253, 3360000257, 3600000269, 3840000289, 4080000293, 4320000329,
        4560000343, 4800000347, 5040000443, 5280000461, 5520000463, 5760000473,
        6000000511, 6240000581, 6480000589, 6720000593, 6960000613, 7200000623,
        7440000629, 7680000703, 7920000707, 8160000721, 8400000727, 8640000749,
        8880000757, 9120000809, 9360000827, 9600000833, 9840000869
    };

    for (long long n : valores) {
        std::cout << "Número: " << n << std::endl;
        medir_tempo(primo_algo1, n, "Algo 1");
        medir_tempo(primo_algo2, n, "Algo 2");
        medir_tempo(primo_algo3, n, "Algo 3");
        std::cout << "----------------------------------------" << std::endl;
    }

    return 0;
}
