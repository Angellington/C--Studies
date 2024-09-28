#include <iostream>
#include <cstdlib>
#include <windows.h>

// Função para dar o quadrado de um numero

int quadrado(int num){
    return num * num;
}

int main(){
    // Permitir a cod UTF-8
    SetConsoleOutputCP(CP_UTF8);
    system("cls");

    int valor = 5;
    std::cout << "O quadrado de " << valor << " é " << quadrado(valor) << std::endl;

    return 0;
}