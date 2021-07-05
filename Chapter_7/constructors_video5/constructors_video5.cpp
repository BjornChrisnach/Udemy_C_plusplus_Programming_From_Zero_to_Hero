#include <iostream>
using namespace std;

int main()
{
    string s0("Welcome to Strings");
    string s1;
    string s2(s0);
    string s3 (s0, 8, 4);
    string s4 ("A sequence of characters");
    string s5 ("Another sequence of characters", 12);
    string s6 (10, 'S');
    string s7 (10, 42);
    string s8 (s0.begin(), s0.begin() + 7);

    cout << "S0 : " << s0 << endl;
    cout << "S1 : " << s1 << endl;
    cout << "S2 : " << s2 << endl;
    cout << "S3 : " << s3 << endl;
    cout << "S4 : " << s4 << endl;
    cout << "S5 : " << s5 << endl;
    cout << "S6 : " << s6 << endl;
    cout << "S7 : " << s7 << endl;
    cout << "S8 : " << s8 << endl;

    return 0;
}