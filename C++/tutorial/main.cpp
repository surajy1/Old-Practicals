#include <iostream>
using namespace std;

int main()
{
    int index = 1;
    while(index >=0){
        cout<< index <<endl;
        index++;
    }



    return 0;
}
















/*
#include <iostream>
using namespace std;

void func1();


int main()
{
    func1();


    return 0;
}

void func1(){
    cout<< "CALCULATOR"<< endl<<endl;

    double num1, num2;
    char op;

    cout<< "Enter first number: " ;
    cin>> num1;
    cout<< "Select an Operator(+, -, *, /): " ;
    cin>> op;

    double res;
    string inop = "Invalid Operator";

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
        cout<< inop << endl;

        do{
            cout<< "Enter first number: " ;
    cin>> num1;
    cout<< "Select an Operator(+, -, *, /): " ;
    cin>> op;

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

        }while(inop != "Invalid Operator");


    }
}

*/
