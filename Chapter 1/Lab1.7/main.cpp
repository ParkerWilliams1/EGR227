#include <iostream>
#include <string>
using namespace std;

#include "Car.h"

int main()
{
    Car myCar;
    cout << myCar.getMake() << " " << myCar.getModel() << " " << myCar.getPrice() << endl;
    
    Car yourCar("Honda", "CR-V", 30000);
    cout << yourCar.getMake() << " " << yourCar.getModel() << " " << yourCar.getPrice() << endl;

    return 0;
}