#include <iostream>
#include <cstdio>

void primo_entre_si(int a, int b, int cont=0){
    for(int i=1; i<=a; i++){
        if(a % i == 0 && b % i == 0){
            cont++;
        }
    } if (cont > 1) {
        printf("Não é primo entre si\n");
    } else { 
        printf("É primo entre si\n");
    }
}

int main(){
    int a, b;
    std::cin >> a >> b;

    primo_entre_si(a, b);

    return 0;
}