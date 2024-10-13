#include <iostream>
#include <cstdlib>

int main(){
    system("cls");
    
    int i;
    do {
        i++;
        if (i % 2 == 0){
            std::cout << i << std::endl;
        }
    } while( i < 50);

    return 0;
}