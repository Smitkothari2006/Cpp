/* 📘 Problem Statement:
Create class Father and Mother, both with methods.
Derive class Child from both and call both methods.	*/
#include <iostream>
using namespace std;

class Father
{
public:
    void showFather()
    {
        cout << "I am Father" << endl;
    }
};

class Mother
{
public:
    void showMother()
    {
        cout << "I am Mother" << endl;
    }
};

class Child : public Father, public Mother
{
    // Inherits both showFather and showMother
};

int main()
{
    Child c;
    c.showFather();
    c.showMother();
    return 0;
}
