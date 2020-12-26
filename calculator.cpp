#include <bits/stdc++.h>
#include "functions/arithmetic.h"
#include "functions/trignometric.h"
#include "functions/logarithmic.h"
#include "functions/exponential.h"

using namespace std;

int main()
{
    char choice = 'y';
    
    while(choice == 'y')
    {
        system("cls");
        int sel = 0;
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "Welcome" <<endl;
        cout << "Thanks for using Apoorv's Advanced Calculator" << endl;
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

        cout << endl;
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "Select the operation type you want to calculate : " << endl;
        cout << "[1] Arithmetic" << endl;
        cout << "[2] Trignometric" << endl;
        cout << "[3] Logarithmic" << endl;
        cout << "[4] Exponential" << endl;
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

        cout << endl;
        cout << "Enter your selection : ";
        cin >> sel;
        
        system("cls");

        switch(sel)
        {
            case 1:
                arithmetic();
    			break;

    		case 2:
    			trignometric();
    			break;

    		case 3:
    			logarithmic();
    			break;

    		case 4:
    			exponential();
    			break;

    		default:
    			cout<<"Invalid Operation" << endl;
        }

        cout << endl;
        cout << endl;
        cout << "Do you want to continue (y/n) : ";
        cin >> choice;

        if(choice != 'y')
        {
            system("cls");

            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
            cout << "Thanks for visiting!" << endl;
            cout << endl;
            cout << "Come back soon" << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
            cout << endl;

        }
    }

    return 0;
}