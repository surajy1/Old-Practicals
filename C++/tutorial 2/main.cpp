#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int i = 1;
    do{
        cout << i << endl;
        i++;
    } while(i <= 10);


    /*
    //1
    //12
    //123
    //1234
    //12345
    int i=1;
         while(i<=5)
       {
            cout<< i <<"\n";

            cout << i; i++; cout << i << "\n";
            i--;

            cout << i; i++; cout << i; i++; cout << i << "\n";
            i = i - 2;

            cout << i; i++; cout << i; i++; cout << i; i++; cout << i << "\n";
            i = i - 3;

            cout << i; i++; cout << i; i++; cout << i; i++; cout << i; i++; cout << i << "\n";
            i++;

          }
          */




    /*
    //1
    //12
    //123
    //1234
    for(int i=1;i<=1;i++){
            cout << i << endl;
        for(int j=2; j<=2; j++){
                cout << i << j << endl;
                for(int k=3; k<=3; k++){
                        cout << i << j << k <<endl;
                        for(int l=4; l<=4; l++){
                            cout << i << j << k << l <<endl;
              }
            }
          }
        }
        */



    //EVEN/ODD
    /*
    int x;

    cout << "Enter an integer: ";
    cin >> x;

    string result = ( x % 2 == 0) ? " is an even number." : " is an odd number." ;

    cout << x << result;
    */


    /*
    //POINTER
    string myName = "ABC";
    string &name = myName;
    string* ptr = &myName;

    cout << name << endl;
    cout << &myName << endl;
    cout << ptr << endl;
    cout << *ptr << endl;

    *ptr = "XYZ";
    cout << ptr << endl;
    cout << *ptr << endl;
    cout << myName <<endl;
    */



    /*
    float num1, num2, num3;
    num1 = 3; num2 = 4; num3 = 5;
    cout << hypot(num1, num2) << endl;
    cout << fma(num1, num2, num3) << endl;
    cout << fmod (num2, num1) << endl;
    cout << pow(num1, num2) << endl;

    cout << max(5, 10) << endl;
    cout << sqrt(64) << endl;
    cout << round(2.6) << endl;
    cout << log(2) << endl;

    float x = 30.3, y = 21.2, z = 23.81, n = 3;
    cout << "Ceil: " << ceil(x) << " " << ceil(y) << " " << ceil(z) << " " << endl;
    cout << "Floor: " << floor(x) << " " << floor(y) << " " << floor(z) << " " << endl;
    cout << "Round: " << round(x) << " " << round(y) << " " << round(z) << endl;
    cout << fdim(x, y) << endl;
    */


    /*
    string s1 = "Hello";
    s1[0] = ' ';
    string s2 = "world!";

    string s3 = s1.append(" ").append(s2);

    cout<< s3 << endl;
    cout << "The length of the txt string is: " << s3.size() << endl;
    cout << s1[0] << endl << s1[1] << endl;

    string fullName;
    cout << "Type your full name: ";
    getline (cin, fullName);
    cout << "Your name is: " << fullName;
    */


    return 0;
}
