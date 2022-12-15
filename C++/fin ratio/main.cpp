#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    string cname;
          cout<< "Name of the company: ";
                getline(cin, cname);
                cout<<endl;

            cout<< "Basic Inputs" << endl;
            cout<<endl;

            double oprevn, fincost, dae, texp, empbexp, pat, trevn, tasset, tequity, tequityminor,
                   ttaxexp, pbt, stbrw, ltbrw, topasset, curasset, curlblt, netsale,
                   costmc, pursit, powfuel, stsppart, inventory, trdreceive, cnbbal,
                   tnumshr, fval, numyrcagr, resnsurp, cffo, capex;
            double opexpense, shrhldeq, tassetop;

                   cout<< "> Operating Revenue: ";
                   cin>> oprevn;

                   cout<< "> Finance Costs: ";
                   cin>> fincost;

                   cout<< "> Depreciation and Amortization expense: ";
                   cin>> dae;

                   cout<< "> Total Expenses: ";
                   cin>> texp;

                   opexpense = texp - fincost - dae;
                   cout<< "  Operating Expense: " << opexpense <<endl;
                   cout<<endl;
                   cout<<endl;

                   cout<< "> Profit for the year (PAT): ";
                     cin>> pat;

                   cout<< "> Total Revenues: ";
                       cin>>  trevn;

                   cout<< "> Total Assets: ";
                       cin>>  tasset;

                   cout<< "> Total Equity: ";
                       cin>>  tequity;

                   cout<< "> Total Equity (minus minority or non-controlling interests): ";
                       cin>>  tequityminor;

                   cout<< "> Total Tax Expense: ";
                       cin>>  ttaxexp;

                   cout<< "> Profit before Tax: ";
                       cin>>  pbt;

                   cout<< "> Short term borrowing: ";
                       cin>>  stbrw;

                   cout<< "> Long term borrowing: ";
                       cin>>  ltbrw;

                   shrhldeq = tequity;
                   cout<< "  Shareholders equity : "<< shrhldeq <<endl;

                   cout<< "> Total Operating Assets(in non-current assets): ";
                       cin>> topasset;

                   cout<< "> Current Assets: ";
                       cin>> curasset;

                   cout<< "> Current Liabilities: ";
                       cin>> curlblt;

                   cout<< "> Net Sales (of Products)(in revenue from operations): ";
                       cin>> netsale;

                   cout<< "> Cost of materials consumed: ";
                       cin>> costmc;

                   cout<< "> Purchase of Stock-in-Trade: ";
                       cin>> pursit;

                   cout<< "> Power and Fuel (from other expenses): ";
                       cin>> powfuel;

                   cout<< "> Stores and spare parts(from other expenses): ";
                       cin>> stsppart;

                   cout<< "> Inventories: ";
                       cin>> inventory;

                   cout<< "> Trade receivables: ";
                       cin>> trdreceive;

                   cout<< "> Cash and bank balances: ";
                       cin>> cnbbal;

                   cout<< "> Total Number of Shares: ";
                       cin>> tnumshr;

                   cout<< "> Face Value: ";
                       cin>> fval;

                   cout<< "> Number of years in CAGR: ";
                       cin>> numyrcagr;

                   tassetop=topasset;
                   cout<< "  Total Assets(Operating): "<< tassetop <<endl;

                   cout<< "> Reserves and Surplus(or Other Equity): ";
                       cin>> resnsurp;

                   cout<< "> Cash Flow from operations(Net cash flow from operations): ";
                       cin>> cffo;

                   cout<< "> Capital Expenditures(purchase of property, plant,equipment): ";
                       cin>> capex;

                   cout<< "> Employee benefits expense: ";
                       cin>> empbexp;


          cout<<endl;
          cout<< "FINANCIAL RATIOS FY20" <<endl;
          cout<<endl;

                   double empbexp1;
                   empbexp1 = (empbexp/trevn)*100;
                   cout<< "Employee benefits expense in %: " << empbexp1 << "%";
                   cout<<endl;






    return 0;
}
