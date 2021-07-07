#include <iostream>
using namespace std;

class rational
{
    private:
        int num, den;
    public:
        rational()
        {
            num = 0;
            den = 1;
        }
        rational(int a, int b)
        {
            num = a;
            den = b;
        }

        void getData(int, int);
        rational operator + (rational);
        rational operator - (rational);
        rational operator * (rational);
        rational operator / (rational);
        void display();
};

void rational::getData(int x, int y)
{
    num = x;
    den = y;
    cout << "INPUT\n";
    cout << "\n" << num << "\n-\n";
    cout << den << endl;
}

rational rational::operator + (rational r)
{
    rational temp;
    temp.num = (num * r.den) + (den * r.num);
    temp.den = (den * r.den);
    return temp;
}

rational rational::operator - (rational s)
{
    rational temp;
    temp.num = (num * s.den) - (den * s.num);
    temp.den = (den * s.den);
    return temp;
}

rational rational::operator * (rational r)
{
    rational temp;
    temp.num = (num * r.num);
    temp.den = (den * r.den);
    return temp;
}

rational rational::operator / (rational s)
{
    rational temp;
    temp.num = (num * s.den);
    temp.den = (den * s.num);
    return temp;
}

void rational::display()
{
    cout << "RESULT IS :";
        cout << "\n" << num << "\n--\n";
    cout << den << endl;
}

main()
{
    rational a, b, c;
    a.getData(2,3);
    b.getData(4,5);
    c = a + b;
    cout << "ADDITION\n";
    c.display();
    c = a - b;
    cout << "SUBSTRACCTION\n";
    c.display();
    c = a * b;
    cout << "MULTIPLICATION\n";
    c.display();
    c = a / b;
    cout << "DIVISION\n";
    c.display();
}