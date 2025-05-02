#include <iostream>
using namespace std;

int main()
{
    float *b;
    b = (float *)malloc(4);
    *b = 3.4;
    cout << b << " " << *b << endl;

    int *a;
    a = (int *)calloc(4, sizeof(int));
    *a = 1;
    *(a + 1) = 2;
    *(a + 2) = 3;
    *(a + 3) = 4;

    for (int i = 0; i < 4; i++)
    {
        cout << a + i << " -> " << *(a + i) << endl;
    }
    cout << endl;

    return 0;
}