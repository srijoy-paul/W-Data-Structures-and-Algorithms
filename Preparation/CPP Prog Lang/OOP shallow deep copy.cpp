#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    double *cgpaPtr;

    Student(string name, double cgpa)
    {
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }
    Student(Student &obj)
    {
        this->name = obj.name;
        this->cgpaPtr = new double;
        *(this->cgpaPtr) = *(obj.cgpaPtr);
    }

    void getInfo()
    {
        cout << name << " " << *cgpaPtr << endl;
    }
};

int main()
{
    Student s1("Raj", 8.9);
    Student s2(s1);
    s2.name = "Neha";
    s1.getInfo();
    s2.getInfo();

    *(s2.cgpaPtr) = 9.5;
    s1.getInfo();
}