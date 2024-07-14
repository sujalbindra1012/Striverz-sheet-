// Given an integer x, return true if x is a
// palindrome
//  and false otherwise.

// Example 1:

// Input: x = 121
// Output: true
// Explanation: 121 reads as 121 from left to right and from right to left.
// Example 2:

// Input: x = -121
// Output: false
// Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
// Example 3:

// Input: x = 10
// Output: false
// Explanation: Reads 01 from right to left. Therefore it is not a palindrome.

#include <iostream>
using namespace std;

void palindrome(int n)
{
    int x = n;
    int ans = 0;
    while (n > 0)
    {

        int digit = n % 10;
        // if(ans>INT_MAX/10 && ans<INT_MIN/10){
        // return 0;      exceptional case for 32 bit integer to resolve problem
        // }
        ans = (ans * 10) + digit;
        n /= 10;
    }
    if (ans == x)
    {
        cout << "palindrome number";
    }

    else
    {
        cout << "not a palindrome number";
    }
}

int main()
{
    int n;
    cout << "enter the value of number : ";
    cin >> n;
    palindrome(n);
}