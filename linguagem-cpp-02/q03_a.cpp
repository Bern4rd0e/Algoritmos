#include <iostream>

void conta_pares(int a[], int n, int pares[], int &qtd_pares)
{
    qtd_pares = 0; // Sempre inicializa
    for (int i = 0; i < n; ++i)
    {
        if (a[i] % 2 == 0)
        {
            pares[qtd_pares++] = a[i];
        }
    }
}

int main()
{
    int n;
    std::cin >> n;
    int a[n], pares[n]; // Vetores
    int qtd_pares = 0;

    for (int i = 0; i < n; ++i)
    {
        std::cin >> a[i];
    }

    conta_pares(a, n, pares, qtd_pares);

    std::cout << "Quantidade de pares: " << qtd_pares << std::endl;
    for (int i = 0; i < qtd_pares; ++i)
    {
        std::cout << pares[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
