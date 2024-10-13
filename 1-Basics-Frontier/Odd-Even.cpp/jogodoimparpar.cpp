#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>

// Objetivo, criar um jogo de impar e par junto da maquina

using namespace std;

int get_number() {
    int mynumber;

    
    while(true){
        cout << "Tab your number: (0) ODD - (1) EVEN\n";
        cin >> mynumber;

        if((mynumber != 0 && mynumber != 1) || cin.fail()){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            system("cls");
            cout << "Insert your number again\n";
            continue;
        } else {
            return mynumber;
        }
    }
}

int cp_number(){
    return rand() % 2;
}


int main(){
    system("cls");
    srand(time(0));

    cout << "Bem-vindo ao Jogo de Impar ou Par!\n" << endl;

    int number = get_number();
    int user_number, cpnumber = cp_number();

    cout << "Tab a number 0 to 10: ";
    cin >> user_number;

    cout << "The computer chooses: " << cpnumber << endl;
    cout << "You chooses: " << user_number << endl;

    // Addiction
    int addiction = cpnumber + user_number;
    cout << "The addicition between them is: " << addiction << endl;

    if(addiction % 2 == 0){
        cout << "Your number is odd\n";
        if ( number == 1){
            cout << "You win!" << endl;
        } else {
            cout << "The computer wins!" << endl;
        }
    } else {
        cout << "Your number is even\n";
        if (number ==  0) {
            cout << "You win!" << endl;
        } else {
            cout << "The computer wins!" << endl;
        }
    return 0;
}