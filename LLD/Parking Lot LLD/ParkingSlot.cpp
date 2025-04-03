#include "ParkingSlot.hpp"
#include <iostream>
using namespace std;

ParkingSlot::ParkingSlot(int slotNumber, SlotType type)
{
    this->slotNumber = slotNumber;
    this->type = type;
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
    case VehicleType::CAR:
        return this->getType() != SlotType::COMPACT;
    case VehicleType::BUS:
    case VehicleType::TRUCK:
        return this->getType() == SlotType::LARGE;
    }

    return false;
}

bool ParkingSlot::parkVehicle(Vehicle *vehicle)
{
    if (!available || !canFitVehicle(vehicle))
        return false;

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
    cout << "Slot " << slotNumber << " (";
    switch (type)
    {
    case SlotType::COMPACT:
        cout << "Compact";
    case SlotType::REGULAR:
        cout << "Regular";
    case SlotType::LARGE:
        cout << "Large";
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