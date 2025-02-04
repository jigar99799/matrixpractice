#include <iostream>

using namespace std;

int main() {
    char operation;
    double num1, num2;

    cout << "Enter operator (+, -, *, /): ";
    cin >> operation;

    cout << "Enter two operands: ";
    cin >> num1 >> num2;

    switch(operation) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0)
                cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            else
                cout << "Error! Division by zero." << endl;
            break;
        default:
            cout << "Error! Operator is not correct" << endl;
            break;
    }

    return 0;
}
#include <iostream>
#include <string>

using namespace std;

void displayMenu() {
    cout << "Simple Calculator" << endl;
    cout << "=================" << endl;
    cout << "1. Addition (+)" << endl;
    cout << "2. Subtraction (-)" << endl;
    cout << "3. Multiplication (*)" << endl;
    cout << "4. Division (/)" << endl;
    cout << "5. Exit" << endl;
    cout << "Enter your choice: ";
}

int main() {
    char operation;
    double num1, num2;
    int choice;

    while (true) {
        displayMenu();
        cin >> choice;

        if (choice == 5) {
            cout << "Exiting the calculator. Goodbye!" << endl;
            break;
        }

        switch (choice) {
            case 1:
                operation = '+';
                break;
            case 2:
                operation = '-';
                break;
            case 3:
                operation = '*';
                break;
            case 4:
                operation = '/';
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                continue;
        }

        cout << "Enter two operands: ";
        cin >> num1 >> num2;

        switch(operation) {
            case '+':
                cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
                break;
            case '-':
                cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
                break;
            case '*':
                cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
                break;
            case '/':
                if (num2 != 0)
                    cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
                else
                    cout << "Error! Division by zero." << endl;
                break;
            default:
                cout << "Error! Operator is not correct" << endl;
                break;
        }
    }

    //add retun type 
    //add switch case for 5
    //add default case for invalid choice

    return 0;
}