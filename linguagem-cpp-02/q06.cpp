#include <iostream>
#include <iomanip>
#include <cmath> 
struct cordenada {
    double x, y;
};

double menor_distancia(cordenada pontos[], int n) {
    double d = 1e9; 

    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) { 
            double dx = pontos[i].x - pontos[j].x;
            double dy = pontos[i].y - pontos[j].y;
            double dist = std::sqrt(dx * dx + dy * dy);
            if (dist < d) {
                d = dist;
            }
        }
    }

    return d;
}

int main() {
    int n;
    std::cin >> n;
    cordenada pontos[n];
    for (int i = 0; i < n; ++i) {
        std::cin >> pontos[i].x >> pontos[i].y;
    }
    double distancia = menor_distancia(pontos, n);
    std::cout << std::fixed << std::setprecision(4) << distancia << std::endl;
    return 0;
}
