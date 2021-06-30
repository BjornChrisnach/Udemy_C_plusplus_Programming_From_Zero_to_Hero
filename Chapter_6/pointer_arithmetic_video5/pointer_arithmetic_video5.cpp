// Program using pointers and arrays and pointr arithmetic
#include <iostream>
using namespace std;

int main()
{
    int a[10], b[10], *p, *q, i;
    for(i = 0; i < 3 ; i++)
    {
        cout << "\n\tENTER THE ELEMENT FOR FIRST SET : ";
        cin >> a[i];
    }
    p = a; // or p = &a[0];
    for(i = 0 ; i < 3 ; i++)
    {
        cout << "\n\tENTER THE ELEMENT FOR THE SECOND SET : ";
        cin >> b[i];
    }
    q = b;
    cout << "\n\tThe adress of a is ... "<<p;
    cout << "\n\tThe adress of a is ... "<<a;
    cout << "\n\tThe adress of b is ... "<<q;
    cout << "\n\tThe adress of b is ... "<<b;
    // p arithmetic
    cout << "\n\n\tVALUE AT P THAT IS A[0] : " << *p;
    p++;
    cout << "\n\tVALUE AT P+1 THAT IS A[1] : " << *p;
    // q arithmetic
    cout << "\n\n\tVALUE AT Q THAT IS B[0] : " << *q;
    q++;
    cout << "\n\tVALUE AT Q+1 THAT IS B[1] : " << *q;
    // p arithmetic
    p = a;
    p += 2;
    cout << "\n\n\tVALUE AT P+2 THAT IS A[2] : " << *p;
    p -= 2;
    cout << "\n\tVALUE AT P THAT IS A[0] : " << *p;
    // p and q arithmetic
    p = a; q = b;
    cout << "\n\n\tVALUE OF P+Q : " << (*p) + (*q);
    cout << "\n\tVALUE OF P-Q : " << (*p) - (*q);
    cout << "\n\tVALUE OF P*Q : " << (*p) * (*q);
    
    return 0;
}