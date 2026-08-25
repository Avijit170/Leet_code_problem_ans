#include <bits/stdc++.h>
using namespace std;
class Solution 
{
public:
    int missingMultiple(vector<int>& nums, int k) 
    {
        int multiple = k;
        while (true) {
            bool found = false;
            for (int i = 0; i < nums.size(); i++) 
            {
                if (nums[i] == multiple) 
                {
                    found = true;
                    break;
                }
            }
            if (found == false) 
            {
                return multiple;
            }
            multiple = multiple + k;
        }
    }
};
int main() 
{
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
    Solution s;
    int answer = s.missingMultiple(nums, k);
    cout << "Output: " << answer << endl;
    return 0;
}