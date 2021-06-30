#include<bits/stdc++.h>

using namespace std;

void arithmetic()
{
    int ar_sel = 0;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "[1] Arithmetic" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    
    cout << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "Select the operation : " << endl;
    cout << "[1] Addition" << endl;
    cout << "[2] Subtraction" << endl;
    cout << "[3] Multiplication" << endl;
    cout << "[4] Division" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

    cout << endl;
    cout << "Enter your selection : ";
    cin >> ar_sel;

    system("cls");

    double num1 = 0.0;
    double num2 = 0.0;
    double result = 0.0;

    cout << "Enter first number : ";
    cin >> num1;
    cout << "Enter second number : ";
    cin >> num2;
    cout << endl;

    switch(ar_sel)
    {
        case 1:
            result = num1 + num2;
            cout << "The addition of " << num1 << " with " << num2 << " gives " << result << endl;
            break;

        case 2:
            result = num1 - num2;
            cout << "The difference between " << num1 << " and " << num2 << " is " << result << endl;
            break;

        case 3:
            result = num1 * num2;
            cout << "The product of " << num1 << " with " << num2 << " gives " << result << endl;
            break;

        case 4:
            if (!num2)
            {
                cout << "Exception : Division by 0" << endl;
            }
            else
            {
                result = num1 / num2;
                cout << "The division of " << num1 << " with " << num2 << " gives " << result << endl;
            }
            break;

        default:
            cout << "Invalid Operation" <<endl;
    }
}