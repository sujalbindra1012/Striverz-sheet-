#include <iostream>
using namespace std;

void func(int i, int n)
{
    if (i > n)
        return;
    cout << "sujal" << endl;

    func(i + 1, n);
}

int main()
{
    int n;
    cout << "enter value of n :";
    cin >> n;

    func(1, n);
    return 0;
}
