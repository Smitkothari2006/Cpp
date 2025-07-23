// File: continue_example.cpp
#include <iostream>
using namespace std;

int main() {
    cout << "CONTINUE Example (Skips i == 3):" << endl;

    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            cout << "Skipping i = " << i << endl;
            continue; // Skips the rest of the loop body for this iteration
        }
        cout << "i = " << i << endl;
    }

    return 0;
}
