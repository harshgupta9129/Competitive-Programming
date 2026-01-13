#include <bits/stdc++.h>
using namespace std;

// class Solution {
// public:
//     string frequencySort(string s) {
//         unordered_map <int, int> freq;
//         for (char c : s) freq[c]++;
//         vector <vector <int>> temp;
//         for (auto &p : freq) temp.push_back({p.second, p.first});
//         sort(temp.rbegin(), temp.rend());
//         string ans = "";
//         for (vector <int> p : temp) {
//             int count = p[0];
//             while (count--) {
//                 ans+=char(p[1]);
//             }
//         }
//         return ans;
//     }
// };

class Solution {
public:
    string frequencySort(string s) {
        unordered_map <int, int> freq;
        for (char c : s) freq[c]++;
        int n = s.length();
        vector <vector <char>> temp(n+1);
        for (auto &p : freq) temp[p.second].push_back(p.first);
        s = "";
        for (int i=n; i>=0; i--) {
            for (char c : temp[i]) s.append(i, c);
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