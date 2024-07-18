#include <iostream>
using namespace std;

int sum_of_divisor(int n)
{
    int func_sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            func_sum += i;
        }
    }
    return func_sum;
}

int main()
{
    int n;
    cout << "enter the value of n : ";
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += sum_of_divisor(i);
    }
    cout << "total sum is : " << sum;
}
