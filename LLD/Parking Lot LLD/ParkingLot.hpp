#ifndef parkinglot_hpp
#define parkinglot_hpp

#include <vector>
#include <map>
#include "ParkingSlot.hpp"

class ParkingLot
{
    std::vector<ParkingSlot *> slots;
    std::map<std::string, ParkingSlot *> occupiedSlots; // licenseNumber,parkingslot obj
    int capacity;
    int availableSlots;
    ParkingSlot *findAvailableSlot(const Vehicle *vehicle);

public:
    ParkingLot(int numCompact, int numRegular, int numLarge);
    ~ParkingLot();

    virtual int getCapacity();
    virtual int getAvailableSlots();

    virtual bool parkVehicle(Vehicle *vehicle);
    virtual Vehicle *removeVehicle(const std::string &licenseNum);
    virtual ParkingSlot *findVehicle(const std::string &licenseNum);

    virtual void displayInfo();
    virtual void displayOccupancy();
};

#endif