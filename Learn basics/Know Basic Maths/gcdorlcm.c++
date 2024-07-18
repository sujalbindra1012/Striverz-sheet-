#include <iostream>
using namespace std;

int gcd(int a, int b)
{

    while (a != 0 && b != 0)
    {
        if (a > b)
        {
            a = a % b;
        }
        else
        {
            b = b % a;
        }
    }
    return a == 0 ? b : a;
}

int lcm(int a, int b, int gcd_ans)
{
    int ans = (a * b) / gcd_ans;
    return ans;
}

int main()
{
    int a, b;
    cout << "enter the value of a and b : ";
    cin >> a >> b;
    int gcd_ans = gcd(a, b);
    cout << "gcd of " << a << " and " << b << " is :" << gcd_ans;
    printf("\n");
    int lcm_ans = lcm(a, b, gcd_ans);
    cout << "lcm of " << a << " and " << b << " is :" << lcm_ans;
}