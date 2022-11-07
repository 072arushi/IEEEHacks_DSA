#include <climits>
#include <iostream>
using namespace std;
int max_subarray(int arr[], int n)
{
    int ans = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (sum + arr[i] > 0)
        {
            sum = sum + arr[i];
            ans = max(sum, ans);
        }

        else
        {
            sum = 0;
        }
    }
    cout << ans << endl;
}

int main()
{
    int arr[9] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    max_subarray(arr, 9);
}