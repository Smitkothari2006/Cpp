// File: break_example.cpp
#include <iostream>
using namespace std;

int main() {
    cout << "BREAK Example (Stops loop when i == 3):" << endl;

    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            cout << "Breaking the loop at i = " << i << endl;
            break; // Exits the loop immediately
        }
        cout << "i = " << i << endl;
    }

    return 0;
}
