#include <iostream>
#include <cstdlib>
#include <locale>
// Bibliotecas acima

// Evitar o uso std
using namespace std;

//  Funcoes
int addiction(int a, int b){
    return a + b;
}

int main(){
    system("cls");

    int n1, n2, result, result_hist;
    char op;
    

    std::setlocale(LC_ALL, "pt_BR.UTF-8");


    cout << "\33[93m-=-=-=-=-=-CALCULATOR-=-=-=-=-=-=-" << endl;
    cout << "\33[93mTab a number: ";
    cin >> n1;



    system("cls");
    
    while (true){
        cout << "\33[93mSelect an operators: " << endl;
        cout << "\33[32m(1) - Addiction\n(2) - Subtraction\n(3) - Multiply\n(4) - Division" << std::endl;
        cin >> op;

        if(op == '1'){
            system("cls");
            cout << "Addiction" << endl;
            cout << "\33[93mTab another number: ";
            cin >> n2;
            result = addiction(n1, n2);
            cout << result << endl;
            
            break;
        }
        if(op == '2'){
            cout << "Subtraction";
            break;
        }
        if(op == '3'){
            cout << "Multiply";
            break;
        }
        if(op == '4'){
            cout << "Division";
            break;
        } else {
            system("cls");
            cout << "\33[91mTab again!! " << endl;
            continue;
        }
    }
    return 0;
}

