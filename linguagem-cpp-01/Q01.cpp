#include <iostream> // Inclui a biblioteca padrão para entrada e saída (cin, cout)

long long soma(long long a, long long b){ // Função que recebe dois inteiros e retorna a soma deles
    long long r = a + b;      // Calcula a soma e armazena na variável 'r'
    return r;           // Retorna o valor da soma
}

int main(){ // Função principal: ponto de entrada do programa
    long long a, b;                  // Declara duas variáveis inteiras para armazenar os números digitados
    std::cin >> a >> b;        // Lê dois valores da entrada padrão (teclado) e armazena em 'a' e 'b'
    long long s = soma(a, b);        // Chama a função 'soma' com 'a' e 'b', e armazena o resultado em 's'
    std::cout << s << std::endl; // Imprime o resultado da soma na tela e pula uma linha
    return 0; // Retorna 0 indicando que o programa terminou com sucesso
}
