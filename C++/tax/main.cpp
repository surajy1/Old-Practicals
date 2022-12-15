#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "TAX SLAB" << endl;

    string name;
    cout << "Name: ";
    getline(cin, name);
    cout << endl;

    int age;
    cout << "Age: ";
    cin >> age;
    cout << endl;

    int taxslabyear;
    cout << "Which tax slab do you prefer for filling your taxes for AY 2020-21? \n\n";
    cout << "Press 1 for existing tax slab or press 2 for new tax slab: ";
    cin >> taxslabyear;
    cout << endl;

    //MENTIONED DETAILS
    cout << "Below mentioned is the details entered by you.\n";
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl << endl;
    if(taxslabyear == 1){
        cout << "Choosen tax slab is for existing one.\n";
    } else{
        cout << "Choosen tax slab is for the new tax slab.\n";
    }
    cout << endl;

    float income;
    cout << "Total Income: ";
    cin >> income;
    cout << endl;

    cout << "According to the your personal details, the details of your income tax are as follows: \n";

    float taxpayble;
    float surcharge;
    if(taxslabyear == 1){
       if (age < 60){
        if(income <= 25e4){
            taxpayble = 0;
            cout << "Total tax payble: Rs. " << taxpayble << "/- ." << endl;
            cout << "You don't have to pay any taxes.\n";
        }
        else if(income > 25e4 && income < 5e5){
            taxpayble = (5*income)/100;
            cout << "Total tax payble: Rs. " << taxpayble << "/- ." << endl;
        }
        else if(income > 5e5 && income < 1e6){
                float income1 = 1e5;
            taxpayble = max( income1, (20*income)/100) + 12500;
            cout << "Total tax payble: Rs. " << taxpayble << "/- ." << endl;
        }
        else if(income > 1e6 && income <5e6){
            taxpayble = ((30*income)/100) + 1e5 + 12500;
            cout << "Total tax payble: Rs. " << taxpayble << "/- ." << endl;
        }
        else if(income > 5e6 && income <1e7){
            taxpayble = ((30*income)/100) + 1e5 + 12500;
            surcharge = (10*taxpayble)/100;
            cout << "Surcharge: Rs. " << surcharge << "/- . \n";
            cout << "Total tax(+ surcharge) payble: Rs. " << taxpayble + surcharge << "/- ." << endl;
        }
        else {
            taxpayble = ((30*income)/100) + 1e5 + 12500;
            cout << "Total tax: Rs. " << taxpayble << "/- ." << endl;
            surcharge = (15*taxpayble)/100;
            cout << "Surcharge: Rs. " << surcharge << "/- . \n";
            cout << "Total tax(+ surcharge) payble: Rs. " << taxpayble + surcharge << "/- ." << endl;
        }

      } else{
          cout << "Dunno!";
      }
    }

    else if (taxslabyear == 2){
        if(income < 25e4){
            taxpayble = 0;
            cout << "Total tax payble: Rs. " << taxpayble << "/- ." << endl;
            cout << "You don't have to pay any taxes.\n";
        }
        else if(income > 25e4 && income < 5e5){
            taxpayble = (5*income)/100;
            cout << "Total tax payble: Rs. " << taxpayble << "/- ." << endl;
        }
        else if(income > 5e5 && income < 75e4){
            taxpayble = (10*income)/100;
            cout << "Total tax payble: Rs. " << taxpayble << "/- ." << endl;
        }
        else if(income > 75e4 && income < 1e6){
            taxpayble = (15*income)/100;
            cout << "Total tax payble: Rs. " << taxpayble << "/- ." << endl;
        }
        else if(income > 1e6 && income < 125e4){
            taxpayble = (20*income)/100;
            cout << "Total tax payble: Rs. " << taxpayble << "/- ." << endl;
        }
        else if(income > 125e4 && income < 15e5){
            taxpayble = (25*income)/100;
            cout << "Total tax payble: Rs. " << taxpayble << "/- ." << endl;
        }
        else{
            taxpayble = (30*income)/100;
            cout << "Total tax payble: Rs. " << taxpayble << "/- ." << endl;
        }
    }





    return 0;
}
