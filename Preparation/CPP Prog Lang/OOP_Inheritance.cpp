#include <iostream>
using namespace std;

class Person
{
protected:
    string name;
    int age;

public:
    Person()
    {
        cout << "Person Created" << endl;
    }

    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};

class Teacher : public Person
{
public:
    string subject;
    int salary;
    Teacher(string n, int ag, string sub, int sal) : Person(n, ag)
    {
        this->subject = sub;
        this->salary = sal;
    }
};

class Student : public Person
{
protected:
    int rollnum;

public:
    Student()
    {
        cout << "Student Created" << endl;
    }

    Student(string name, int age, int rollnum) : Person(name, age)
    {
        // this->name = name;
        // this->age = age;
        this->rollnum = rollnum;
    }

    void getInfo()
    {
        cout << "Name: " << this->name << endl;
        cout << "Age: " << this->age << endl;
        cout << "Roll Number: " << this->rollnum << endl;
    }
};
/**
 * Enums are Compile-Time Constants
   Enum names exist only in the source code and are stripped away during compilation. The final executable contains only integer values.

   No Reflection Support
   C++ lacks native reflection capabilities to convert enum values to their string names at runtime.
 */

enum ResearchArea
{
    ComputerVision,
    DeepLearning,
    NeuralNetworks,
    CloudComputing,
    NLP
};

class PostGradStudent : public Student
{
    enum ResearchArea researchArea;

public:
    PostGradStudent(string name, int age, int rollnum, enum ResearchArea rA) : Student(name, age, rollnum)
    {
        this->researchArea = rA;
    }

    void getInfo()
    {
        cout << "Name: " << this->name << endl;
        cout << "Age: " << this->age << endl;
        cout << "Roll Number: " << this->rollnum << endl;
        cout << "Research Area: " << this->researchArea << endl; // here  it will give the index value of the enum type(like here giving 2)(so it means indexing for enums here start from 0 only)
    }
};

class TeachingAssitant : public Teacher, public Student
{
    TeachingAssitant(string name, int age, int rollnum, string sub, int sal, enum ResearchArea rA)
};

// multiple inheritance
// +------------------------------------------------+
// | Person Base Class                               |
// |------------------------------------------------|
// | name (string): "Priyanka Kumari" (24 bytes*)    |
// | age (int): 23 (4 bytes)                        |
// +------------------------------------------------+
// | Student Derived Class                          |
// |------------------------------------------------|
// | rollnum (int): 78 (4 bytes)                    |
// +------------------------------------------------+
// | PostGradStudent Derived Class                  |
// |------------------------------------------------|
// | researchArea (enum): NeuralNetworks (4 bytes)  |
// +------------------------------------------------+

int main()
{
    // Student s1("Srijoy Paul", 21, 79);
    PostGradStudent pgs1("Priyanka Kumari", 23, 78, NeuralNetworks);
    // s1.name = "Srijoy Paul";
    // s1.age = 21;
    // s1.rollnum = 79;

    // s1.getInfo();
    pgs1.getInfo();
    return 0;
}