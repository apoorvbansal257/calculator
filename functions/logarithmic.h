#include<bits/stdc++.h>

using namespace std;

void logarithmic()
{
    int ar_sel = 0;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "[3] Logarithmic" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    
    cout << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "Select the operation : " << endl;
    cout << "[1] Base e" << endl;
    cout << "[2] Base 10" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

    cout << endl;
    cout << "Enter your selection : ";
    cin >> ar_sel;

    system("cls");

    double val = 0.0;
    double result = 0.0;

    cout << "Enter the number : ";
    cin >> val;
    cout <<endl;

    if(val < 0)
    {
        cout << "Exception : Logarithmic value does not exist" << endl;
    }
    else
    if(val == 0)
    {
        cout << "The logarithmic value of 0 is infinity" << endl;
    }
    else
    {
        switch(ar_sel)
        {
            case 1:
                result = log(val);
                cout << "The logarithmic value of " << val << " with base e is " << result << endl;
                break;

            case 2:
                result = log10(val);
                cout << "The logarithmic value of " << val << " with base 10 is " << result << endl;
                break;

            default:
                cout << "Invalid Operation" << endl;

        }
    }

}