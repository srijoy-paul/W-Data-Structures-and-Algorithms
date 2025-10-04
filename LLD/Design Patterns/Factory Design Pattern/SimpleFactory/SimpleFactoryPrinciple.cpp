#include <iostream>
using namespace std;

class Burger
{
public:
    virtual void prepare() = 0;
    virtual ~Burger() {}
};

class ClassicBurger : public Burger
{
public:
    void prepare() override
    {
        cout << "Preparing Classic Burger with mashed potatoes and mixed vegetables like carrots, beans, and peas, seasoned with spices like cumin and coriander" << endl;
    }
};

class StandardBurger : public Burger
{
public:
    void prepare() override
    {
        cout << "Preparing Standard Burger with lettuce, tomato, cheese, and a special sauce" << endl;
    }
};

class PremiumBurger : public Burger
{
public:
    void prepare() override
    {
        cout << "Preparing Premium Gourmet Burger with premium ingredients like avocado, bacon, and gourmet cheese" << endl;
    }
};

class BurgerFactory
{
public:
    Burger *createBurger(string type)
    {
        if (type == "Classic")
        {
            return new ClassicBurger();
        }
        else if (type == "Standard")
        {
            return new StandardBurger();
        }
        else if (type == "Premium")
        {
            return new PremiumBurger();
        }
        else
        {
            cout << "We don't cook this type of burger" << endl;
            return nullptr;
        }
    }
};

int main()
{
    BurgerFactory *myBurgerFactory = new BurgerFactory();
    Burger *myBurger = myBurgerFactory->createBurger("Classic");
    myBurger->prepare();
    return 0;
}