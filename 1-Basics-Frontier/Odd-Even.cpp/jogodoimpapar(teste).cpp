#include <iostream>
#include <cstdlib>
#include <ctime>
#include <locale> // Definir a Codificacao

using namespace std; // Evitar de usar o std::

int main() {
    system("cls");
    std::setlocale(LC_ALL, "pt_BR.UTF-8");

    // Gerador de numeros aleatoros
    srand(time(0));

    int chooseUser, numberUser, numberComputer, addiction;
    string option;

    cout << "Escolha Par ou Impar (Digite 0 (par) e 1 (impoar)): ";
    cin >> chooseUser;

    if (chooseUser != 0 && chooseUser !=  1){
        cout << "Escolha uma opção valida!" << endl;
        return 1;
    }

    cout << "Tab a Number: ";
    cin >> numberUser;

    numberComputer = rand() % 11;
    cout << "O computador escolheu um nuemro" << numberComputer << endl;

    addiction = numberUser + numberComputer;
    cout << "A soma dos numeros é " << addiction << endl;

    // Determina se a soma é par ou impar

    if (addiction % 2 == 0){
        cout << "A soma é par" << endl;
        if(chooseUser == 0){
            cout << "Você ganhou!" << endl;
        } else {
            cout << "O computador venceu!" << endl;
        }
    } else {
        cout << "A soma é impar." << endl;
        if (chooseUser == 1){
            cout << "Venceu!" << endl;
        } else {
            cout << "O computador venceu!" << endl;
        }
    }
}
