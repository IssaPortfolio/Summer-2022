

#include <iostream>
using namespace std;

enum body_styles {CARGO_VAN, COVERTIBLE, COUPE, HATCHBACK, MINIVAN,
                 PASSENGER_VAN, PICKUP_TRUCK, SUV, SEDAN, WAGON};

struct Car {
    int year;
    string make;
    string model;
    body_styles body;
    string color;
    double msrp;
};

int main()
{
    // An array of two instance's of unit's of Car
    Car myCars[2] =
    {
        {2015, "Toyota", "RAV4", SUV, "Red", 24500.00},
        {2014, "Chevy", "Malibu", SEDAN, "White", 23000.00}
    };
}



