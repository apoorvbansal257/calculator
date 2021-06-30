#include<bits/stdc++.h>

using namespace std;

void exponential()
{
    int ar_sel = 0;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "[4] Exponential" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    
    cout << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "Select the operation : " << endl;
    cout << "[1] Base e" << endl;
    cout << "[2] Custom Base" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

    cout << endl;
    cout << "Enter your selection : ";
    cin >> ar_sel;

    system("cls");

    double result = 0.0;
    double exponent = 0.0;
    double base = 0.0;

    switch(ar_sel)
    {
        case 1:
            cout << "Enter the exponent value : ";
            cin >> exponent;
            cout << endl;
            if( log(DBL_MAX) < exponent)
            {
                cout << "Exception : Result out of bounds" << endl;
            }
            else
            {
                result = exp(exponent);
                cout << "The value of e raised to power " << exponent << " is " << result << endl;
            }
            break;

        case 2:
            
            cout << "Enter the base value : ";
            cin >> base;

            cout << "Enter the exponent value : ";
            cin >> exponent;
            cout << endl;

            if( log(DBL_MAX) / log(base) < exponent)
            {
                cout << "Exception : Result out of bounds" << endl;
            }
            else
            {
                result = pow(base, exponent);
                cout << "The value of " << base << " raised to power " << exponent << " is " << result << endl;
            }
            break;

        default:
            cout << "Invalid Operation" << endl;

    }
}