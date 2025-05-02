#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "Priyanka";
    // string s2;
    // getline(cin, s2);
    // s2.push_back('~');

    // cout << s2 << endl;
    //
    cout << s.length() << " and Cap: " << s.capacity() << endl;
    // s.resize(10);
    s.shrink_to_fit(); // it doesn't guarantee shrinking the extra capacity to that of size, it is a good practice to include in code, so that it permits the compiler to do any shrinking if can be done, so that it doesn't cause any memory wastage
    cout << "String: " << s << endl;
    cout << "After: " << s.length() << " and Cap: " << s.capacity() << endl;

    string s3 = "This is a very long string that exceeds SSO buffer size";
    cout << s3.length() << " and Cap: " << s3.capacity() << endl;
    s3.reserve(100);
    cout << s3.length() << " and Cap: " << s3.capacity() << endl;
    s3.shrink_to_fit();
    cout << "after: " << s3.length() << " and Cap: " << s3.capacity() << endl;
    auto it = s.begin();
    auto it2 = s.end() - 1;
    // auto it = s.rbegin();
    // auto it2 = s.rend() - 1;
    cout << *it << " " << *it2;
}