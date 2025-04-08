#pragma once
#include <iostream>

using namespace std;

enum class CUISINE
{
    NORTH_INDIAN,
    SOUTH_INDIAN,
    CHINESE,
    STREET_FOOD,
    SWEETS,
    MEXICAN,
};
enum class ORDER_STATUS
{
    PLACED,
    ORDERED,
    ACCEPTED,
    ON_THE_WAY,
    REACHED,
    DELIVERED,
    CANCELLED
};
enum class RATING
{
    UNASSIGNED,
    ONE_STAR,
    TWO_STARS,
    THREE_STARS,
    FOUR_STARS,
    FIVE_STARS
};

class Location
{
    double lat;
    double lon;

public:
    Location(double pLat, double pLon) : lat(pLat), lon(pLon) {}

    double getLat()
    {
        return this->lat;
    }
    double getLon()
    {
        return this->lon;
    }
};
