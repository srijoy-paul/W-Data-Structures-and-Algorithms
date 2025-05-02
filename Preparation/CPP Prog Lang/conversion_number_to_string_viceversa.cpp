#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
    /**
     * to convert a number to string:
     * 1. using stringstream [sstream header]
     * 2. using to_string() method
     *
     */
    int num = 2;
    // bool val = typeid(num + '0') == typeid(char);
    // cout << val << endl;
    // cout << typeid(num + '0').name();

    // ostringstream str1;
    // str1 << num;

    // string p = str1.str();
    // bool is = typeid(p) == typeid(string);
    // cout << "The number converted into string: " << p << "\n " << is << endl;

    string s = to_string(num);
    bool isTrue = typeid(s) == typeid(string);
    cout << "The number converted into string: " << s << "\n " << isTrue << endl;
}