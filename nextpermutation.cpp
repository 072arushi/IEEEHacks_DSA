#include <iostream>
using namespace std;
#include <algorithm>

int printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int reverse(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int nextpermutation(int arr[], int n)
{
    if (n == 1)
    {
        return arr[0];
    }

    int idx1;

    if (n > 1)
    {
        for (int i = n - 2; i >= 0; i--)
        {
            if (arr[i] < arr[i + 1])
            {
                idx1 = i;
                break;
            }
        }
        if (idx1 == -1)
        {
            int l;
            cout << "enter the size of the array";
            cin >> l;
            reverse(arr, 3);
        }
        else
        {
            int prev = idx1;
            for (int x = idx1 + 1; x < n; x++)
            {
                if (arr[x] > arr[idx1 - 1] && arr[x] < arr[prev])
                {
                    prev = x;
                }
            }
            swap(arr[idx1 - 1], arr[prev]);
        }
        sort(arr[idx1], arr[n - 1]);
    }
}

int main()

{

    int arr[3] = {2, 1, 3};
    int idx1;
    int n = 3;
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] < arr[i + 1])
        {
            idx1 = i;
            break;
        }
    }

    int prev = idx1;
    for (int x = idx1 + 1; x < n; x++)
    {
        if (arr[x] > arr[idx1 - 1] && arr[x] < arr[prev])
        {
            prev = x;
                }
    }
    swap(arr[idx1 - 1], arr[prev]);
    sort(arr[idx1], arr[n - 1]);
}
