#include <iostream>

void separa_positivos_negativos(int a[], int n, int positivos[], int &qtd_positivos, int negativos[], int &qtd_negativos)
{
    qtd_positivos = 0;
    qtd_negativos = 0;

    for (int i = 0; i < n; ++i)
    {
        if (a[i] > 0)
        {
            positivos[qtd_positivos++] = a[i];
        }
        else if (a[i] < 0)
        {
            negativos[qtd_negativos++] = a[i];
        }
    }
}

int main()
{
    int n;
    std::cin >> n;
    int a[n], positivos[n], negativos[n];
    int qtd_positivos = 0, qtd_negativos = 0;

    for (int i = 0; i < n; ++i)
    {
        std::cin >> a[i];
    }

    separa_positivos_negativos(a, n, positivos, qtd_positivos, negativos, qtd_negativos);

    std::cout << "Quantidade de positivos: " << qtd_positivos << std::endl;
    for (int i = 0; i < qtd_positivos; ++i)
    {
        std::cout << positivos[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Quantidade de negativos: " << qtd_negativos << std::endl;
    for (int i = 0; i < qtd_negativos; ++i)
    {
        std::cout << negativos[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
