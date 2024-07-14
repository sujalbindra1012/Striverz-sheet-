// Given a number n. Count the number of digits in n which evenly divide n. Return an integer, total number of digits of n which divides n evenly.

// Note :- Evenly divides means whether n is divisible by a digit i.e. leaves a remainder 0 when divided.

// examples:
// input n=12
// output=2
// explanation - 1,2 both divides 12 leave remainder 0

#include <iostream>
using namespace std;

void evenlydivides(int n)
{
    int count = 0;
    int y = n;
    while (n > 0)
    {
        int digit = n % 10;
        if ((digit != 0) && (y % digit == 0))
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