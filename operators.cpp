#include <iostream>
#include <cstdlib>

int main(){
    system("cls");

    int a = 20, b = 3;

    int n1, n2;
    std::cout << "Addition: " << (a  + b) << std::endl;
    std::cout << "Subtraction: " << (a - b) << std::endl;
    std::cout << "Multiply: " << (a * b) << std::endl;
    std::cout << "Division: " << (a / b) << std::endl;
    std::cout << "Remaind of Divison: " << (a % b) << std::endl;

    std::cout << "-------------------------" << std::endl;


    std::cout << "Tab your first number: ";
    std::cin >> n1;
    std::cout << "Tab your second number: ";
    std::cin >> n2;

    std::cout << "--------------------------" << std::endl;

    std::cout << "The addition of your number " << (n1 + n2) << std::endl;
    std::cout << "The substraction of your number is " << (n1 - n2) << std::endl;
    std::cout << "The multiply of your number is " << (n1 * n2) << std::endl;
    std::cout << "The division of your number is " << (n1 / n2) << std::endl;


    return 0;
}