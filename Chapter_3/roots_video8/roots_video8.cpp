// Programming Challenge & Solution - Finding the Roots and Nature of Roots
#include<iostream>
#include <math.h>
using namespace std;

int main()
{
    int determinant, a, b, c;
    float root1, root2;

    cout << "Enter 3 numbers, a, b and c: ";
    cin >> a >> b >> c;

    determinant = (b*b) - (4*a*c);

    if(determinant < 0)
    {
        cout << "Roots are imaginary"<<endl;
        exit(0);
    }
    else if(determinant == 0)
    {
        cout << "Roots are real and equal" << endl;
        root1 = root2 = -b / (2*a);
        root1 = round( root1 * 100.0 ) / 100.0;
        root2 = round( root2 * 100.0 ) / 100.0;
    }
    else
    {
        cout << "Roots are real and unequal"<<endl;
        root1 = ((-b) + sqrt(determinant)) / (2*a);
        root2 = ((-b) - sqrt(determinant)) / (2*a);
        root1 = round( root1 * 100.0 ) / 100.0;
        root2 = round( root2 * 100.0 ) / 100.0;
    }
    cout << "The roots are, root1 = "<<root1<<" and root2 = "<<root2<<endl;
    
    return 0;
}