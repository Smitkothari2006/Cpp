#include <iostream>
using namespace std;

class Box
{
private:
    float length;
    friend void printBoxLength(Box b1);

public:
    Box()
    {
        length = 100;
    }
};

void printBoxLength(Box b1)
{
    cout << "Length of Box is: " << b1.length << "cm\n";
}

int main()
{
    Box b1;
    printBoxLength(b1);

    return 0;
}