#include <iostream>
#include <cstdlib>

int main() {
    system("cls");
    
    for (int i = 0; i < 10; i++){
        std::cout << "i = " << i << std::endl;
    }

    int contador = 0; 
    while (contador <= 25) {
        std::cout << "Contador = " << contador << std::endl;
        contador++;
    }

    return 0;
}