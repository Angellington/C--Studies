#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

// Objetivo, criar um jogo de impar e par junto da maquina

using namespace std;
int main(){
    system("cls");
    int mynumber, computernumber;

    cout << "Welcom into ODD - EVEN GAMING \n" << endl;
    
    while(true){
        cout << "Tab your number: (0) ODD - (1) EVEN\n";
        cin >> mynumber;

        if((mynumber != 0 && mynumber != 1) || cin.fail()){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            system("cls");
            cout << "Insert your number again";
            continue;
        } else {
            return mynumber;
        }
    }
    cout << "Tab your number: ";
    cin >> mynumber;

    if(mynumber % 2 == 0){
        cout << "It's odd\n";
    } else {
        cout << "Its's even\n";
    }

    computernumber = rand() % 11;
    cout << computernumber;
    return 0;
}