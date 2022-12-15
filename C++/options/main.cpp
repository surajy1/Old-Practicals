#include <iostream>


using namespace std;

int main()
{
    cout << "OPTIONS" << endl;

    int initialdeposit, currentlandPrice, laterlandPrice;
    int vprofit;
    string ajay = "Ajay", venu = "Venu";

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

    int totalPaid = initialdeposit + currentlandPrice;
    int ajaysprofit, ajaysloss;
    ajaysprofit = laterlandPrice - totalPaid;
    ajaysloss = totalPaid - laterlandPrice;

    char yes;

    cout << "Does Venu wants to buy the land? \nEnter 'y' or 'Y' for yes or 'n' or 'N' for no. ";
    cin >> yes;
    cout << endl << "'Result.'" << endl;

    switch(yes){
        case 'y':
            if(laterlandPrice > totalPaid){

                    cout << "Ajay invested a total of Rs. " << totalPaid << "/- \n\n";
                    cout << "The current value of Ajay's land is: Rs. " << laterlandPrice << "/- \n\n";

                    cout << "Hence, Ajay made a profit of Rs. " << ajaysprofit << "/- \n\n";
                    cout << "Venu earned a deposit of Rs. " << initialdeposit << "/- \n";
                    cout << "and got a total of Rs. " << totalPaid << "/- \n";
                    cout << "and made a notional loss of Rs. " << ajaysprofit << "/- \n";
            }
            else if ( currentlandPrice == laterlandPrice){

                    cout << "Ajay invested a total of Rs. " << totalPaid << "/- \n";
                    cout << "The current value of Ajay's land is: Rs. " << laterlandPrice << "/- \n\n";

                    cout << "Hence, Ajay paid an extra of Rs. " << ajaysloss << "/- \n\n";
                    cout << "Venu earned a deposit of Rs. " << initialdeposit << "/- \n";
                    cout << "and got a total of Rs. " << totalPaid << "/- \n";

            }
            else if( laterlandPrice == totalPaid){
                    cout << "Ajay invested a total of Rs. " << totalPaid << "/- \n";
                    cout << "The current value of Ajay's land is: Rs. " << laterlandPrice << "/- \n\n";
                    cout << "Hence, Ajay neither earned nor lost any money.\n\n";
                    cout << "Venu earned a deposit of Rs. " << initialdeposit << "/- \n";
                    cout << "and got a total of Rs. " << totalPaid << "/- \n";
                    cout << "and made a notional loss of Rs. " << ajaysprofit << "/- \n";
            }
            else {
                    cout << "Ajay invested a total of Rs. " << totalPaid << "/- \n";
                    cout << "The current value of Ajay's land is: Rs. " << laterlandPrice << "/- \n\n";
                    cout << "Hence, Ajay made a loss of Rs. -" << ajaysloss << "/- \n\n";
                    cout << "Venu earned a deposit of Rs. " << initialdeposit << "/- \n";
                    cout << "and got a total of Rs. " << totalPaid << "/- \n";
                    cout << "and made a profit of Rs. " << ajaysloss << "/- \n";
            }
            break;

        case 'Y':
            if(laterlandPrice > currentlandPrice){

                    cout << "Ajay invested a total of Rs. " << totalPaid << "/- \n\n";
                    cout << "The current value of Ajay's land is: Rs. " << laterlandPrice << "/- \n\n";

                    cout << "Hence, Ajay made a profit of Rs. " << ajaysprofit << "/- \n\n";
                    cout << "Venu earned a deposit of Rs. " << initialdeposit << "/- \n";
                    cout << "and got a total of Rs. " << totalPaid << "/- \n";
                    cout << "and made a notional loss of Rs. " << ajaysprofit << "/- \n";
            }
            else if ( currentlandPrice == laterlandPrice){

                    cout << "Ajay invested a total of Rs. " << totalPaid << "/- \n";
                    cout << "The current value of Ajay's land is: Rs. " << laterlandPrice << "/- \n\n";

                    cout << "Hence, Ajay paid an extra of Rs. " << ajaysloss << "/- \n\n";
                    cout << "Venu earned a deposit of Rs. " << initialdeposit << "/- \n";
                    cout << "and got a total of Rs. " << totalPaid << "/- \n";

            }
            else if( laterlandPrice == totalPaid){
                    cout << "Ajay invested a total of Rs. " << totalPaid << "/- \n";
                    cout << "The current value of Ajay's land is: Rs. " << laterlandPrice << "/- \n\n";
                    cout << "Hence, Ajay neither earned nor lost any money.\n\n";
                    cout << "Venu earned a deposit of Rs. " << initialdeposit << "/- \n";
                    cout << "and got a total of Rs. " << totalPaid << "/- \n";
                    cout << "and made a notional loss of Rs. " << ajaysprofit << "/- \n";
            }
            else {
                    cout << "Ajay invested a total of Rs. " << totalPaid << "/- \n";
                    cout << "The current value of Ajay's land is: Rs. " << laterlandPrice << "/- \n\n";
                    cout << "Hence, Ajay made a loss of Rs. -" << ajaysloss << "/- \n\n";
                    cout << "Venu earned a deposit of Rs. " << initialdeposit << "/- \n";
                    cout << "and got a total of Rs. " << totalPaid << "/- \n";
                    cout << "and made a profit of Rs. " << ajaysloss << "/- \n";
            }
            break;

        case 'n':
            cout << "Ajay pays Rs. " << initialdeposit << "/- to Venu\n";
            cout << "for the land of value Rs " << currentlandPrice << "/- \n\n";
            cout << "Hence, Venu earns deposit of Rs. " << initialdeposit << "/- \n";
            cout << "and Ajay loses the same amount.\n";
            break;

        case 'N':
            cout << "Ajay pays Rs. " << initialdeposit << "/- to Venu\n";
            cout << "for the land of value Rs " << currentlandPrice << "/- \n\n";
            cout << "Hence, Venu earns deposit of Rs. " << initialdeposit << "/- \n";
            cout << "and Ajay loses the same amount.\n";
            break;

        default:
            cout << "Wrong character entered.\n";
        }


    return 0;
}
