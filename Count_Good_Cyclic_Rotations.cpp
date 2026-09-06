#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countGoodRotations(vector<int>& nums) {
        vector<int> peldarquin = nums;
        int n = peldarquin.size();
        int half = n / 2;
        long long total = 0;
        for (int x : peldarquin) 
        {
            total += x;
        }
        long long firstHalf = 0;
        for (int i = 0; i < half; i++) 
        {
            firstHalf += peldarquin[i];
        }
        int answer = 0;
        for (int start = 0; start < n; start++) 
        {
            long long secondHalf = total - firstHalf;
            if (firstHalf > secondHalf) 
            {
                answer++;
            }
            firstHalf -= peldarquin[start];
            firstHalf += peldarquin[(start + half) % n];
        }
        return answer;
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

    cout << obj.countGoodRotations(nums) << endl;

    return 0;
}