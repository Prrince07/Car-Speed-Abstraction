#include <iostream>
using namespace std;


class Car {
private:
    int speed; 

public:
    void setSpeed(int s) { 
        speed = s;
    }

    void showSpeed() {   
        cout << "Speed of car: " << speed << " km/h" << endl;
    }
};

int main() {
    Car myCar;
    myCar.setSpeed(80);  
    myCar.showSpeed();   

    return 0;
}
