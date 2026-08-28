#include <iostream>
using namespace std;

float chooseOp()
{
    float op; 
    cout << "Choose the Operator:\n 1. +\n 2. -\n 3. *\n 4. /\n ";
    cin >> op;
    return op;
}

float getValue()
{
    float n1;
    cout << "Enter First Number: ";
    cin >> n1;
    return n1;
}

float getValue2()
{
    float n2; 
    cout << "Enter Second Number: ";
    cin >> n2;
    return n2;
}

float calculateResult(float op, float n1, float n2)
{
    if (op == 1)
        return n1 + n2;
    if (op == 2)
        return n1 - n2;
    if (op == 3)
        return n1 * n2;
    if (op == 4)
    {
        if (n2 != 0)
            return n1 / n2;
        else
        {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
    }
    cout << "Invalid Operator Selected!" << endl;
    return 0;
}

void printResult(float result)
{
    cout << "Result: " << result << endl;
}

int main()
{
    float op = chooseOp();
    float value1 = getValue();
    float value2 = getValue2();
    float result = calculateResult(op, value1, value2);
    
    printResult(result);

    return 0;
}
