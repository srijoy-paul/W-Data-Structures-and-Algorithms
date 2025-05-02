#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "Priyanka";
    // int len = s.length();
    // char arr[len];
    // cout<<arr;
    // for (int i = 0; i < len; i++)
    // {
    //     arr[i] = s[i];
    // }

    char *arr = &s[0];
    /**
     * because the strings are store in contiguous fashino, and it is gauranteed by c++11 version and later, that is why, taking a pointer and point it to the first character address of the string, gets access to the entier string stored conntiguously, and as it is terminated by null symbol "\0" [it is called c-style string].
     */
    cout << arr;
}