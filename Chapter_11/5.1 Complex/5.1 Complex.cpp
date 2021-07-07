/// Program to implement +, - and << and >> operator overloading

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

         Complex operator - (Complex c)
       {
           Complex temp;
           temp.real = real - c.real;
           temp.imag = imag - c.imag;

           return temp;
       }
       Complex operator + (Complex c)
       {
           Complex temp;
           temp.real = real + c.real;
           temp.imag = imag + c.imag;

           return temp;
       }
   //    Complex operator - (Complex);
     //  Complex operator + (Complex);
       friend istream& operator >> (istream& in, Complex& C);
       friend ostream& operator << (ostream& out, Complex C);
       void output();
};

istream& operator >> (istream& in, Complex& C)
{
           cout << "Enter real and imaginary parts respectively: ";
           in >> C.real;
           in >> C.imag;
    return in;
}

ostream& operator << (ostream& out, Complex C)
{
   if(C.imag < 0)
               out << "Output Complex number: "<< C.real << C.imag << "i"<<endl;
           else
               out << "Output Complex number: " << C.real << "+" << C.imag << "i"<<endl;
        return out;
}
 void Complex::input()
       {
           cout << "Enter real and imaginary parts respectively: ";
           cin >> real;
           cin >> imag;
       }

       /// Operator overloading


      void Complex::output()
       {
           if(imag < 0)
               cout << "Output Complex number: "<< real << imag << "i"<<endl;
           else
               cout << "Output Complex number: " << real << "+" << imag << "i"<<endl;
       }

int main()
{
    Complex c1, c2, result;

    cout<<"Enter first complex number:\n";
  //  c1.input();
    cin >> c1;

    cout<<"Enter second complex number:\n";
 //   c2.input();
    cin >> c2;
    // In case of operator overloading of binary operators in C++ programming,
    // the object on right hand side of operator is always assumed as argument by compiler.
    result = c1 - c2;
 //   result.output();
    cout<<result;

    result = c1 + c2;
  //  result.output();
    cout<<result;

    return 0;
}
