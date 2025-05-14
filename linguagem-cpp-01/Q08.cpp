#include <iostream>

int mdc(int a, int b){
    int maior = 1;
    
    for (int i = 1; i <= a; i++){
        if (a % i == 0 && b % i == 0){
            maior = i;
        }
    }

    return maior;
}

int main(){
    int a, b;
    std::cin >> a >> b;

    int m = mdc(a, b);
    std::cout << m << std::endl;

    return 0;
}
