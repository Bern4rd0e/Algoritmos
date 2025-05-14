#include <iostream>
#include <vector>
using namespace std;

// Função para checar se um número é primo
bool eh_primo(int num)
{
    if (num <= 1)
        return false;
    
    int i = 2;
    while (i * i <= num)
    {
        if (num % i == 0)
            return false;
        i++;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> primos(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    int qtd_primos = 0;

    for (int i = 0; i < n; ++i)
    {
        if (eh_primo(a[i]))
        {
            primos[qtd_primos] = a[i];
            qtd_primos = qtd_primos + 1;
        }
    }

    cout << "Quantidade de primos: " << qtd_primos << endl;

    if (qtd_primos > 0)
    {
        cout << "Primos encontrados: " << primos[0];
        for (int i = 1; i < qtd_primos; ++i)
        {
            cout << " " << primos[i];
        }
        cout << endl;
    }

    return 0;
}
