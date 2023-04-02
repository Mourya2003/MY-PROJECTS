#include <iostream>

using namespace std;

int main()
{
    char op;
    float num1, num2, result;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch (op)
    {
    case '+':
        result = num1 + num2;
        break;

    case '-':
        result = num1 - num2;
        break;

    case '*':
        result = num1 * num2;
        break;

    case '/':
        result = num1 / num2;
        break;

    default:
        cout << "Invalid operator";
        return 1;
    }

    cout << num1 << " " << op << " " << num2 << " = " << result;

    return 0;
}
