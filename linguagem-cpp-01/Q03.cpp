#include <iostream>
#include <iomanip> 

// float area(float diametro){
//     float pi = 3.14159;
//     float r = diametro / 2;
//     float r2 = r * r;
    
//     return pi * r2;
// }

// int main(){
//     float diametro;
//     std::cin >> diametro;
//     float a = area(diametro);
//     std::cout << std::fixed << std::setprecision(5) << a << std::endl;
//     return 0;
// }

double area(double diametro){
    double pi = 3.14159;
    double r = diametro / 2;
    double r2 = r * r;
    
    return pi * r2;
}

int main(){
    double diametro;
    std::cin >> diametro;
    double a = area(diametro);
    std::cout << std::fixed << std::setprecision(5) << a << std::endl;
    return 0;
}