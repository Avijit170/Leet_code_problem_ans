#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countRotations(string s, int k) {
        int n = s.length();
        int answer = 0;
        for (int start = 0; start < n; start++) 
        {
            int score = 0;
            for (int i = 0; i < n - 1; i++) 
            {
                char current = s[(start + i) % n];
                char next = s[(start + i + 1) % n];
                if (current == next)
                    score++;
            }
            if (score == k)
                answer++;
        }
        return answer;
    }
};

int main() {

    Solution obj;

    string s;
    int k;

    cin >> s;
    cin >> k;

    cout << obj.countRotations(s, k) << endl;

    return 0;
}