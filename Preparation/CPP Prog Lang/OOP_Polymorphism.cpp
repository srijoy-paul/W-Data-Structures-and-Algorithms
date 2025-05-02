#include <iostream>
using namespace std;

/**
 * Compile time polymorphism (Static Polymorphism)
 * overloading is the example of compile time polymorphism
 * */
class Print
{
public:
    void print(int x)
    {
        cout << "Print function called " << typeid(x).name() << " " << x << endl;
    }
    void print(char x)
    {
        cout << "Print function called " << typeid(x).name() << " " << x << endl;
    }
    void print(bool x)
    {
        cout << "Print function called " << typeid(x).name() << " " << x << endl;
    }
};

class Complex
{
    int a, b;

public:
    void setData(int x, int y)
    {
        a = x;
        b = y;
    }
    void showData()
    {
        cout << "a: " << a << " b: " << b << endl;
    }
    // void add(int a, int b)
    // {
    //     this->a = a;
    //     this->b = b;

    //     cout << "a+b: " << this->a + this->b << endl;
    // }

    // in cpp we can give operators as function name(identifier) by using the "operator" keyword, but the operator should be a valid cpp recognized operator.

    Complex operator+(Complex c1)
    {
        Complex temp;
        temp.a = this->a + c1.a;
        temp.b = this->b + c1.b;
        return temp;
    }
};

// overriding example (Runtime polymorphism - Dynamic polymorphism)
class Parent
{
public:
    void getInfo()
    {
        cout << "Parent class" << endl;
    }
};

class Child : Parent
{
public:
    void getInfo()
    {
        cout << "Child class" << endl;
    }
};

int main()
{
    Print p;
    p.print(10);
    p.print('a');
    p.print(true);

    // operator overloading(compile time polymorph)
    //  int x = 2, y = 4;
    Complex c, c1, c2;
    c.setData(2, 3);
    c1.setData(1, 4);
    c2 = c + (c1);

    c2.showData();

    Parent ch1;
    ch1.getInfo();
    return 0;
}