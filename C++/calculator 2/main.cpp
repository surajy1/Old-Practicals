#include <iostream>

using namespace std;

int calculator(){
    int num1, num2;
    char op;

    cout<< "CALCULATOR v2\n\n";

    cout<< "Enter first number: ";
    cin>> num1;
    cout<< "Enter second number: ";
    cin>> num2;
    cout<< "Select an operator(+, -, *, /): ";
    cin>>op;

    int res;


    switch(op){
    case '+':
        res = num1 + num2;
        cout<< "Sum of the entered numbers is: " << res;
        break;

    case '-':
        res = num1 - num2;
        cout<< "Difference of the entered numbers is: " << res;
        break;

    case '/':
        res = num1 / num2;
        cout<< "Division of the entered numbers is: " << res;
        break;

    case '*':
        res = num1 * num2;
        cout<< "Product of the entered numbers is: " << res;
        break;

    default:
        cout<< "Invalid Operator.";

    }
    return res;
}

int main()
{
    calculator();


    return 0;
}
