#include <cmath>
#include <bits/stdc++.h>
using namespace std;
// int main()
// {
//     int n1, n2;
//     cin >> n1 >> n2;
//     int small, big;
//     if (n1 < n2)
//     {
//         small = n1;
//         big = n2;
//     }
//     else
//     {
//         small = n2;
//         big = n1;
//     }
//     vector<int> factors = calFactors(small);
//     for (int i = factors.size() - 1; i >= 0; i--)
//     {
//         if (big % factors[i] == 0)
//         {
//             cout << "HCF:" << factors[i];
//             break;
//         }
//     }
//     return 0;
// }

// find lcm
// int main()
// {
//     int n1, n2;
//     cin >> n1 >> n2;
//     int small, big;
//     if (n1 < n2)
//     {
//         small = n1;
//         big = n2;
//     }
//     else
//     {
//         small = n2;
//         big = n1;
//     }

//     int i = 1;
//     while (1)
//     {
//         if ((big * i) % small == 0)
//         {
//             cout << "LCM: " << big * i;
//             break;
//         }
//         i++;
//     }
//     return 0;
// }

// binary to decimal convert
// int main()
// {
//     int binaryNum;
//     cin >> binaryNum;
//     int tempBin = binaryNum;
//     int i = 0;
//     int decimalForm = 0;
//     while (tempBin != 0)
//     {
//         bool isAddBit = tempBin % 10;
//         if (isAddBit)
//         {
//             decimalForm += pow(2, i);
//         }
//         tempBin /= 10;
//         i++;
//     }
//     cout << decimalForm;
//     return 0;
// }

// octal to decimal convert
// int main()
// {
//     int octalNum;
//     cin >> octalNum;
//     int tempOct = octalNum;
//     int i = 0;
//     int decimalForm = 0;
//     while (tempOct != 0)
//     {
//         int lastDigit = tempOct % 10;
//         decimalForm += (lastDigit * pow(8, i));

//         tempOct /= 10;
//         i++;
//     }
//     cout << decimalForm;
//     return 0;
// }

// hexadecimal to decimal convert
// int main()
// {
//     string hexaDecimalNum;
//     cin >> hexaDecimalNum;
//     string tempHexa = hexaDecimalNum;

//     unordered_map<char, int> hexaMap;
//     hexaMap['A'] = 10;
//     hexaMap['B'] = 11;
//     hexaMap['C'] = 12;
//     hexaMap['D'] = 13;
//     hexaMap['E'] = 14;
//     hexaMap['F'] = 15;

//     int i = 0;
//     int decimalForm = 0;
//     for (int j = tempHexa.size() - 1; j >= 0; j--)
//     {
//         char charc = tempHexa[j];
//         if (charc >= '0' && charc <= '9')
//             decimalForm += ((charc - '0') * pow(16, i));
//         else if ((charc >= 'A' && charc <= 'F') || (charc >= 'a' && charc <= 'f'))
//         {
//             decimalForm += (hexaMap[toupper(charc)] * pow(16, i));
//         }
//         i++;
//     }
//     cout << decimalForm;
//     return 0;
// }

// decimal to binary
// int main()
// {
//     int deciNum;
//     cin >> deciNum;
//     vector<int> bin;
//     while (deciNum != 0)
//     {
//         bin.emplace_back(deciNum % 2);
//         deciNum /= 2;
//     }

//     for (int i = bin.size() - 1; i >= 0; i--)
//     {
//         cout << bin[i] << " ";
//     }
// }

// decimal to octal
// int main()
// {
//     int deciNum;
//     cin >> deciNum;
//     vector<int> octalNum;
//     while (deciNum != 0)
//     {
//         octalNum.emplace_back(deciNum % 8);
//         deciNum /= 8;
//     }

//     for (int i = octalNum.size() - 1; i >= 0; i--)
//     {
//         cout << octalNum[i];
//     }
// }

// decimal to hexa
// int main()
// {
//     int deciNum;
//     cin >> deciNum;
//     unordered_map<int, char> hexaMap;
//     hexaMap[10] = 'A';
//     hexaMap[11] = 'B';
//     hexaMap[12] = 'C';
//     hexaMap[13] = 'D';
//     hexaMap[14] = 'E';
//     hexaMap[15] = 'F';

//     vector<char> hexaNum;
//     while (deciNum != 0)
//     {
//         int rem = deciNum % 16;
//         char hex;
//         if (rem >= 10 && rem <= 15)
//         {
//             hex = hexaMap[rem];
//         }
//         else if (rem >= 0 && rem <= 9)
//             hex = rem + '0';
//         hexaNum.emplace_back(hex);
//         deciNum /= 16;
//     }

//     for (int i = hexaNum.size() - 1; i >= 0; i--)
//     {
//         cout << hexaNum[i];
//     }
// }

// perms: n!/(n-r)!
int calFactorialRecur(int n)
{
    if (n == 1)
        return 1;
    return n * calFactorialRecur(n - 1);
}
// int main()
// {
//     int noOfPeople, seats;
//     cin >> noOfPeople >> seats;

//     if (seats > noOfPeople)
//     {
//         cout << "Invalid input: According to concept of Permutation r should be less than or equal to n." << endl;
//         return 0;
//     }
//     int perms = (calFactorialRecur(noOfPeople) / (calFactorialRecur(noOfPeople - seats)));

//     cout << perms;
// }

// combinations
//  int main()
//  {
//      int numOfPeople, handshake = 2;
//      cin >> numOfPeople;

//     int combsPossible = (calFactorialRecur(numOfPeople) / (calFactorialRecur(handshake) * (calFactorialRecur(numOfPeople - handshake))));

//     cout << "no of handshakes:" << combsPossible;
// }

int calLcm(int n1, int n2)
{
    int small, big;
    if (n1 < n2)
    {
        small = n1;
        big = n2;
    }
    else
    {
        small = n2;
        big = n1;
    }

    int i = 1;
    while (1)
    {
        if ((big * i) % small == 0)
        {
            return (big * i);
            break;
        }
        i++;
    }
}

vector<int> calFactors(int n)
{
    vector<int> temp;
    temp.emplace_back(1);
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            // cout << i;
            temp.emplace_back(i);
        }
    }
    temp.emplace_back(n);
    return temp;
}

int calHcf(int n1, int n2)
{
    int small, big;
    if (n1 < n2)
    {
        small = n1;
        big = n2;
    }
    else
    {
        small = n2;
        big = n1;
    }
    vector<int> factors = calFactors(small);
    for (int i = factors.size() - 1; i >= 0; i--)
    {
        if (big % factors[i] == 0)
        {
            return factors[i];
        }
    }
    return 1;
}

// int main()
// {
//     int nume1, deno1, nume2, deno2;
//     cin >> nume1 >> deno1 >> nume2 >> deno2;

//     int lcm = calLcm(deno1, deno2);

//     int mulTonume1 = lcm / deno1;
//     nume1 *= mulTonume1;

//     int mulTonume2 = lcm / deno2;
//     nume2 *= mulTonume2;

//     int updatedNume = nume1 + nume2;

//     cout << updatedNume << "/" << lcm << endl;

//     while (calHcf(updatedNume, lcm) != 1)
//     {
//         int divisibleBy = calHcf(updatedNume, lcm);
//         updatedNume /= divisibleBy;
//         lcm /= divisibleBy;
//     }

//     cout << "simplified: " << updatedNume << "/" << lcm;
// }

int main()
{
    cout << "Enter the value of a, b, c of any quad eq.:";
    int a, b, c;
    cin >> a >> b >> c;

    int root1, root2;
    bool isComplex = false;
    int dis = (b * b) - (4 * a * c);
    cout << "dis: " << dis << endl;

    if (dis > 0)
    {
        cout << "Roots are real and Different" << endl;
        root1 = (-b + sqrt(dis)) / 2 * a;
        root2 = (-b - sqrt(dis)) / 2 * a;
    }
    else if (dis == 0)
    {
        cout << "Roots are real and same" << endl;
        root1 = (-b + sqrt(dis)) / 2 * a;
    }
    else
    {
        cout << "Roots are real and complex" << endl;
        root1 = (-b / (2 * a));
        root2 = (-b / (2 * a));
        isComplex = true;
    }

    if (isComplex)
        cout << root1 + "+i" << sqrt(dis) << " " << root2 + "-i" << sqrt(dis);
    else
        cout << root1 << " " << root2;
}