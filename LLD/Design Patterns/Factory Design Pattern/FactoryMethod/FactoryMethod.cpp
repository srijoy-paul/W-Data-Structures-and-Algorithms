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

class ClassicWheatBurger : public Burger
{
public:
    void prepare() override
    {
        cout << "Preparing Classic Healthy Wheat Burger with mashed potatoes and mixed vegetables like carrots, beans, and peas, seasoned with spices like cumin and coriander on a wheat bun" << endl;
    }
};

class StandardWheatBurger : public Burger
{
public:
    void prepare() override
    {
        cout << "Preparing Standard Healthy Wheat Burger with lettuce, tomato, cheese, and a special sauce on a wheat bun" << endl;
    }
};

class PremiumWheatBurger : public Burger
{
public:
    void prepare() override
    {
        cout << "Preparing Premium Gourmet Bun Healthy Wheat Burger with premium ingredients like avocado, bacon, and gourmet cheese on a wheat bun" << endl;
    }
};

class BurgerFactory
{
public:
    virtual Burger *createBurger(string type) = 0;
};

class BurgerKing : public BurgerFactory
{
public:
    Burger *createBurger(string type) override
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

class McDonnalds : public BurgerFactory
{
public:
    Burger *createBurger(string type) override
    {
        if (type == "Classic")
        {
            return new ClassicWheatBurger();
        }
        else if (type == "Standard")
        {
            return new StandardWheatBurger();
        }
        else if (type == "Premium")
        {
            return new PremiumWheatBurger();
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
    string type = "Classic";
    BurgerFactory *myBurgerFactory = new BurgerKing();

    Burger *myBurger = myBurgerFactory->createBurger(type);
    myBurger->prepare();
    return 0;
}