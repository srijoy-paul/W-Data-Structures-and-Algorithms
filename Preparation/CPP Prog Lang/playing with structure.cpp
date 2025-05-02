#include <iostream>
using namespace std;

struct Employee
{
    string name;
    int age;
    float salary;

    void printDetails()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
}