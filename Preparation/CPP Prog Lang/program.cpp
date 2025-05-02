// C++ program to sizes of data types
#include <iostream>
#include <cstring> //library for strings in cpp(string.h was in c)
using namespace std;

// int main()
// {
//     cout << "Size of char : " << sizeof(char) << " byte" << endl;
//     cout << "Size of int : " << sizeof(int) << " bytes" << endl;
//     cout << "Size of short int : " << sizeof(short int) << " bytes" << endl;
//     cout << "Size of long int : " << sizeof(long int) << " bytes" << endl;
//     cout << "Size of signed long int : " << sizeof(signed long int) << " bytes" << endl;
//     cout << "Size of unsigned long int : " << sizeof(unsigned long int) << " bytes" << endl;
//     cout << "Size of float : " << sizeof(float) << " bytes" << endl;
//     cout << "Size of double : " << sizeof(double) << " bytes" << endl;
//     cout << "Size of wchar_t : " << sizeof(wchar_t) << " bytes" << endl;

//     return 0;
// }

// implementing struct in cpp
// struct student
// {
//     int id;
//     char name[20]; // 20 fixed sized array created in mem
//     float marks, attendence;
// };

// int main()
// {
//     struct student s1;
//     struct student s2 = {1, "Mark", 89.5, 100};
//     strcpy(s1.name, "Rahul"); // we can't directly assign, we need to cpy to the address(i.e s1.name="Srijoy" -> is not possible)
//     s1.marks = 85.7;
//     s1.attendence = 100;

//     cout << "name: " << s1.name << endl;
//     cout << "marks: " << s1.marks << endl;
//     cout << "attendence: " << s1.attendence << endl;
//     return 0;
// }

struct student
{
    int roll_no;
    string name;
    int phone_number;
};

// int main()
// {
//   struct student stud[5];  //array of structure variables
//   int i;

//   for(i = 0; i < 5; i++)
//   {
//     //taking values from user
//     cout << "Student " << i + 1 << endl;

//     cout << "Enter roll no: " << endl; cin >> stud[i].roll_no;

//     cout << "Enter name: " << endl; cin >> stud[i].name;

//     cout << "Enter phone number: " << endl; cin >> stud[i].phone_number;
//   }

//   for(i = 0; i < 5; i++)
//   {
//     //printing values
//     cout << "\nStudent " << i + 1 << endl;

//     //accessing struture members
//     cout << "\nRoll no : " << stud[i].roll_no << endl;
//     cout << "Name : " << stud[i].name << endl;
//     cout << "Phone no : " << stud[i].phone_number << endl;
//   }
//   return 0;
// }

void display(struct student st) // structure variable in function
{
    cout << "Roll no : " << st.roll_no << endl;
    cout << "Name : " << st.name << endl;
    cout << "Phone no : " << st.phone_number << endl;
}

int main()
{
    struct student s; // memory allocated

    s.roll_no = 66;
    s.name = "Jim Halpert";
    s.phone_number = 756888;

    display(s); // function call with structure variable

    return 0;
}