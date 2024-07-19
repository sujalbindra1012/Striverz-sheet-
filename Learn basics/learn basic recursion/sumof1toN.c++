#include <iostream>
using namespace std;

void print(int i, int sum)
{
    if (i < 1)
    {
        cout << sum << endl;
        return;
    }

    print(i - 1, sum + i);
}

int sum(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return n + sum(n - 1);
}

int main()
{
    int n;
    cout << "enter value of n :";
    cin >> n;
    // print(n, 0);
    int ans = sum(n);
    cout << ans;
}