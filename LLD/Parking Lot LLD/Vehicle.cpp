#include "Vehicle.hpp"
#include <iostream>
using namespace std;

Vehicle::Vehicle(std::string licenseNum, VehicleType type, std::string color)
{
    this->licenseNum = licenseNum;
    this->type = type;
    this->color = color;
}

std::string Vehicle::getLicenseNum()
{
    return this->licenseNum;
}
std::string Vehicle::getColor()
{
    return this->color;
}
VehicleType Vehicle::getType() const
{
    return this->type;
}
void Vehicle::displayInfo()
{
    cout << "Vehicle: " << color << " ";
    switch (type)
    {
    case VehicleType::CAR:
        cout << "Car";
        break;
    case VehicleType::MOTORCYCLE:
        cout << "MotorCycle";
        break;
    case VehicleType::TRUCK:
        cout << "Truck";
        break;
    case VehicleType::BUS:
        cout << "Bus";
    }
    cout << " (License: " << licenseNum << ")" << endl;
}