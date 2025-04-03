#include "ParkingLot.hpp"
#include <iostream>
using namespace std;

int main()
{
    // build parking lot
    ParkingLot parkingLot(5, 4, 8);
    cout << "Initial:" << endl;
    parkingLot.displayInfo();

    // create vehicles
    Vehicle *car1 = new Vehicle("JHCAR12002", VehicleType::CAR, "Red");
    Vehicle *car2 = new Vehicle("JHCAR12003", VehicleType::CAR, "Green");
    Vehicle *bike = new Vehicle("JHBK12001", VehicleType::MOTORCYCLE, "Orange");
    Vehicle *truck = new Vehicle("JHTRCK12031", VehicleType::TRUCK, "Gray");
    Vehicle *bus = new Vehicle("JHBS12021", VehicleType::BUS, "Purple");

    cout << "Parking vehicles..." << endl;

    if (parkingLot.parkVehicle(car1))
    {
        cout << "Car Parked: " << endl;
        car1->displayInfo();
    }
    else
    {
        cout << "Unable to park" << endl;
    }

    if (parkingLot.parkVehicle(bike))
    {
        cout << "Bike Parked: " << endl;
        bike->displayInfo();
    }
    else
    {
        cout << "Unable to park" << endl;
    }
    if (parkingLot.parkVehicle(truck))
    {
        cout << "Truck Parked: " << endl;
        truck->displayInfo();
    }
    else
    {
        cout << "Unable to park" << endl;
    }
    if (parkingLot.parkVehicle(bus))
    {
        cout << "Bus Parked: " << endl;
        bus->displayInfo();
    }
    else
    {
        cout << "Unable to park" << endl;
    }

    // cout << "\nCurrent Status of Parking lot: " << endl;
    cout << endl;
    parkingLot.displayInfo();
    parkingLot.displayOccupancy();

    // removing vehicle
    cout << "\n Removing vehicle JHCAR12003" << endl;
    Vehicle *removedVh = parkingLot.removeVehicle("JHCAR12003");
    if (removedVh)
    {
        cout << "Removed Successfully!";
        removedVh->displayInfo();
        delete removedVh;
    }

    // enter another vehicle
    if (parkingLot.parkVehicle(car2))
    {
        cout << "Car Parked: " << endl;
        car2->displayInfo();
    }
    else
    {
        cout << "Unable to park" << endl;
    }

    // Final Stats
    cout << "\nFinal parking lot status: " << endl;
    parkingLot.displayInfo();
    parkingLot.displayOccupancy();

    delete car2;
    delete bike;
    delete truck;
    delete bus;

    return 0;
}