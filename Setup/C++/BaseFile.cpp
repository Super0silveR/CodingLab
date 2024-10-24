#include <iostream>
using namespace std;


double operation(double num1, double num2, char operatior) {
    switch (operatior) {
    case '+':
        cout << "Result: " << num1 + num2 << endl;
        break;
    case '-':
        cout << "Result: " << num1 - num2 << endl;
        break;
    case '*':
        cout << "Result: " << num1 * num2 << endl;
        break;
    case '/':
        if (num2 != 0) {
            cout << "Result: " << num1 / num2 << endl;
        }
        else {
            cout << "Error: Division by zero is not allowed." << endl;
        }
        break;
    default:
        cout << "Error: Invalid operator." << endl;
        break;
        
}
}

void magicTrick(char choix) {
    if (choix == 'a') 
        {
            cout << "Abracadabra";
        } else if (choix == 'b')
        {
            cout << "Banana Beam";
        } else if (choix == 'c') 
        {
            cout << "Chocolate star";
        }
}

int main() {

    double num1, num2;
    char operatior;
    char choix;

    cout << "Hello World!";
    
    cout << "Entrez le premier nombre";
    cin >> num1;

    cout << "Entrez le deuxieme monde";
    cin >> num2;

    cout << "Quel Operation veux-tu realiser";
    cin >> operatior;

    operation(num1, num2, operatior);

    cout << "Prends un choix entre a b et c";
    cin >> choix;

    magicTrick(choix);

    for (int i = 10; i != 0; i--) {
        cout << "Program over in : " << i << "\n";
    }
    
    return 0;

    
}