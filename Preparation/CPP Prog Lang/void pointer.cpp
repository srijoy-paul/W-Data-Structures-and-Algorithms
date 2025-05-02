#include <iostream>
using namespace std;

int main()
{
    /**
     * the concept of void pointer is like that, it points to such a mem location which has not type, so and technically, we can point a void pointer to any type of memory location.
     * see the example void pointer is pointed to the int type mem variable location, and it stores the address of that.
     * A void pointer (void*) is a generic pointer type that can hold the address of any data type. However, it cannot be dereferenced directly because the compiler doesn't know what type of data it points to.
     *
     * Void Pointers Lack Type Information:
       The compiler doesn’t know how to interpret the data at the memory address stored in ptr (is it an int, float, etc.?).
     Direct Dereferencing is Invalid:
       You cannot use *ptr directly because the type is unknown. You must explicitly cast the void pointer to the correct type before dereferencing.
     */
    int x = 4;
    void *ptr;
    ptr = &x;

    cout << *((int *)ptr);

    float b = 4.5;
    ptr = &b;
    cout << *((float *)ptr);
}