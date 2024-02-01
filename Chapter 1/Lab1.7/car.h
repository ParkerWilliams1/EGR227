#ifndef CAR_H_
#define CAR_H_

#include <iostream>
#include <string>
using namespace std;

class Car {
    public:
        // FIXME: declare default constructor 
        Car();
        // FIXME: declare overloaded constructor with 3 parameters 
        Car(const string& carMake, const string& carModel, double carPrice);
        
        string getMake();
        string getModel();
        double getPrice();
    
    private:
        string make;
        string model;
        double price;
};
#endif