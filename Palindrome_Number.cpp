#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;

        int original = x;
        long long reverse = 0;

        while (x > 0) {
            int digit = x % 10;
            reverse = reverse * 10 + digit;
            x = x / 10;
        }
        return original == reverse;
    }
};

int main() {
    Solution obj;

    int x;
    cin >> x;

    if (obj.isPalindrome(x))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}