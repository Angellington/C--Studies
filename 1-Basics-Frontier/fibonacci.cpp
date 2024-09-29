#include <iostream>
#include <cstdlib>
// Fibonacci Sequence - That the addition of three earliest numbers
// 1
// 1
// 2
// 3
// 5
// 8
// 13


int main(){
    system("cls");
    int i = 0;
    int ii = 1;
    
    while(true){
        int r = i + ii;

        std::cout << r << std::endl;

        i = ii;
        ii = r;

        if(r > 1000){
            break;
        }
    }
}