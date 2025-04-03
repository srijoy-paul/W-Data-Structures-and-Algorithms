#include <string>

enum class VehicleType
{
    CAR,
    MOTORCYCLE,
    TRUCK,
    BUS
};

class Vehicle
{
    std::string licenseNum;
    VehicleType type;
    std::string color;

public:
    Vehicle(std::string licenseNum, VehicleType type, std::string color);
    virtual std::string getLicenseNum();
    virtual std::string getColor();
    virtual VehicleType getType() const;
    virtual void displayInfo();
};