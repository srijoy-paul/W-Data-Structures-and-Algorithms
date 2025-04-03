#include "ParkingSlot.hpp"
#include <iostream>
using namespace std;

ParkingSlot::ParkingSlot(int slotNumber, SlotType type)
{
    this->slotNumber = slotNumber;
    this->type = type;
    this->available = true;
}

int ParkingSlot::getSlotNumber()
{
    return this->slotNumber;
}

SlotType ParkingSlot::getType()
{
    return this->type;
}

Vehicle *ParkingSlot::getVehicle()
{
    return this->vehicle;
}

bool ParkingSlot::isAvailable()
{
    return this->available;
}

bool ParkingSlot::canFitVehicle(const Vehicle *vehicle)
{
    if (!vehicle)
        return false;

    switch (vehicle->getType())
    {
    case VehicleType::MOTORCYCLE:
        return true;
        break;
    case VehicleType::CAR:
        return type != SlotType::COMPACT;
        break;
    case VehicleType::BUS:
    case VehicleType::TRUCK:
        return type == SlotType::LARGE;
    }

    return false;
}

bool ParkingSlot::parkVehicle(Vehicle *vehicle)
{
    // cout << "park vehicle called" << endl;
    if (!this->available || !this->canFitVehicle(vehicle))
    {
        cout << "Slot not available" << endl;
        return false;
    }
    cout << "Slot avaialble\n";
    this->vehicle = vehicle;
    available = false;
    return true;
}

Vehicle *ParkingSlot::removeVehicle()
{
    if (!vehicle)
        return nullptr;

    Vehicle *removedVehicle = vehicle;
    vehicle = nullptr;
    available = true;

    return removedVehicle;
}

void ParkingSlot::displayInfo()
{
    cout << "\nSlot " << slotNumber << " (";
    switch (type)
    {
    case SlotType::COMPACT:
        cout << "Compact";
        break;
    case SlotType::REGULAR:
        cout << "Regular";
        break;
    case SlotType::LARGE:
        cout << "Large";
        break;
    }
    cout << "): " << (available ? "Available" : "Occupied");
    if (vehicle)
    {
        cout << " by ";
        vehicle->displayInfo();
    }
    else
    {
        cout << endl;
    }
}