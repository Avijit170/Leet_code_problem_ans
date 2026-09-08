#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countCommas(int n) {
        if (n < 1000) {
            return 0;
        }
        return n-999;
    }
};

int main() {
    Solution obj;

    int n;
    cin >> n;

    cout << obj.countCommas(n) << endl;

    return 0;
}