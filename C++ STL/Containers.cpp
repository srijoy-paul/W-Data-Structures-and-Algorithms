#include <bits/stdc++.h>
using namespace std;

void stlPairs()
{
    pair<int, int> p = {1, 7};
    cout << p.first << " ";
    cout << p.second;

    pair<int, pair<int, int>> p1 = {1, {2, 4}};
    cout << endl
         << p1.first << endl
         << p1.second.second << endl
         << p1.second.first;

    pair<int, int> arr[] = {{1, 2}, {1, 8}};
    cout << endl
         << arr[1].second;
}

void stlVectors()
{

    // intialize a vector
    vector<int> v;

    // insertion into vector
    v.push_back(2);
    v.emplace_back(3);
    for (int i = 0; i < 2; i++)
    {
        cout << v[i] << endl;
    }

    vector<pair<int, int>> pairVector;
    pairVector.push_back({1, 7});
    pairVector.emplace_back(4, 6);
    for (int i = 0; i < 2; i++)
    {
        cout << pairVector[i].first << endl;
        cout << pairVector[i].second << endl;
    }

    vector<int> v1(4, 15);
    for (int i = 0; i < 4; i++)
    {
        cout << v1[i] << " ";
    }

    // vector iterators
    cout << endl
         << "Float vector ";
    vector<float> floatVector(8);
    floatVector[0] = 1.3;
    floatVector[1] = 1.2;
    floatVector[2] = 1.4;
    floatVector[3] = 1.5;
    floatVector[7] = 1.1;
    vector<float>::iterator it = floatVector.begin(); // iterator for vectors/ vector arrays
    // cout << *it << " ";
    // it++;
    // cout << *it << " ";
    // it++;
    // cout << *it << " ";
    // it++;
    // cout << *it << " ";
    // it++;
    // cout << *it << " ";

    for (it = floatVector.begin(); it < floatVector.end(); it++)
    {
        cout << *it << " ";
    }

    // vector<float>::iterator revEndIt = floatVector.rend();
    // vector<float>::iterator revEndIt = floatVector.rbegin();

    /*cout << floatVector.at(1) << endl;
    // cout << floatVector.back(); // last index value*/

    // printing vectors
    cout << endl
         << " printing vectors ";
    for (vector<float>::iterator i = floatVector.begin(); i < floatVector.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    cout << "using auto keyword : ";
    for (auto i : floatVector) // for each loop
    {
        cout << i << typeid(i).name() << " ";
    }

    cout << endl
         << "using normal way"
         << ": ";
    for (float i : floatVector)
    {
        cout << i << " ";
    }

    // insert function

    cout << endl
         << "char vector: " << endl;
    vector<char> charVector;
    charVector.emplace_back('s');
    charVector.emplace_back('p');
    charVector.emplace_back('r');
    for (auto c : charVector)
    {
        cout << c << " ";
    }

    charVector.insert(charVector.begin(), '2');

    charVector.insert(charVector.begin() + 4, 2, 'i');

    charVector.insert(charVector.begin() + 6, 'y');

    charVector.insert(charVector.begin() + 7, 'j');

    cout << endl
         << "char vector after insert operation: " << endl;

    for (auto c : charVector)
    {
        cout << c << " ";
    }

    vector<string> stringVector;
    stringVector.push_back("Srijoy");
    stringVector.push_back("Priyanka");
    stringVector.push_back("Paul");

    vector<string> stringVector1;
    stringVector1.push_back("Name:");
    stringVector1.push_back(".");
    stringVector1.insert(stringVector1.begin() + 1, stringVector.begin(), stringVector.end());

    for (auto str : stringVector1)
    {
        cout << str << " ";
    }

    // size of vec
    cout << endl
         << stringVector1.size();

    // pop_back
    cout << endl;
    for (auto fv : floatVector)
    {
        cout << fv << " ";
    }
    floatVector.pop_back();
    cout << endl;
    for (auto fv : floatVector)
    {
        cout << fv << " ";
    }
    // swap testing
    vector<int> s1(5, 10);
    vector<int> s2(4, 20);
    s1.swap(s2);
    cout << endl;
    for (auto si1 : s1)
    {
        cout << si1 << " ";
    }
    cout << endl;
    for (auto si2 : s2)
    {
        cout << si2 << " ";
    }

    s2.clear(); // empties the vec
    for (auto si2 : s2)
    {
        cout << si2 << " ";
    }

    // checks the vec is empty or not - returns 1 for true and 0 for false.
    cout << endl;
    cout << s2.empty();
}

void stlLists()
{
    list<int> intList; // internally makes use of doubly linkedlist
    intList.push_back(2);
    intList.emplace_back(4);

    intList.push_front(1);
    intList.emplace_front(0);

    for (auto li : intList)
    {
        cout << li << " ";
    }
    intList.pop_front();
    intList.pop_back();
    cout << "\n";
    for (auto li : intList)
    {
        cout << li << " ";
    }
}

void stlDeque()
{
    deque<int> intDeque;
    intDeque.push_back(5);
    intDeque.emplace_back(36);
    intDeque.push_front(139);
    intDeque.emplace_front(11);

    for (auto dI : intDeque)
    {
        cout << dI << " ";
    }

    intDeque.pop_back();
    intDeque.pop_front();
    cout << "\n";
    for (auto dI : intDeque)
    {
        cout << dI << " ";
    }
}

void stlStack()
{
    stack<int> intStack; // all of these operations are performed in O(1) time

    // push,pop,top,empty,size
    intStack.push(8);
    intStack.push(7);
    intStack.push(4);
    intStack.push(3);
    intStack.push(2);
    intStack.push(1);
    intStack.push(-2);
    // cout << intStack.top();
    while (!intStack.empty())
    {
        cout << intStack.top() << " ";
        intStack.pop();
    }

    stack<int> st1, st2;
    st1.push(2);
    st1.push(4);
    st1.push(6);

    st2.push(3);
    st2.push(5);
    st2.push(11);

    // swap
    cout << "\n";
    st1.swap(st2);
    while (!st1.empty())
    {
        cout << st1.top() << " ";
        st1.pop();
    }
}

void stlQueue()
{
    queue<int> intQ; // similar as stack but wokring is diff, it follows FIFO
    // here the insertion is from rear end and the poping is from frontend
    intQ.push(30); // 30
    intQ.push(20); // 20 30
    intQ.push(10); // 10 20 30
    intQ.push(9);  // 9 10  20 30
    intQ.push(8);  // 8 9 10 20 30
    cout << intQ.front() << "\n";
    intQ.pop();
    cout << intQ.front() << "\n";
    intQ.pop();
    cout << intQ.front() << "\n";
    intQ.pop();
    cout << intQ.front() << "\n";
    intQ.pop();
    cout << intQ.front() << "\n";
}

void stlPriorityQueue()
{
    priority_queue<int> intPQ; // it push into the queue by following the priority, where the highest number is in the front always and then the numbers can be told to be in descending order from the front to the rear
    intPQ.push(1);
    intPQ.push(0);
    intPQ.push(14);

    cout << intPQ.top() << "\n";
    intPQ.pop();
    cout << intPQ.top() << "\n";
    intPQ.pop();
    cout << intPQ.top() << "\n";
}

void stlSet()
{
    set<int> intSet;
    intSet.insert(2);
    intSet.insert(2);
    intSet.insert(14);
    intSet.emplace(2);
    intSet.emplace(7);
    intSet.emplace(4);
    intSet.emplace(1);
    intSet.emplace(0);

    for (auto it : intSet)
    {
        cout << it << " ";
    }

    cout << endl;
    auto it = intSet.find(14);
    cout << typeid(it).name();
    cout << "\n"
         << *it;

    auto it1 = intSet.find(5); // returns garbage address
    cout << "\n"
         << *it1 << " "
         << *intSet.end();

    cout << "\n"
         << intSet.size();

    auto it2 = intSet.find(2);
    auto it3 = intSet.find(14);

    intSet.erase(it2, it3++);
    cout << "\n";
    for (auto it : intSet)
    {
        cout << it << " ";
    }

    // for (set<int>::iterator i = intSet.begin(); i < intSet.end(); i++)
    // {
    // }
}

void stlMap()
{ //
    map<int, int> mpp;

    mpp[1] = 6;
    // mpp.emplace({2, 3});
    mpp.insert({4, 7});
    mpp.insert({3, 7});
    for (auto it = mpp.begin(); it != mpp.end(); ++it)
    {
        cout << it->second << endl;
    }

    auto it = mpp.find(4);
    if (it != mpp.end())
    {
        cout << it->second << endl;
    }
    else
    {
        cout << "key not present";
    }

    // cout << mpp[1];
}

int main()
{
    // stlPairs();
    // stlVectors();
    // stlLists();
    // stlDeque();
    // stlStack();
    // stlQueue();
    // stlPriorityQueue();
    // stlSet();
    stlMap();
}