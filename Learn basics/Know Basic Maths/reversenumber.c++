// Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

// Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

// Example 1:

// Input: x = 123
// Output: 321
// Example 2:

// Input: x = -123
// Output: -321
// Example 3:

// Input: x = 120
// Output: 21

#include <iostream>
using namespace std;

void reversenum(int n)
{
    int x = n;
    int ans = 0;
    while (n != 0)
    {
        int digit = n % 10;
        // if(ans>INT_MAX/10 && ans<INT_MIN/10){
        // return 0;      exceptional case for 32 bit integer to resolve problem
        // }
        ans = (ans * 10) + digit;
        n /= 10;
    }
    cout << "reversed num is : " << ans;
}

int main()
{
    int n;
    cout << "enter the value of number : ";
    cin >> n;
    reversenum(n);
}