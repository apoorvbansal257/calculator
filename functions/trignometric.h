#include<bits/stdc++.h>

using namespace std;

void trignometric()
{
    int ar_sel = 0;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "[2] Trignometric" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

    cout << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "Select the operation : " << endl;
    cout << "[1] Sine" << endl;
    cout << "[2] Cosine" << endl;
    cout << "[3] Tangent" << endl;
    cout << "[4] Cosecant" << endl;
    cout << "[5] Secant" << endl;
    cout << "[6] Cotangent" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

    cout << endl;
    cout << "Enter your selection : ";
    cin >> ar_sel;

    system("cls");

    double val = 0.0;

    cout << "Enter the angle (in radians) : ";
    cin >> val;

    double sin_val = sin(val);
    double cos_val = cos(val);
    double result = 0.0;
    cout << endl;

    switch(ar_sel)
    {
        case 1:
            result = sin_val;
            cout << "The sine of " << val << " is " << result << endl;
            break;

        case 2:
            result = cos_val;
            cout << "The cosine of " << val << " is " << result << endl;
            break;

        case 3:
            if(!cos_val)
            {
                cout << "The tangent of " << val << " is infinity" << endl;
            }
            else
            {
                result = sin_val / cos_val;
                cout << "The tangent of " << val << " is " << result << endl;
            }
            break;

        case 4:
            if(!sin_val)
            {
                cout << "The cosecant of " << val << " is infinity" << endl;
            }
            else
            {
                result =  1.0 / sin_val;
                cout << "The cosecant of " << val << " is " << result << endl;
            }
            break;

        case 5:
            if(!cos_val)
            {
                cout << "The secant of " << val << " is infinity" << endl;
            }
            else
            {
                result =  1.0 / cos_val;
                cout << "The secant of " << val << " is " << result << endl;
            }
            break;

        case 6: 
            if(!sin_val)
            {
                cout << "The cotangent of " << val << " is infinity" << endl;
            }
            else
            {
                result = cos_val / sin_val;
                cout << "The cotangent of " << val << " is " << result << endl;
            }
            break;

        default:
            cout << "Invalid Operation" <<endl;
    }

}