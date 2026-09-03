#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canMakeSameParity(vector<int>& nums1) {
        bool hasOdd = false;
        bool hasEven = false;

        int mn = nums1[0];

        for (int x : nums1) {
            if (x % 2 == 0)
                hasEven = true;
            else
                hasOdd = true;

            mn = min(mn, x);
        }
        if (!hasOdd || !hasEven)
            return true;

        return mn % 2 == 1;
    }
};

int main() {
    int n, k;
    cout << "Enter array size: ";
    cin >> n;
    vector<int> nums1(n);
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) 
    {
        cin >> nums1[i];
    }
    Solution obj;

    if (obj.canMakeSameParity(nums1))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}