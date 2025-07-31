#include <iostream>
using namespace std;

int main() {
    int* p = new int(10);      // allocate int
    cout << *p << endl;        // output: 10

    delete p;                  // free memory
    p = nullptr;               // avoid dangling pointer

    int* arr = new int[5];     // allocate array
    for (int i = 0; i < 5; i++)
        arr[i] = i;

    for (int i = 0; i < 5; i++)
        cout << arr[i] << " "; // output: 0 1 2 3 4

    delete[] arr;              // free array memory
    arr = nullptr;

    return 0;
}
