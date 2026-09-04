#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int stableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> suffixMin(n);
        suffixMin[n - 1] = nums[n - 1];
        for (int i = n - 2; i >= 0; i--) 
        {
            suffixMin[i] = min(nums[i], suffixMin[i + 1]);
        }
        int prefixMax = nums[0];
        for (int i = 0; i < n; i++) 
        {
            prefixMax = max(prefixMax, nums[i]);
            int instability = prefixMax - suffixMin[i];
            if (instability <= k)
                return i;
        }
        return -1;
    }
};
int main() {
    Solution obj;

    int n, k;
    cout << "Enter array size: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) 
    {
        cin >> nums[i];
    }
    cout << "Enter k: ";
    cin >> k;

    cout << obj.stableIndex(nums, k) << endl;

    return 0;
}