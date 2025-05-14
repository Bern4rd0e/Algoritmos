#include <iostream>
#include <vector>
#include <climits> // Para usar INT_MIN

int main()
{
    int n;
    std::cin >> n; 

    std::vector<int> a(n); 

    for (int i = 0; i < n; ++i)
    {
        std::cin >> a[i]; 
    }

    int maior_soma = INT_MIN;  

    for (int i = 0; i < n - 1; ++i) {
    
        int soma = a[i] + a[i + 1];
        if (soma > maior_soma)
        {
            maior_soma = soma;
        }
    }

    std::cout << maior_soma << std::endl;

    return 0;
}
