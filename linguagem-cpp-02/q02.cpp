#include <iostream>

int impar_array(int a[], unsigned int n){
    unsigned int impar = 0;

    for(unsigned int i = 0; i < n; i++){
        if (a[i] % 2 != 0){
            impar = impar + 1;
        }
    }

    return impar;
} 

int main(){

    unsigned int n;
    std::cin >> n;
    int a[n];

    for (unsigned int i = 0; i < n; ++i)
    {
        std::cin >> a[i];
    }

    int impar = impar_array(a, n);
    std::cout << impar << std::endl;

    return 0;


}