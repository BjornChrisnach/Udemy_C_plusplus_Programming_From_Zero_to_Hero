/** Solution to the Programming Challenge
    to find the charges of Electricity BILL
*/
#include<iostream>
using namespace std;
int main()
{
    int unit;
    float charge;

    cout<<"Enter the Units Consumed...";
    cin>>unit;

    if(unit<0)
    {
        cout<<"Number of units cannot be less than zero";
        exit(0);
    }
    else
    {
        if(unit>=0 && unit<=200)
                charge = 0.5 * unit;
        else if(unit>201 && unit<=400)
                charge = 100 + (0.65 * (unit - 200));
        else if(unit>401 && unit<=600)
            charge = 230 + (0.8 * (unit - 400));
        else if(unit>600)
            charge = 390 + (0.9 * (unit - 600));
     }
     cout<<"The Total Charges are..."<<charge;
 return 0;
}

