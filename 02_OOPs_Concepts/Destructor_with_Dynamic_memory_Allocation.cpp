#include <iostream>
using namespace std;

class Number
{
private:
    float *ptr;

public:
    Number(float value)
    {
        ptr = new float;
        *ptr = value;
        cout << "Memory allocated for value " << *ptr << endl;
    }

    ~Number()
    {
        cout << "Releasing memory for value " << *ptr << endl;
        delete ptr;
    }

    void show()
    {
        cout << "Value: " << *ptr << endl;
    }
};

int main()
{
    Number n1(100.99);
    n1.show();

    return 0;
}
