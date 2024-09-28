#include <iostream>
#include <cstdlib>

int main(){
    system("cls");
    int n1, n2;

    std::cout << "Tab your first number: ";
    std::cin >> n1;
    std::cout << "Tab your second number: ";
    std::cin >> n2;

    //Teste de Comparação (0 e´falso, e 1 é verdade)
    std::cout << "Verify if n1 is higher than n2: 0 (false) 1 (true) " << (n1 > n2) << std::endl; 
    std::cout << "Verify if n1 is low than n2: " << (n1 < n2) << std::endl;
    std::cout << "Verify if n1 == n2: " << (n1 == n2) << std::endl;
    std::cout << "Verify two conditions: " << ((n1 > 0) && (n1 < 10)) << std::endl;

}

