/*Create class Vehicle with a method drive(). 
Derive classes Car and Bike from Vehicle. */
#include <iostream>
using namespace std;

class Vehicle{
    public:
        void drive(){
            cout<<"I Love to DRIVE \n";
        }
};
class Car: public Vehicle{
    public:
        void drivecar(){
            cout<<"I Love to drive CAR \n";
        }
};
class Bike: public Vehicle{
    public:
        void drivebike(){
            cout<<"I Love to drive BIKE \n";
        }
};
int main() 
{
    Car c1;
    Bike b1;
    cout<<endl;
    c1.drive();
    c1.drivecar();
    cout<<endl;
    b1.drive();
    b1.drivebike();
    return 0;
}