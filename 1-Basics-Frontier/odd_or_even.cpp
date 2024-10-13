#include <iostream>
#include <cstdlib>

// Verify if number is Odd or Even
int odd_even(int n) {
    if(n % 2 == 0){
        std::cout << "Odd" << std::endl;
    } else {
        std::cout << "Even" << std::endl;
    }
}

int main() {
    system("cls");

    // Add a variable
    int number;
    std::cout << "Insert a number: ";
    std::cin >> number;

    odd_even(number);
    
    return 0;
}