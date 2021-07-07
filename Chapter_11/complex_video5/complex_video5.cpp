#include <iostream>
using namespace std;

class Complex
{
    private:
        float real;
        float imag;
    public:
        Complex(): real(0), imag(0){ }
        // void input();
        friend Complex operator - (Complex, Complex);
        friend Complex operator + (Complex, Complex);
        friend istream& operator >> (istream& in, Complex& C);
        friend ostream& operator << (ostream& out, Complex C);        
        // void output();
};

istream& operator >> (istream& in, Complex& C)
{
    cout << "Enter real and imaginary parts respectively: ";
    in >> C.real;
    in >> C.imag;

    return in;
}

// void Complex::input()
// {
//     cout << "Enter real and imaginary parts respectively: ";
//     cin >> real;
//     cin >> imag;
// }

//operator overloading
Complex operator - (Complex c1, Complex c2)
{
    Complex temp;
    temp.real = c1.real - c2.real;
    temp.imag = c1.imag - c2.imag;

    return temp;
}
        
Complex operator + (Complex c1, Complex c2)
{
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;

    return temp;
}

ostream& operator << (ostream& out, Complex C)
{
    if(C.imag < 0)
    {
        out << "Output Complex number: "<< C.real << C.imag << "i" << endl;
    }
    else
    {
        out << "Output Complex number: "<< C.real << "+" << C.imag << "i" << endl;
    }
    return out;
}
// void Complex::output()
// {
//     if(imag < 0)
//     {
//         cout << "Output Complex number: "<< real << imag << "i" << endl;
//     }
//     else
//     {
//         cout << "Output Complex number: "<< real << "+" << imag << "i" << endl;
//     }
// }


int main()
{
    Complex c1, c2, result;

    cout << "Enter first complex number:\n";
    // c1.input();
    cin >> c1;

    cout << "Enter second complex number:\n";
    // c2.input();
    cin >> c2;

    // in case of operator overloading of binary operators in C++ programming
    // the object on right hand side of operator is always assumed as argument
    result = c1 - c2;
    // result.output();
    cout << result;
    result = c1 + c2;
    // result.output();
    cout << result;

    return 0;
}