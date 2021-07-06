#include <iostream>
using namespace std;

class Construct
{
    private:
        int a,b;
    public:
        Construct();
        Construct(int, int);
        Construct(Construct&);
        void display();
};

Construct::Construct()
{
    a = 0;
    b = 0;
}

Construct::Construct(int x, int y)
{
    a = x;
    b = y;
}

Construct::Construct(Construct &c)
{
    a = c.a;
    b = c.b;
}

void Construct::display()
{
    cout << "a = "<< a <<" and b = "<< b << endl;
}

main()
{
    Construct i;
    Construct j(13,1920);
    Construct k(j);

    i.display();
    j.display();
    k.display();
}