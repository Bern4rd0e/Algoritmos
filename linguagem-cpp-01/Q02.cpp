#include <iostream> 

long perimetro(long l1, long l2){
    return 2*(l1 + l2);
}

int main(){
    long l1, l2;
    std::cin >> l1 >> l2;        
    long p = perimetro(l1, l2);      
    std::cout << p << std::endl;
    return 0;
}
