#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        string s = "";
        vector<pair<int, char>> formate = {{a, 'a'}, {b, 'b'}, {c, 'c'}};
        while (true) {
            sort(formate.begin(), formate.end(), greater<>());
            bool added = false;
            for (int i = 0; i < 3; i++) {
                if (formate[i].first == 0) continue;
                int n = s.size();
                if (n >= 2 && s[n-1] == formate[i].second && s[n-2] == formate[i].second) continue;
                s += formate[i].second;
                formate[i].first--;
                added = true;
                break;
            }

            if (!added) break;
        }
        return s;
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