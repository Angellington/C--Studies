#include <iostream>
#include <cstdlib>

// Do the mean between 3 numbers
float mean(float n1, float n2, float n3){
    float result;
    result =  (n1 + n2 + n3) / 3;
    return result;
}
 
int main() {
    system("cls");
    float n1, n2, n3;

    std::cout << "Insert your first number: ";
    std::cin >> n1;

    std::cout << "Insert your second number: ";
    std::cin >> n2;

    std::cout << "Insert your third number: ";
    std::cin >> n3;

    float result = mean(n1, n2, n3);

    std::cout << result << std::endl;

    return 0;
}