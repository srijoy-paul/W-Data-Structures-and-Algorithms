#ifndef parkingspot_hpp
#define parkingspot_hpp

#include "Vehicle.hpp"

enum class SlotType
{
    COMPACT,
    REGULAR,
    LARGE
};

class ParkingSlot
{
    int slotNumber;
    SlotType type;
    Vehicle *vehicle;
    bool available;

public:
    ParkingSlot(int slotNumber, SlotType type);

    virtual int getSlotNumber();
    virtual SlotType getType();
    virtual Vehicle *getVehicle();
    bool isAvailable();

    bool canFitVehicle(const Vehicle *vehicle);
    bool parkVehicle(Vehicle *vehicle);
    Vehicle *removeVehicle();
    void displayInfo();
};

#endif