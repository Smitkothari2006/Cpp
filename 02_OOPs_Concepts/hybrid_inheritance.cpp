/* Create a base class Device with a method powerOn(). Derive Phone and Camera from Device. Then, create a class Smartphone that inherits from both Phone and Camera. Demonstrate how Smartphone can access powerOn() using virtual inheritance to avoid ambiguity.	*/
#include <iostream>
using namespace std;

class Device {
public:
    void powerOn() {
        cout << "Device is powered on" << endl;
    }
};

// Virtual inheritance to avoid diamond problem
class Phone : virtual public Device {
public:
    void makeCall() {
        cout << "Making a phone call..." << endl;
    }
};

class Camera : virtual public Device {
public:
    void takePhoto() {
        cout << "Taking a photo..." << endl;
    }
};

class Smartphone : public Phone, public Camera {
    // Inherits Device via Phone and Camera
};

int main() {
    Smartphone s;
    s.powerOn();     // From Device
    s.makeCall();    // From Phone
    s.takePhoto();   // From Camera

    return 0;
}
