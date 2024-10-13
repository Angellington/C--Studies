#include <iostream>
#include <cstdlib>

// Odd and Even

int main(){
    system("cls");
    std::cout << "Odd Or Even" << std::endl;

    for(int i = 0; i <= 150; i++){
        if(i % 2 == 0){
            std::cout << i << std::endl;
        }
    }

    return 0;
}