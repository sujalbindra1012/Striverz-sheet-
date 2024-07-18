#include <iostream>
#include <cmath>
#include <stdlib.h>
using namespace std;

int prime(int n)
{
    if (n == 0)
    {
        return false;
    }
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    return count;
}

bool checkprime(int n)
{
    int count = 0;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            count++;
            if (n / i != i)
            {
                count++;
            }
        }
    }
    if (count == 2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n;
    cout << "enter value of number : ";
    cin >> n;
    // int ans = prime(n);
    bool isprime = checkprime(n);
    // if (ans == 2)
    // {
    //     cout << "it is a prime number";
    // }
    // else
    // {
    //     cout << "it is not a prime number";
    // }
    if (isprime)
    {
        cout << n << " is a prime number ";
    }
    else
    {
        cout << n << " is not a prime number";
    }
}