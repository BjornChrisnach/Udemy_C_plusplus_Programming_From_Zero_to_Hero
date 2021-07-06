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
    Rectangle R;
    R.set_values(4,8);
    cout<<"Area is: "<<R.Area()<<endl;
    return 0;
}
