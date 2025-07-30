#include <iostream>
using namespace std;

class ClassName_A
{
public:
    void display()
    {
        cout << "Display from class A" << endl;
    }
};

class ClassName_B
{
public:
    void display()
    {
        cout << "Display from class B" << endl;
    }
};

class C : public ClassName_A, public ClassName_B
{
    // Inherits display() from both A and B — causes ambiguity
};

int main()
{
    C obj;

    // ❌ This line causes ambiguity:
    // obj.display();  // ❗ Error: request for member ‘display’ is ambiguous

    // ✅ Solution: Use scope resolution to specify which version to call
    obj.ClassName_A::display(); // Output: Display from class A
    obj.ClassName_B::display(); // Output: Display from class B

    return 0;
}
