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

///aprroach 2 :KADANES ALGORITHM
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
      int curr = 0;
        int lar= INT_MIN;
 
    for (int i = 0; i <nums.size(); i++) {
        curr = curr + nums[i];
        lar = max(lar,curr);
 
        if(curr<0){
            curr = 0;
        }
    }
    return lar;
    }
    
};
