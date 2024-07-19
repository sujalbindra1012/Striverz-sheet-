#include <iostream>
using namespace std;

void iter(int arr[], int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        cout << " " << arr[i];
    }
}

void recursive(int arr[], int start, int end)
{
    if (start < end)
    {
        swap(arr[start], arr[end]);
        recursive(arr, start + 1, end - 1);
    }
}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n;
    cout << "enter value of n : ";
    cin >> n;

    int arr[10];
    cout << "enter value of an array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // iter(arr, n);
    recursive(arr, 0, n - 1);
    print(arr, n);
}