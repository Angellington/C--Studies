// std::cout (Saída de Dados)
#include <iostream>
#include <cstdlib>

int main() {
    system("cls");
    int idade;
    std::cout << "Tab your age: ";
    std::cin >> idade; // Recebe a entrada do dado:
    std::cout << "So, your age is " << idade << " years old." <<std::endl;

    return 0;
}