#include <iostream>
using namespace std;

void fact(int i, int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    cout << "factorial is  : " << fact;
}

int recursive(int n)
{

    if (n == 1)
    {
        return 1;
    }

    return n * recursive(n - 1);
}

int main()
{
    int n;
    cout << "enter value of n :";
    cin >> n;
    // fact(1, n);
    int ans = recursive(n);
    cout << "factorial is : " << ans;
}