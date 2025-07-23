// File: do_while_loop_example.cpp
#include <iostream>
using namespace std;

int main() {
    // DO-WHILE loop: Print numbers from 1 to 5
    cout << "DO-WHILE loop: "<<endl;
    int i = 1;
    do {
        cout << i << endl;
        i++;
    } while (i <= 5);
    cout << endl;

    return 0;
}
