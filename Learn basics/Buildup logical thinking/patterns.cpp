#include <iostream>
using namespace std;

void print1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}

void print2(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}

void print3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void print4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

void print5(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= n - i; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}

void print6(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void print7(int n)
{
    for (int i = 0; i < n; i++)
    {
        // for spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // for stars
        for (int j = 0; j < (2 * i) + 1; j++)
        {
            cout << "*";
        }
        // for other spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void print8(int n)
{
    for (int i = 0; i < n; i++)
    {
        // for spaces
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        // for stars
        for (int j = 0; j < 2 * n - ((2 * i) + 1); j++)
        {
            cout << "*";
        }
        // for other spaces
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void print9(int n)
{
    for (int i = 0; i < n; i++)
    {
        // for spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // for stars
        for (int j = 0; j < (2 * i) + 1; j++)
        {
            cout << "*";
        }
        // for other spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {

        // for spaces
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        // for stars
        for (int j = 0; j < 2 * n - ((2 * i) + 1); j++)
        {
            cout << "*";
        }
        // for other spaces
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void print10(int n)
{
    for (int i = 0; i < (2 * n) - 1; i++)
    {
        if (i < n)
        {
            for (int j = 0; j <= i; j++)
            {
                cout << "*" << " ";
            }
        }
        else
        {
            for (int j = 0; j < (2 * n - i) - 1; j++)
            {
                cout << "*" << " ";
            }
        }
        cout << endl;
    }
}

void print11(int n)
{
    for (int i = 0; i < n; i++)
    {
        int start = 1;
        if (i % 2 == 0)
        {
            start = 1;
        }
        else
        {
            start = 0;
        }
        for (int j = 0; j <= i; j++)
        {
            cout << start << " ";
            start = 1 - start;
        }

        cout << endl;
    }
}

void print12(int n)
{
    // int space = 2 * (n - 1);
    for (int i = 1; i <= n; i++)
    {
        // print num
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        // for space
        for (int j = 0; j <= (2 * n) - (2 * i); j++)
        {
            cout << " ";
        }
        // for num
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
        // space -= 2;
    }
}

void print13(int n)
{
    int count = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << count << " ";
            count = count + 1;
        }
        cout << endl;
    }
}

void print14(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A'; ch <= 'A' + i; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}

void print15(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A'; ch <= 'A' + (n - i - 1); ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}

void print16(int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch = 'A' + i;
        for (int j = 0; j <= i; j++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}

void print17(int n)
{
    for (int i = 0; i < n; i++)
    {
        // for spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // for chars
        char ch = 'A';
        int breakpoint = (2 * i + 1) / 2;
        for (int j = 1; j <= 2 * i + 1; j++)
        {
            cout << ch;
            if (j <= breakpoint)
                ch++;
            else
                ch--;
        }

        // for other spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void print18(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'E' - i; ch <= 'E'; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}

void print19(int n)
{
    int space = 0;
    for (int i = 0; i < n; i++)
    {
        // stars
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }
        // for spaces
        for (int j = 0; j < space; j++)
        {
            cout << " ";
        }
        // for stars
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }
        space += 2;
        cout << endl;
    }
    int inis = 8;
    for (int i = 1; i <= n; i++)
    {
        // stars
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 0; j < inis; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        inis -= 2;
        cout << endl;
    }
}

void print20(int n)
{
    int spaces = 2 * n - 2;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int stars = i;
        if (i > n)
            stars = 2 * n - i;
        // starss
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        // spaces
        for (int j = 1; j <= spaces; j++)
        {
            cout << " ";
        }
        // spaces
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        cout << endl;
        if (i < n)
            spaces -= 2;
        else
            spaces += 2;
    }
}

void print21(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
            {
                cout << "*";
            }
            else
                cout << " ";
        }
        cout << endl;
    }
}

void print22(int n)
{
    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            int top = i;
            int left = j;
            int right = (2 * n - 2) - j;
            int down = (2 * n - 2) - i;
            cout << (n - min(min(top, down), min(left, right)));
        }
        cout << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    {
        int n;
        cin >> n;
        cout << endl;
        // print1(n);
        // print2(n);
        // print3(n);
        // print4(n);
        // print5(n);
        // print6(n);
        // print7(n);
        // print8(n);
        // print9(n);
        // print10(n);
        // print11(n);
        // print12(n);
        // print13(n);
        // print14(n);
        // print15(n);
        // print16(n);
        // print17(n);
        // print18(n);
        // print19(n);
        // print20(n);
        // print21(n);
        print22(n);
        cout << endl;
    }
}