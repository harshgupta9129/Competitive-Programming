#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int addDigits(int num) {
        string s = to_string(num);
        while (s.length()!=1) {
            int temp = 0;
            for (char c : s) temp+=(c-'0');
            s = to_string(temp);
        }
        return stoi(s);
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        
    }
    return 0;
}