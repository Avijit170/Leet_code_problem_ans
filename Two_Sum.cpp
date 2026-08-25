#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int> v;
        for (int i = 0; i < nums.size(); i++) 
        {
            for (int j = i + 1; j < nums.size(); j++) 
            {

                if (nums[i] + nums[j] == target) 
                {
                    v.push_back(i);
                    v.push_back(j);
                    return v;
                }
            }
        }
        return v;
    }
};
int main() 
{
    int n, target;
    cout << "Enter array size: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) 
    {
        cin >> nums[i];
    }
    cout << "Enter target: ";
    cin >> target;
    Solution s;
    vector<int> answer = s.twoSum(nums, target);
    cout << "Output: ";
    for (int i = 0; i < answer.size(); i++) {
        cout << answer[i] << ",";
    }
    return 0;
}