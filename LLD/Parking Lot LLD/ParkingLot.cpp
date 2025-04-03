#include "ParkingLot.hpp"
#include <iostream>
using namespace std;

ParkingLot::ParkingLot(int numCompact, int numRegular, int numLarge)
{
    this->capacity = numCompact + numRegular + numLarge;
    this->availableSlots = numCompact + numRegular + numLarge;
    ;

    int slotNumber = 1;

    // create compact slots
    for (int i = 0; i < numCompact; i++)
    {
        slots.push_back(new ParkingSlot(slotNumber++, SlotType::COMPACT));
    }

    // create regular slots
    for (int i = 0; i < numRegular; i++)
    {
        slots.push_back(new ParkingSlot(slotNumber++, SlotType::REGULAR));
    }

    // create large slots
    for (int i = 0; i < numLarge; i++)
    {
        slots.push_back(new ParkingSlot(slotNumber++, SlotType::LARGE));
    }
}

ParkingLot::~ParkingLot()
{
    for (auto slot : slots)
        delete slot;
}

int ParkingLot::getCapacity()
{
    return this->capacity;
}

int ParkingLot::getAvailableSlots()
{
    return this->availableSlots;
}

bool ParkingLot::parkVehicle(Vehicle *vehicle)
{
    if (!vehicle)
        return false;

    // vehicle->displayInfo();

    // check if vehicle already parked
    if (occupiedSlots.find(vehicle->getLicenseNum()) != occupiedSlots.end())
    {
        // cout << vehicle->getLicenseNum() << " already parked" << endl;
        return false;
    }

    // find available slot according to vh size
    ParkingSlot *slot = findAvailableSlot(vehicle);
    if (!slot)
    {
        // cout << "Suitable slot not available" << endl;
        return false;
    }
    if (slot->parkVehicle(vehicle))
    {
        // cout << "able to park" << endl;
        occupiedSlots[vehicle->getLicenseNum()] = slot;
        availableSlots--;
        return true;
    }
    // cout << "Unable to park vehicle from parkinglot" << endl;
    return false;
}

Vehicle *ParkingLot::removeVehicle(const string &licenseNum)
{
    auto it = occupiedSlots.find(licenseNum);
    if (it == occupiedSlots.end())
        return nullptr;

    ParkingSlot *slot = it->second;
    Vehicle *vehicle = slot->removeVehicle();
    if (vehicle)
    {
        occupiedSlots.erase(it);
    }
    return vehicle;
}

ParkingSlot *ParkingLot::findVehicle(const string &licenseNum)
{
    auto it = occupiedSlots.find(licenseNum);
    return it != occupiedSlots.end() ? it->second : nullptr;
}

ParkingSlot *ParkingLot::findAvailableSlot(const Vehicle *vehicle)
{
    for (auto slot : slots)
    {
        if (slot->isAvailable() && slot->canFitVehicle(vehicle))
            return slot;
    }
    return nullptr;
}

void ParkingLot::displayInfo()
{
    cout << "Parking lot status: " << endl;
    cout << "Total Capacity: " << capacity << endl;
    cout << "Available Slots: " << availableSlots << endl;
    cout << "Occupied Slots: " << (capacity - availableSlots) << endl;
}

void ParkingLot::displayOccupancy()
{
    cout << "Detailed Occupancy in the Parking lot:" << endl; // info/status of the slots
    for (const auto &slot : slots)
    {
        slot->displayInfo();
    }
}