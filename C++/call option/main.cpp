#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    cout << "CALL OPTION" << endl;

    int spotPrice, strikePrice; float premium;
    string ticker;

    int intrinsicValue;

    int pnl;

    int breakEven = strikePrice + premium;

    cout << "Enter the name of the stock: " << endl;
    getline(cin, ticker);

    cout << "Enter the spot price of the stock: ";
    cin >> spotPrice;



    int choose;

    cout << "Choose a strike price from 1, 2, 3: \n";
    for (int i = 1; i<=3; i++){
        cout << i << ". " << spotPrice - 10 << endl;
        i++;
        cout << i++ << ". " << spotPrice << endl;
        cout << i++ << ". " << spotPrice + 10 << endl;
    }
    cout << endl;
    cin >> choose;

    if (choose == 1){
        strikePrice = spotPrice - 10;
    }
    else if(choose == 2){
        strikePrice = spotPrice;
    }
    else{
            strikePrice = spotPrice + 10;
    }

    cout << "Chosen strike price: " << strikePrice <<endl;

    intrinsicValue = spotPrice - strikePrice;

    premium = (0.6*spotPrice)/100;

    pnl = max(0 , intrinsicValue) - premium;

    cout << "pnl : " << pnl;



    return 0;
}
