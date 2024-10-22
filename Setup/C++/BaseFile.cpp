#include <iostream>
using namespace std;

int main() {

    double num1, num2;
    char operation;

    cout << "Hello World!";
    cout << "Entrez le premier nombre";
    cin >> num1;

    cout << "Entrez le deuxième monde";
    cin >> num2

    switch (operation) {
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
            if (num2 != 0)
                cout << "Result: " << num1 / num2 << endl;
            else
                cout << "Error: Division by zero is not allowed." << endl;
            break;
        default:
            cout << "Error: Invalid operator." << endl;
            break;
    }

    return 0;
}