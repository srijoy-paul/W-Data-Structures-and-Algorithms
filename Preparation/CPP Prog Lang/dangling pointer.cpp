#include <iostream>
using namespace std;

int *func()
{
    static int x = 5;
    return &x;
}

int main()
{
    /**
     * malloc bydefault returns a void pointer, to the first memoory address to the allocated memory location(be it single or sequency of memory locations), we need to typecast it to the required type
     */
    int *ptr = (int *)malloc(sizeof(int));
    *ptr = 4;
    cout << "ponter var: " << *ptr << endl;
    free(ptr);
    cout << *ptr << endl;

    int *p = func();

    cout << "Return from func" << p;
}