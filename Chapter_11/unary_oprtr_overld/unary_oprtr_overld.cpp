#include <iostream>
using namespace std;

class Test
{
    private:
        int count;

    public:
        Test(): count(4){}

        void operator ++()
        {
            count = count + 1;
        }

        void display() { cout << "Count: " << count; }
};

int main()
{
    Test t;
    // this calls "function void operator ++()" function
    ++t;
    t.display();

    return 0;
}