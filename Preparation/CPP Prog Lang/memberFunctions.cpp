#include <iostream>
using namespace std;

/**
 * Declaring member functions in class, and providing their definations from outside the class.
 * - for that we have to use the scope resolution operator, to point which class they belongs to.
 */

class Student
{
    int roll_no;
    string name;

public:
    void getInfo();
    void setInfo(int roll, string s);
};

void Student::setInfo(int r, string s)
{
    this->roll_no = r;
    this->name = s;
}
void Student::getInfo()
{
    cout << "Student " << name << " has " << roll_no << " roll number." << endl;
}

int main()
{
    Student s1;
    s1.setInfo(1, "Ron");
    s1.getInfo();
}