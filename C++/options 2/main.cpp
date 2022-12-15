#include <iostream>

using namespace std;

void ask(){
    cout << "OPTIONS" << endl;

    int initialdeposit, currentlandPrice, laterlandPrice;


    cout << "Enter the initial deposit paid by Ajay: ";
    cin >> initialdeposit;
    cout << "\n";

    cout << "Enter current value of the land: ";
    cin >> currentlandPrice;
    cout << endl;

    cout << "Five months later." << endl;

    cout << "Enter value of the land after 5 months: ";
    cin >> laterlandPrice;
    cout << endl;
}

int main()
{
    ask();

    return 0;
}
