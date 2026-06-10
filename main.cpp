//Including libs
#include <QCoreApplication>
#include <iostream>

//Adding charachter and nubmers
char op;
float a{}, b{};
bool validOperation = false;

char operations[] = {'+', '-', '*', '/'};

// Check if the entered operation is valid
int CheckingForOperation() {
    for (int i = 0; i < 4; i++)
    {
        if (op == operations[i])
        {
            validOperation = true;
            break;
        }
    }
    return validOperation;
}

using namespace std;
int main()
{


    cout << "Calculator 0.1" << endl << endl;

    cout << "Type first number: ";
    cin >> a;
    cout << "Type operation: ";
    cin >> op;

    CheckingForOperation();


    if(!validOperation)
    {
        while(validOperation)
        {
            cout << "Type an valid operation: ";
            cin >> op;
            CheckingForOperation();
        }
    }

    //Counting
    switch (op) {
        case '+':
            a += b;
            break;
        case '-':
            a -= b;
            break;
        case '/':
            //If second number at this operation will be 0, programm will stop
            if (b == 0)
            {
                cout << "Divider is zero. Type another number" << endl;
                cin >> b;
                a /= b;
                break;
            }
            a /= b;
            break;
        case '*':
            a *= b;
            break;
        default:
            cout << "That's not a valid operation" << endl;
            return 0;
    }

    //Showing result
    cout << "Result is " << a << endl << "Enter number to complite the programm: " << endl;
    cin >> b;

    return 0;
}
