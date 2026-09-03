#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        int n = arr.size();
        int mn = arr[0];
        int mx = arr[0];
        for (int x : arr) 
        {
            mn = min(mn, x);
            mx = max(mx, x);
        }
        if ((mx - mn) % (n - 1) != 0)
            return false;

        int d = (mx - mn) / (n - 1);
        if (d == 0) 
        {
            for (int x : arr) 
            {
                if (x != mn)
                    return false;
            }
            return true;
        }
        sort(arr.begin(), arr.end());

        for (int i = 1; i < n; i++) 
        {
            if (arr[i] - arr[i - 1] != d)
                return false;
        }
        return true;
    }
};
int main() {
    Solution obj;

    int n;
    cout << "Enter array size: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    if (obj.canMakeArithmeticProgression(arr))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}