#include <iostream>
using namespace std;

struct Employee
{
    string name;
    int age;
    double salary;
};

int main()
{
    struct Employee e;
    e.name = "John Doe";
    e.age = 30;
    e.salary = 50000.00;

    struct Employee *eptr = &e;
    cout << "Name: " << eptr->name << endl;
    cout << "Age: " << eptr->age << endl;
    cout << "Salary: " << eptr->salary << endl;
}