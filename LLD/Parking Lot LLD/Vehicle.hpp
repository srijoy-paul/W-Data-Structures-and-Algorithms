#include <string>

enum class VehicleType
{
    CAR,
    MOTROCYCLE,
    TRUCK,
    BUS
};

class Vehicle
{
    std::string licensePlate;
    VehicleType type;
    std::string color;

public:
    Vehicle(std::string licenselate, VehicleType type, std::string color);
    std::string getLicencePlate();
    std::string getColor();
    VehicleType getType();
    void displayInfo();
};