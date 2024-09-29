#include <iostream>
#include <cstdlib>

// Do a prime numbers - Just numbers divisible between him and 1;

bool is_prime(int n){
    if(n <= 1){
        return false;
    }

    for(int i = 2; i <= n / 2; i++){
        if (n % i == 0){
            return false;
        }
    }
    return true;
}

int main() {
    system("cls");

    int number;
    std::cout << "Insert your number: " << std::endl;
    std::cin >> number;

    if(is_prime(number)){
        std::cout << "Your number is prime!" << std::endl;
    } else {
        std::cout << "Your number is not prime!" << std::endl;
    }

    return 0;
}