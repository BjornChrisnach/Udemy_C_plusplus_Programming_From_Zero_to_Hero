#include <iostream>
using namespace std;

class Complex
{
    private:
        float real;
        float imag;
    public:
        Complex(): real(0), imag(0){ }
        void input();
        friend Complex operator - (Complex, Complex);
        friend Complex operator + (Complex, Complex);
        void output();
};

void Complex::input()
{
    cout << "Enter real and imaginary parts respectively: ";
    cin >> real;
    cin >> imag;
}

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

void Complex::output()
{
    if(imag < 0)
    {
        cout << "Output Complex number: "<< real << imag << "i" << endl;
    }
    else
    {
        cout << "Output Complex number: "<< real << "+" << imag << "i" << endl;
    }
}


int main()
{
    Complex c1, c2, result;

    cout << "Enter first complex number:\n";
    c1.input();

    cout << "Enter second complex number:\n";
    c2.input();

    // in case of operator overloading of binary operators in C++ programming
    // the object on right hand side of operator is always assumed as argument
    result = c1 - c2;
    result.output();
    result = c1 + c2;
    result.output();

    return 0;
}