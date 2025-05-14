#include <iostream>

int divisores(int num, int d, int cont=0){
    for(int i = 1; i <= d; i++){
        if (i % num == 0){
            cont++;
        }
    }
    return cont;
}

int main(){
    int num, d;
    std::cin >> num >> d;

    int qtd = divisores(num, d);
    std::cout << qtd << std::endl;

    return 0;
}