#include <iostream>
using namespace std;

void superHero(string str)
{
    cout << "My favourite superhero is " << str << endl;
}

void superHero(string str1, string str2)
{
    cout << "My favourite superhero is " << str1 << endl;
    cout << "My favourite superhero is " << str2 << endl;
}

int main()
{
    superHero("Batman");
    cout << "-------------" << endl;
    superHero("Batman", "Ironman");
}