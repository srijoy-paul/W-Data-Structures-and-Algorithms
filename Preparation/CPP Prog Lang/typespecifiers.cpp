#include <iostream>
using namespace std;

int main()
{
    // const int number=2;
    int number = 2;
    number = 3;
    cout << number;

    // volatile int var = 124;
    int var = 124;
    /**
     * Forced Optimization by compiler
When this program gets compiled, the compiler may optimize this code, if it finds that the program never ever makes any attempt to change the value of var, So it may be tempted to optimize the while loop by changing it from while(var == 124) to something which is equivalent to while(true) This may be done so that the execution could be fast (since the condition in while loop appears to be true always). (if the compiler doesn't optimize it, then it has to fetch the value of var and compare it with 123, in each iteration which obviously is a little bit slow.)
     */
    while (var == 124)
        cout << "hello";
}