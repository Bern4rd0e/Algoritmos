#include <iostream>

int postes(int rua, int distancia){
    if (rua % distancia == 0){
        return rua / distancia + 1;
    } else {
        return rua / distancia + 2;
    }
}

int main(){
    int rua, distancia;

    std::cin >> rua >> distancia;

    int p = postes(rua, distancia);
    int m = rua % distancia;
    std::cout << p << std::endl << m << " metros" << std::endl;

    return 0;
}