#include <iostream>
using namespace std;

int main() {
    int number1, number2;
    char operation;

    cout << "Enter a number: ";
    cin >> number1;

    cout << "Select operation: + = Плюс\n";
    cout << "Select operation: - = Минус\n";
    cout << "Select operation: * = Умножение\n";
    cout << "Select operation: / = Деление\n";

    cout << "Enter an operation: ";
    cin >> operation;

    cout << "Enter the second number: ";
    cin >> number2;

    int result;
    switch(operation) {
        case '+':
            result = number1 + number2;
            break;
        case '-':
            result = number1 - number2;
            break;
        case '*':
            result = number1 * number2;
            break;
        case '/':
            if (number2 != 0)
                result = number1 / number2;
            else {
                cout << "Error: Division by zero!" << endl;
                return 1;
            }
            break;
        default:
            cout << "Wrong operation!" << endl;
            return 1;
    }

    cout << "Result: " << result << endl;

    return 0;
}
