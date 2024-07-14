// Given a number n. Count the number of digits in n which evenly divide n. Return an integer, total number of digits of n which divides n evenly.

// Note :- Evenly divides means whether n is divisible by a digit i.e. leaves a remainder 0 when divided.

// examples:
// input n=12
// output=2
// explanation - 1,2 both divides 12 leave remainder 0

// Input: n = 2446
// Output: 1
// Explanation: Here among 2, 4, 6 only 2 divides 2446 evenly while 4 and 6 do not.

// Input: n = 23
// Output: 0
// Explanation: 2 and 3, none of them divide 23 evenly.

#include <iostream>
using namespace std;

void evenlydivides(int n)
{
    int count = 0;
    int y = n;
    while (n > 0)
    {
        int digit = n % 10;
        if ((digit != 0) && (y % digit == 0))    //digit!=0 is used to remove problem of having 0 in digit
        {
            count++;
        }
        n /= 10;
    }
    cout << "ans is : " << count;
}

int main()
{
    int n;
    cout << "enter the value of number : ";
    cin >> n;
    evenlydivides(n);
}