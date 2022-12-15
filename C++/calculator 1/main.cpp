#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    cout<< "CALCULATOR"<< endl<<endl;

    double num1, num2;
    char op;

    cout<< "Enter first number: " ;
    cin>> num1;
    cout<< "Select an Operator(+, -, *, /): " ;
    cin>> op;

    double res;
    if(op == '+'){
        cout<< "Enter second number: " ;
        cin>> num2;
        res = num1 + num2;
        cout<< "Sum of the entered numbers is : "<< res <<endl;
    }
    else if (op == '-'){
        cout<< "Enter second number: " ;
        cin>> num2;
        res = num1 - num2;
        cout<< "Difference of the entered numbers is : "<< res <<endl;
    }
    else if (op == '*'){
        cout<< "Enter second number: " ;
        cin>> num2;
        res = num1 * num2;
        cout<< "Product of the entered numbers is : "<< res <<endl;
    }
    else if (op == '/'){
        cout<< "Enter second number: " ;
        cin>> num2;
        res = num1 / num2;
        cout<< "Division of the entered numbers is : "<< res <<endl;
    }
    else{
        cout<< "Invalid Operator!" << endl;
    }




    return 0;
}
