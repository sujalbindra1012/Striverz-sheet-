//  IN THIS WE KNOW ABOUT ALL THE STL PROPERTIES AND LOGICS

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <queue>
#include <set>
#include <unordered_set>
#include <map>

using namespace std;

// learning void and sum
// void - prints output without returning value

void print()
{
    cout << "Raj";
}

int sum(int a, int b)
{
    return a + b;
}

// learning single pair and multiple pairs

void explainPair()
{
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second;
    cout << endl;

    pair<int, pair<int, int>> q = {1, {3, 4}};
    cout << q.first << " " << q.second.first << " " << q.second.second << " ";
    cout << endl;

    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
    cout << arr[0].first;
    cout << endl;

    pair<int, pair<int, pair<int, int>>> s = {1, {2, {3, 4}}};
    cout << s.first << " " << s.second.first << " " << s.second.second.first << " " << s.second.second.second;
}

// learning vectors and its functions

void explainVector()
{
    vector<int> v; // declaration of 1d vector

    v.push_back(1);    // inserting 1 from back
    v.emplace_back(2); // inserting 2 and faster than push_back

    vector<pair<int, int>> vec;

    vec.push_back({1, 2});
    vec.emplace_back(1, 2);

    vector<int> vecc(5, 100); // defines vector of size 5 having all values 100 in 5 place
    vector<int> ve(5);        // defines vector of size 5 having all values as 0

    vector<int> v1(5, 20); // shows {20,20,20,20,20}
    vector<int> v2(v1);    // new vector contain values of v1

    // we can manipulate size and values in vector because it is dynamic in nature

    vector<int>::iterator it = v.begin(); // v.begin points to the address of first element of iterator
    it++;
    cout << *(it) << " ";

    it = it + 2; // shifts address by two positions
    cout << *(it) << " ";

    // having an vector of elements  {10,20,30,40}

    vector<int>::iterator it = v.end(); // points after 40 in the vector
    // vector<int>::iterator it=v.rend();   //never used points before 10
    // vector<int>::iterator it=v.rbegin();   //points to 40 and moves backward  && less used

    cout << v[0]; // prints value at 0 position

    cout << v.back() << " "; // prints last element of vector

    // printing of vector

    for (vector<int>::iterator it1 = v.begin(); it != v.end(); it++)
    {
        cout << *(it);
    }

    // other way
    for (auto it = v.begin(); it != v.end(); it++)
    { // auto replace datatype declaration
        cout << *(it) << " ";
    }

    // very short way
    for (auto it : v)
    {
        cout << it << " ";
    }

    // deletion in vector
    //  {10,20,30,40}
    v.erase(v.begin() + 1); // deletes 20

    // {10,20,30,40,50,60}
    v.erase(v.begin() + 2, v.begin() + 4); // deletes element 30,40

    // insert function
    vector<int> v(2, 100);          //{100,100}
    v.insert(v.begin(), 300);       //{300,100,100} insert at beginning
    v.insert(v.begin() + 1, 2, 10); //{300,10,10,100,100}

    vector<int> copy(2, 50); //{50,50}
    // to insert other vector between other vector
    v.insert(v.begin(), copy.begin(), copy.end()); //{50,50,300,10,10,100,100}

    cout << v.size(); // gives size of vector or number of elements in vector
    v.pop_back();     // pops last element

    // v1-> {10,20}
    // v2-> {30,40}
    v1.swap(v2); // v1->{30,40}  and  v2->{10,20}

    v.clear(); // erase all vector

    cout << v.empty(); // vector is empty or not
}

void explainList()
{
    // similar like vector in declaration insertion
    list<int> ls;

    ls.push_back(2);     //{2}
    ls.emplace_back(4);  //{2,4}
    ls.push_front(5);    //{5,2,4}
    ls.emplace_front(7); //{7,2,4}

    // rest functions are same as vector
    // begin,end,rbegin,,rend,clear,insert,size,swap
}

void explainDeque()
{
    deque<int> dq;
    dq.push_back(1);     //{1}
    dq.emplace_back(2);  //{1,2}
    dq.push_front(4);    //{4,1,2}
    dq.emplace_front(3); //{3,4,1,2}

    dq.pop_back();  //{3,4,1}
    dq.pop_front(); //{4,1}

    // rest functions are same as vector
    // begin , end, rbegin,rend,clear,insert,size,swap
}

void explainStack()
{
    stack<int> st;
    st.push(1);    //{1}
    st.push(2);    //{2,1}
    st.push(3);    //{3,2,1}
    st.push(4);    //{4,3,2,1}
    st.emplace(5); //{5,4,3,2,1}

    cout << st.top(); // prints 5
    st.pop();         // removes 5 stack left {4,3,2,1}

    cout << st.top();   // prints 4
    cout << st.size();  // 4
    cout << st.empty(); // checks empty or not
    stack<int> s1, s2;
    s1.swap(s2);

    // everything happens in constant time
}

void explainQueue()
{
    queue<int> q;
    q.push(1);    // 1
    q.push(2);    //{1,2}
    q.emplace(4); //{1,2,4}

    q.back() += 5; // {1,2,9}
    // other are same as stack
}

void explainPQ()
{
    // max-heap declaration
    priority_queue<int> pq;

    pq.push(5);     // 5
    pq.push(2);     // 5,2
    pq.push(7);     // 7,5,2
    pq.emplace(10); // 10,7,5,2

    cout << pq.top(); // prints element at top or higher value //10
    pq.pop();         // prints element at top //10

    // min-heap declaration
    priority_queue<int, vector<int>, greater<int>> p;
    pq.push(5);     // 5
    pq.push(2);     // 2,5
    pq.push(7);     // 2,5,7
    pq.emplace(10); // 2,5,7,10

    pq.top(); // prints 2

    // time complexity of push->0(logn) and pop->0(logn) and top->0(1)
}

void explainSet()
{
    // stores in sorted order and non-repeated terms
    set<int> st;
    st.insert(1);  // 1
    st.emplace(2); // 1,2
    st.insert(2);  // 1,2
    st.insert(2);  // 1,2
    st.insert(4);  // 1,2,4
    st.insert(3);  // 1,2,3,4

    // begin(),end(),rbegin(),rend(),size(),
    //  empty() and swap() are same as vector and above studies DS

    st.erase(3); // 1,2,4

    int count = st.count(1); // gives 1 and 0 if not in set

    auto it1 = st.find(1);
    auto it2 = st.find(4);
    st.erase(it1, it2); // erase from it1 to it2
    // everything happens in logarithmic complexity
}

void explainMultiSet()
{
    // everything is same as set but stores duplicate values also
    multiset<int> ms;
    ms.insert(1); // 1
    ms.insert(1); // 1,1
    ms.insert(1); // 1,1,1

    int cnt = ms.count(1); // 3
    ms.erase(1);           // erase all 1
    ms.erase(ms.find(1));  // erase at index 1
    // rest all functions are same as set
}

void explainUSet()
{
    unordered_set<int> st;
    // does not works as set
    // but have a better complexity
    // all operations in 0(1) time worst case-> 0(n)
}

void explainMap()
{

    // stores value in key and value form {key,value} they can be of any datatype
    map<int, int> mp;
    map<int, pair<int, int>> mp1;
    map<pair<int, int>, int> mp2;

    mp[1] = 2;
    // mp.emplace({3,1});
    mp.insert({2, 4});
    mp2[{2, 3}] = 10;
    for (auto it : mp)
    {
        cout << it.first << " " << it.second << endl;
    }

    cout << mp[1]; // gives value at index 1 i.e.,2
    cout << mp[5]; // if not exist gives 0
}

// sorting algorithms
//  sort(v.begin(),v.end());
//  sort(a,a+n);

int main()
{
    // print();
    // cout << endl;
    // int ans = sum(1, 6);
    // cout << "sum is : " << ans;
    // explainPair();
    // explainVector();
    // explainList();
    // explainDeque();
    // explainStack();
    // explainQueue();
    // explainSet();
    // explainMultiSet();
    // explainUSet();
    explainMap();
    return 0;
}
