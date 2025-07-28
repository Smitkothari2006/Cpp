#include <iostream>
using namespace std;

class Binary
{
    string bin;

public:
    void read()
    {
        cout << "Enter a Binary Number: " << endl;
        cin >> bin;
        check_bin();
    }
    void check_bin();
} b1;

void Binary::check_bin()
{
    int flag = 0;
    for (int i = 0; i < bin.length(); i++)
    {
        if (bin.at(i) != '0' && bin.at(i) != '1')
        {

            flag++;
        }
    }
    if (flag == 0)
    {
        cout << " Correct Binary Format" << endl;
    }
    else
    {
        cout << " InCorrect Binary Format" << endl;
    }
    
}

int main()
{
    b1.read();
}