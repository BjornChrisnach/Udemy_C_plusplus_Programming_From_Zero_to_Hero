/// Classes - Uniform Initialization with overloaded Consructors :
/// Example of Rectangle Class
#include<iostream>
using namespace std;

class Rectangle
{
private:
    int width, height;
public:
    void set_values(int, int);
    int Area() { return width * height;} // inline
};

void Rectangle::set_values(int w, int h)
{
    width = w;
    height = h;
}

int main()
{
    Rectangle R1, R2, R3;
    R1.set_values(4,8);
    cout<<"Area is: "<<R1.Area()<<endl;
    R2.set_values(10,5);
    cout<<"Area is: "<<R2.Area()<<endl;
    R3.set_values(2,6);
    cout<<"Area is: "<<R3.Area()<<endl;

    return 0;
}
