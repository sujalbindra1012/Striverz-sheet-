//  IN THIS WE KNOW ABOUT ALL THE STL PROPERTIES AND LOGICS

#include <iostream>
#include <algorithm>
#include <vector>

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

int main()
{
    // print();
    // cout << endl;
    // int ans = sum(1, 6);
    // cout << "sum is : " << ans;
    explainPair();
    return 0;
}
