#include <iostream>
using namespace std;

int main()
{
    int var = 5;
    // declarepointer variable
    int* pointVar;
    // store address of var
    pointVar = &var;
    // print value of var
    cout << "var = "<< var << endl;
    // print address of var
    cout << "Address of var (&var) = "<< &var << endl
        << endl;
    // print pointer pointVar
    cout << "pointVar = "<< pointVar << endl;
    // print the contnt of the address pointVar points to
    cout << "Content of the address pointed to by pointVar (*pointVar) = " << *pointVar << endl;
    int **pp;
    // store address of var
    pointVar = &var;

    pp = &pointVar;
    // print value of var
    cout << "var = " << var << endl;
    // print address of var
    cout << "Address of var (&var) = " << &var << endl
    << endl;
    cout << "Address of pointVar (&pointVar) = " << &pointVar << endl
    << endl;
    // print pointer pointVar
    cout << "pointVar = " << pointVar << endl;
    cout << "pointer to pointer = " << pp << endl;
    // print the content of the address pointVar points to
    cout << "content of the address pointed to by pointVar (*pointVar) = " << *pointVar << endl;

    return 0;
}