#include <iostream>
int indice_array(int a[], unsigned int n)
{
    unsigned int maior_indice = 0;
    for (unsigned int i = 1; i < n; ++i)
    {
        if (a[i] > a[maior_indice])
        {
            maior_indice = i;
        }
    }
    return maior_indice;
}
int main()
{
    unsigned int n;
    std::cin >> n;
    int a[n];
    for (unsigned int i = 0; i < n; ++i)
    {
        std::cin >> a[i];
    }
    int indice = indice_array(a, n);
    std::cout << indice << std::endl;
    return 0;
}