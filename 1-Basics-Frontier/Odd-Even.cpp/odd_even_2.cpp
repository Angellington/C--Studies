#include <iostream>
#include <cstdlib>

int main(){
    int i;
    system("cls");

    while (i <= 50){
        if(i % 2 == 0){
        std::cout << i << std::endl;

        }
        i++;
    }

    return 0;
}