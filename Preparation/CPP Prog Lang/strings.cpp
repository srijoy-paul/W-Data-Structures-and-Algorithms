#include <iostream>
#include <cstring>
#include <limits>
using namespace std;

int main()
{
    string str = "English";
    string str1;
    string str2;
    /**
     * So basically, using normal cin and taking string input results in taking only first word and ignoring the rest, as it doesn't recognize whitespace as a character, it treat it as a terminating symbol/character.str1
     *
     *
     * so we use getline
     */

    /**
     * A common use case for cin.ignore() is to clear the input buffer after using cin to read numerical or single-word input, especially before using getline() to read a line of text. This prevents the newline character left in the buffer by cin from being read by getline(), which would result in an empty line.
     */
    cout << "Enter value in str1";
    cin >> str1;
    cout << endl;
    cin.ignore(std::numeric_limits<streamsize>::max(), '\n');
    cout << "Enter value in str2";
    getline(cin, str2);

    cout << "\nStr1:" << str1 << "\nstr2:" << str2 << endl;

    cout << "concat result: " << str1 + str2 << endl;
    cout << "Length of the string 1" << str1.length() << endl;
    cout << "Substring -> " << str1.substr(1, 4) << endl;
    cout << "find -> " << str2.find('P') << endl;
    cout << "string find -> " << str2.find("Priyanka") << endl;

    cout << "comparison result -> " << str1.compare(str2) << endl;
    str1.clear();
    cout << "Printing the strings : " << str1 << str2 << endl;
}