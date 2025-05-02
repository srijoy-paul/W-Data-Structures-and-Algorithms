#include <iostream>
using namespace std;

class Teacher
{
private:
    double salary;

public:
    string name;
    string dept;
    string subject;

    void changeDept(string newDept)
    {
        this->dept = newDept;
    }

    Teacher(string n, string d, string s, double sa) : name(n), dept(d), subject(s), salary(sa) {};

    void setSalary(double s) { salary = s; }
    double getSalary() { return salary; }
};

class Account
{
private:
    string balance;
    string password;

public:
    string accountId;
    string username;
};

int main()
{
    Teacher t1("Priyanka", "CSE", "C++ with OOP", 50000.00);
    cout << t1.name << " " << t1.dept << " " << t1.subject << " " << t1.getSalary() << endl;

    t1.changeDept("AI/ML");
    cout << t1.name << " " << t1.dept << " " << t1.subject << " " << t1.getSalary() << endl;
}