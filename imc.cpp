#include <iostream>
#include <cstdlib>
#include <windows.h>

// Objetivo: Fazer o calculo do imc
float quadrado(float num){
    return num * num;
}

float imc(float peso, float altura){
    float result;
    return peso / quadrado(altura); 
}

int main(){
    float peso, altura;
    system("cls");

    std::cout << "Digite o peso (kg): ";
    std::cin >> peso;
    std::cout << "Digite a altura (m): ";
    std::cin >> altura;

    float result = imc(peso, altura);

    std::cout << result << std::endl;

    return 0;
}
