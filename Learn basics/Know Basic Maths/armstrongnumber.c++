#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

int power(int base, int exp)
{
    int result = 1;
    for (int i = 0; i < exp; ++i)
    {
        result *= base;
    }
    return result;
}

bool armstrongnumber(int n)
{

    int z = n;
    int m = 0;

    // count the digits
    while (z != 0)
    {
        z /= 10;
        m++;
    }

    int sum = 0;
    int temp = n;
    while (temp > 0)
    {
        int digit = temp % 10;
        sum += power(digit, m);
        temp /= 10;
    }
    cout << sum;
    return sum == n;
}

int main()
{
    int n;
    cout << "enter the number : ";
    cin >> n;
    bool ans = armstrongnumber(n);
    if (ans == true)
    {
        cout << "It is an armstrong number";
    }
    else
    {
        cout << "It is not an armstrong number";
    }
}