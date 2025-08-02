/* 📘 Problem Statement:
Create a class Box that stores length, width, and height.
Use the this pointer to assign values to data members.
Display the volume of the box.
*/

#include <iostream>
using namespace std;

class Box
{
protected:
    int length;
    int width;
    int height;

public:
    Box(int length, int width, int height)
    {
        this->length = length;
        this->height = height;
        this->width = width;
    }

    void display();
};

void Box::display()
{
    int volume = length * width * height;
    cout << "The Height of Box is " << height << endl;
    cout << "The Length of Box is " << length << endl;
    cout << "The Width of Box is " << width << endl;
    cout << "The Volume of the Box is " << volume << endl;
}

int main()
{
    Box b(10, 20, 30);
    b.display();

    return 0;
}
