#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool ispalindrome(string s)
{
    int i = 0;
    int j = s.size() - 1;
    while (i <= j)
    {
        if (!isalnum(s[i]))
        {
            i++;
            continue;
        }
        if (!isalnum(s[j]))
        {
            j--;
            continue;
        }
        if (tolower(s[i]) != tolower(s[j]))
        {
            return false;
        }
        else
        {
            i++;
            j--;
        }
    }
    return true;
}

int main()
{
    string str;
    cout << "enter the string : ";
    cin >> str;

    bool ans = ispalindrome(str);
    if (ans == true)
    {
        cout << "valid palindrome";
    }
    else
    {
        cout << "not a valid palindrome";
    }
}