#include <iostream>
#include <cstdlib>

// Do a factorial number
/* 
5!

1! = 1
2! = 2 * 1
3! = 3 * 2 * 1
4! = 4 * 3 *2 * 1
5! = 5 * 4 * 3 * 2 *1

1 = 1
2! = 2 * 1
3! = 3 * 2!
4! = 4 * 3!
*/

int factorial(int n){

    int i = 1;
    int r = 1;

    for(i = 1; i <= n; i++){
        r = r * i;
    }
    std::cout << r << std::endl;
}

int main(){
    system("cls");

    int number;

    std::cout << "Insert your number: ";
    std::cin >> number;
    std::cout << "So, your factorial number is..." << std::endl;

    factorial(number);

}