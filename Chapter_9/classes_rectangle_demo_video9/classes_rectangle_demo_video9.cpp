/// Classes - Uniform Initialization with overloaded Consructors :
/// Example of Rectangle Class
#include<iostream>
using namespace std;

class Rectangle
{
private:
    int width, height;
public:
    Rectangle(): width(0), height(0){}
    // {
    //     width = 0;
    //     height = 0;
    // }
    Rectangle(int, int);
    Rectangle(int t)
    {
        width = t;
        height = t;
    }

    Rectangle(Rectangle& r);
    int Area() { return width * height;} // inline
};

Rectangle::Rectangle(int w, int h)
{
    width = w;
    height = h;
}

Rectangle::Rectangle(Rectangle& r)
{
    width = r.width;
    height = r.height;
}

int main()
{
    Rectangle R;
    Rectangle R1(3,4);
    Rectangle R2(R1);
    Rectangle R3(10);
    Rectangle R4{10,4};
    Rectangle R5 = {6,4}; 

    cout<<"Area using default constructor: "<<R.Area()<<endl;
    cout<<"Area using parameterized constructor: "<<R1.Area()<<endl;
    cout<<"Area using copy constructor: "<<R2.Area()<<endl;
    cout<<"Area using overloaded constructor, with one parameter: "<<R3.Area()<<endl;
    cout<<"Area using overloaded constructor, with {}: "<<R4.Area()<<endl;
    cout<<"Area using overloaded constructor, with = and {}: "<<R5.Area()<<endl;
    
    return 0;
}
