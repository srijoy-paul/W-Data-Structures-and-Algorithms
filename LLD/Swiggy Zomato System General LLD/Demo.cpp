#include "restaurant.hpp"
int main()
{
    // creating a res owner, creting his res, creating dishes,and aa
    RestaurantOwner *owner1 = new RestaurantOwner("owner1");
    Restaurant *sahiRestaurant = new Restaurant("sahiRestaurant", owner1, nullptr);
    sahiRestaurant->setLocation(new Location(1, 2));

    Dish *biryani = new Dish("Biryani", CUISINE::NORTH_INDIAN, 155.8);
    biryani->addAddon(new DishAddOn("Raita", 40));

    Dish *paratha = new Dish("Paratha", CUISINE::NORTH_INDIAN, 35);

    Dish *choleBhature = new Dish("choleBhature", CUISINE::NORTH_INDIAN, 35);

    Menu *sahiRestaturant_menu = new Menu({biryani, paratha, choleBhature});
    sahiRestaurant->addMenu(sahiRestaturant_menu);

    // another res owener, res
    RestaurantOwner *owner2 = new RestaurantOwner("owner2");
    Restaurant *pizza_house = new Restaurant("pizza_house", owner2, nullptr);
    pizza_house->setLocation(new Location(4, 2));

    Dish *cheesePizza = new Dish("cheesePizza", CUISINE::MEXICAN, 255.8);
    // biryani->addAddon(new DishAddOn("Raita", 40));

    Dish *vegiePizaa = new Dish("vegiePizaa", CUISINE::MEXICAN, 35);

    Dish *nonVegPizza = new Dish("nonVegPizza", CUISINE::MEXICAN, 35);

    Menu *pizza_house_menu = new Menu({cheesePizza, vegiePizaa, nonVegPizza});

    pizza_house->addMenu(pizza_house_menu);
}