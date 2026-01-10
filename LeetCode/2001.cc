#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& rectangles) {
        multiset <double> ratios;
        unordered_set <double> unique_ratio;
        int n = rectangles.size();
        for (int i=0; i<n; i++) {
            double temp = 1.0*rectangles[i][1]/rectangles[i][0];
            ratios.insert(temp);
            unique_ratio.insert(temp);
        }
        long long ans = 0;
        for (auto p : unique_ratio) {
            long long temp = ratios.count(p);
            if (temp>1) ans+=(temp*(temp-1)/2);
        }
        return ans;
    }
};

// class Solution {
// public:
//     long long interchangeableRectangles(vector<vector<int>>& rectangles) {
//         map <pair<int, double>, long long> no_of_same;
//         int n = rectangles.size();
//         for (int i=0; i<n; i++) no_of_same[{rectangles[i][1]/rectangles[i][0], 1.0*rectangles[i][1]/rectangles[i][0]}]++;
//         long long ans = 0;
//         for (auto &p : no_of_same) if (p.second>1) ans+=(p.second*(p.second-1)/2);
//         return ans;
//     }
// };

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        
    }
    return 0;
}