#include <iostream>
using namespace std;

int duplicate(int arr[], int n)
{
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        ans = ans ^ i;
    }
    cout << ans << endl;

    for (int j = 0; j < n; j++)
    {

        if (j + 1 == arr[j])
        {
            continue;
        }

        else
        {
            cout << j + 1;
        }
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 2};
    duplicate(arr, 5);
}