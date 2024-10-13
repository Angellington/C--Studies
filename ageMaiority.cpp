#include <iostream>
#include <cstdlib>
// Para permitir a alteração da codificação
#include <windows.h>

int main() {
    system("cls");
    // O console utiliza o UTF-8
    SetConsoleOutputCP(CP_UTF8);

    int idade;
    std::cout << "Digite sua idade: ";
    std::cin >> idade;

    if (idade >= 18){
        std::cout << "Você é maior de idade." << std::endl; 
    } else {
        std::cout << "Você é menor de idade." << std::endl;
    }

    return 0;
}