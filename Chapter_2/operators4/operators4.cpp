/** Demonstrating Bitwise operators */
#include<iostream>
using namespace std;

int main()
{
    int i,j,x,a,b;
    int bitwiseOpp;
    a =4;
    b =5;


    cout << "\n\nBitwise AND"<<endl;
	cout << "i\tj\ti&j"<<endl;
	
	for(i=0;i<=1;i++)
	{
	    for(j=0;j<=1;j++)
		{
            bitwiseOpp = i&j;
		    cout <<i<<"\t"<<j<<"\t"<<bitwiseOpp<<endl;
        }
	}
    cout << "\n\nBitwise OR" << endl;
	cout << "i\tj\ti|j"<<endl;

	for(i=0;i<=1;i++)
	{
	    for(j=0;j<=1;j++)
		{
            bitwiseOpp = i|j;
		    cout <<i<<"\t"<<j<<"\t"<<bitwiseOpp<<endl;
        }
	}
    cout << "\n\nBitwise NOT" << endl;
	cout << "i\t!i"<<endl;

	for(i=0;i<=1;i++)
	{
        bitwiseOpp = !i;
		cout <<i<<"\t"<<bitwiseOpp << endl;
    }

    cout << "\n\nBitwise XOR" << endl;
	cout << "i\tj\ti^j"<<endl;

	for(i=0;i<=1;i++)
	{
	    for(j=0;j<=1;j++)
		{
            bitwiseOpp = i^j;
		    cout <<i<<"\t"<<j<<"\t"<<bitwiseOpp << endl;
        }
	}
    cout << "\n\nBITWISE SHIFT RIGHT"<<endl; // division
    
	x=20;
    
    bitwiseOpp = x>>1;
    cout << "\nx = "<<x<<"\nx>>1 = "<<bitwiseOpp<<endl;
    bitwiseOpp = x>>2;
    cout << "x>>2 = "<<bitwiseOpp<<endl;

	cout<<"\n\nBITWISE SHIFT LEFT"<<endl; //multiplication

	x=20;

    bitwiseOpp = x<<1;
    cout << "\nx = "<<x<<"\nx<<1 = "<<bitwiseOpp<<endl;
    bitwiseOpp = x<<2;
    cout << "x<<2 = "<<bitwiseOpp<<endl;

    bitwiseOpp = a&b;
    cout << "\nBitwise AND of "<<a<<" and "<<b<<" is "<<bitwiseOpp<<endl;
    bitwiseOpp = a|b;
    cout << "Bitwise OR of "<<a<<" and "<<b<<" is "<<bitwiseOpp<<endl;
    bitwiseOpp = a^b;
    cout << "Bitwise XOR of "<<a<<" and "<<b<<" is "<<bitwiseOpp<<endl;
    bitwiseOpp = ~b;
    cout << "Bitwise NOT of "<<b<<" is "<<bitwiseOpp<<endl;

	return(0);
}
