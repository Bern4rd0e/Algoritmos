#include <iostream>
#include <cstdio>

void divisor(int num){
    if (num == 2){
        printf("É primo\n");
    } else if(num == 1 || num == 0){
        printf("Não é primo\n");
    } else {
        if (num % 2 != 0 && num % 3 != 0){
            printf("É primo\n");
        } else {
            printf("Não é primo\n");
        }
    }
}

int main(){
    int num;
    std::cin >> num;

    divisor(num);

    return 0;
}