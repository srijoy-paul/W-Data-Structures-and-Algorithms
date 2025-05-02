#include <iostream>
using namespace std;


/**
 * 
 */
class A
{
private:
    int x;
    friend int getX(A);

public:
    void setX(int x)
    {
        this->x = x;
    }
};

int getX(A a)
{
    return a.x;
}

int main()
{
    A a;
    a.setX(10);
    int x = getX(a);
    cout << x;
}