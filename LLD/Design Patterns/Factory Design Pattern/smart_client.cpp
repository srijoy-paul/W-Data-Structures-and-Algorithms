#include "vehicle_factory.hpp"
#include <iostream>
using namespace std;

int main()
{
    string vehicleType;
    cin >> vehicleType;

    Vehicle *vehicle = VehicleFactory::getVehicle(vehicleType); // without creating vehicleFactory class as it's static
    vehicle->createVehicle();
    return 0;
}
