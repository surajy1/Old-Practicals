#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    string billfrom;
    string gstinf;
    billfrom = "SURAJ INDUSTRIES";
    gstinf = "24AAOPY2351G1HZ";

    string billto;
    string gstto;

    cout<< "Bill from: " << billfrom << endl;
      cout<< "GSTIN No.: " << gstinf << endl;

    cout<< endl;

    cout<< "Bill to: ";
     getline(cin, billto);
      cout<< "GSTIN No.: ";
       getline(cin, gstto);

    string pdesc;
    string hsn;
    int qty;
    string units;
    float rate;
    double cgst, sgst;

    cout<< "Description of product(s): ";
     getline(cin, pdesc);

    cout<< "HSN code: ";
       cin>>hsn;

    cout<< "Qty: ";
       cin>>qty;

    cout<< "Unit: ";
       cin>>units;


    cout<< "Rate: ";
       cin>>rate;

         double txval;
         txval = qty*rate;
         cout<< "Taxable Value: "<< txval <<endl;

    cout<< "ADD CGST%: ";
       cin>>cgst;
       sgst=cgst;
    cout<< "ADD SGST%: " << sgst << endl;

                  double cgs1, sgs1;
                  cgs1 = (cgst*txval)/100;
                  sgs1 = (sgst*txval)/100;
                    cout<< "GCST: " << cgs1 << endl;
                    cout<< "SGST: " << sgs1 << endl;

      double tval;
      tval = txval+cgs1+sgs1;
      cout<< "Total Value: " << tval <<endl;



    return 0;
}
