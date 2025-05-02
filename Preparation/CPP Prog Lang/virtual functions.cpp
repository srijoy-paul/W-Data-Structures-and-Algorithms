#include <iostream>
using namespace std;

// class Parent
// {
// public:
//     virtual void show() { cout << "Parent class" << endl; };
// };

// class Child : public Parent
// {
// public:
//     void show()
//     {
//         cout << "Child class" << endl;
//     }
// };

class Shape
{
public:
    virtual void draw()
    {
        cout << "Drawing a generic shape" << endl;
    }
};

class Circle : public Shape
{
public:
    void draw() override
    {
        cout << "Drawing a circle" << endl;
    }
};

class Rectangle : public Shape
{
public:
    void draw() override
    {
        cout << "Drawing a rectangle" << endl;
    }
};

int main()
{
    Shape *shapePtr;

    Circle circle;
    Rectangle rectangle;

    shapePtr = &circle;
    shapePtr->draw();
}