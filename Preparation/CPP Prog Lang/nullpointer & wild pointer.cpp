#include <iostream>
using namespace std;

int main()
{
    /**
     *
     */
    int *ptr2;       // wild pointer
    int *ptr = NULL; // NULL pointer (so basically NULL is a value, but wild pointer doesn't considered to have a value, as it store some garbage value, pointing to it results in undefined behavior, so garbage negative value is printed)
    cout << ptr2 << " " << *ptr2 << endl;
    cout << ptr;
}