#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int stableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<long long> suffixMin(n);
        suffixMin[n - 1] = nums[n - 1];
        for (int i = n - 2; i >= 0; i--) 
        {
            suffixMin[i] = min((long long)nums[i], suffixMin[i + 1]);
        }
        long long prefixMax = nums[0];
        for (int i = 0; i < n; i++) 
        {
            prefixMax = max(prefixMax, (long long)nums[i]);
            long long instability = prefixMax - suffixMin[i];
            if (instability <= k)
                return i;
        }
        return -1;
    }
};

int main() {
    Solution obj;

    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int k;
    cin >> k;

    cout << obj.stableIndex(nums, k) << endl;

    return 0;
}