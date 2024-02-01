#include "Car.h"
#include <iostream>
#include <string>

 // FIXME: implement default constructor which sets make to DeLorean, model to "Alpha5" and price to 145000
 Car::Car() {
    make = "DeLorean";
    model = "Alpha5";
    price = 145000;
}
 // FIXME: implement overloaded constructor with 3 parameters which sets make to the 1st parameter, 
 // model to the 2nd parameter and price to the 3rd parameter
 Car::Car(const string& carMake, const string& carModel, double carPrice) {
   make = carMake;     
   model = carModel;
   price = carPrice;
}

string Car::getMake(){
    return make;
}

string Car::getModel(){
    return model;
}
double Car::getPrice(){
    return price;
}