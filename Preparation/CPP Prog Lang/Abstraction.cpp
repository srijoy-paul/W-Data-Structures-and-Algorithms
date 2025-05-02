#include <iostream>
using namespace std;

class Shape
{
    virtual void draw() = 0;
};

class Circle : public Shape
{
public:
    void draw()
    {
        cout << "Drawing a circle" << endl;
    }
};

int main()
{
    Circle c;
    c.draw();
}