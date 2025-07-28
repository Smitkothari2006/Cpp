#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    int id;
    static int count; // Static data member

public:
    Employee(string n) {
        name = n;
        id = ++count; // Assign unique ID
    }

    void display() const {
        cout << "Employee Name: " << name << ", ID: " << id << endl;
    }

      // Static member function
    static void showCount() {
        cout << "Total Employees: " << count << endl;
    }
};

// Definition of static data member outside the class
int Employee::count = 0;

int main() {
    Employee e1("Alice");
    Employee e2("Bob");
    Employee e3("Charlie");

    e1.display();
    e2.display();
    e3.display();

    // Call static function without any object
    Employee::showCount();

    return 0;
}
