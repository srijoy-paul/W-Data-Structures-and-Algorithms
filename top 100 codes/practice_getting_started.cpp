#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the value of N: ";
//     cin>>n;

//     int sum=0;
//     for(int i=1;i<n;i++){
//         sum+=i;
//     }
//     cout<<sum;
// }

// int main()
// {
//     int n, n1;
//     cout << "Enter the range: ";
//     cin >> n >> n1;

//     int sum = 0;
//     for (int i = n; i <= n1; i++)
//     {
//         sum += i;
//     }
//     cout << sum;
// }

// greatest of three numbers
// int main()
// {
//     int a, b, c;
//     cin >> a >> b >> c;

//     if (a > b)
//     {
//         if (a > c)
//             cout << a;
//     }
//     if (b > a)
//     {
//         if (b > c)
//             cout << b;
//     }
//     if (c > a)
//         if (c > b)
//             cout << c;
//     cout << endl
//          << "End";
// }

// prime num
bool isPrime(int num)
{
    for (int i = 2; i <= (num / 2); i++)
    {
        if (num % i == 0)
            return 0;
        // return "";
    }
    return 1;
}
// int main()
// {
//     int r1, r2;
//     cin >> r1 >> r2;
//     for (int i = r1; i <= r2; i++)
//     {
//         cout << i << ": " << isPrime(i) << endl;
//     }
//     return 0;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     int num = n;
//     int length = 0;
//     while (num != 0)
//     {
//         length++;
//         num /= 10;
//     }
//     // cout << "length" << length;
//     int armstrongNumSum = 0;
//     num = n;
//     while (num != 0)
//     {
//         armstrongNumSum += round(pow((num % 10), length));
/**
 * simple pow(), The issue stems from the use of the pow function, which returns a floating-point number (a double). Even though mathematically 1³, 5³, and 3³ should sum to 153, floating-point arithmetic can sometimes result in small precision errors (for example, 5³ might compute to something like 124.999999 instead of exactly 125). When these imprecise results are converted to int, the rounding may not occur as expected, causing the total to be slightly off.
 To fix this, you can use the round function from <cmath> to round the result of pow to the nearest integer before adding it to the sum. For example:
 */
//         num /= 10;
//     }
//     if (n == armstrongNumSum)
//         cout << "Yes";
//     else
//         cout << "No";
//     return 0;
// }

// factorial
// int calFactorialRecur(int n)
// {
//     if (n == 1)
//         return 1;
//     return n * calFactorialRecur(n - 1);
// }
// int main()
// {
//     int n;
//     cin >> n;
//     cout << calFactorialRecur(n);
// }

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> primeFactors;
//     for (int i = 2; i <= sqrt(n); i++)
//     {
//         if (n % i == 0)
//         {
//             int num1 = i, num2 = n / i;

//             if (isPrime(num1))
//                 primeFactors.push_back(num1);
//             if (isPrime(num2))
//                 primeFactors.push_back(num2);
//         }
//     }

//     for (auto num : primeFactors)
//     {
//         cout << num << " ";
//     }
// }

vector<int> calFactors(int n)
{
    vector<int> temp;
    temp.emplace_back(1);
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            cout << i;
            temp.emplace_back(i);
        }
    }
    temp.emplace_back(n);
    return temp;
}