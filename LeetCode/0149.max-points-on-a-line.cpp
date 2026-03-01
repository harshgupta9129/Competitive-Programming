/*
 * @lc app=leetcode id=149 lang=cpp
 *
 * [149] Max Points on a Line
 */

// @lc code=start

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int n = points.size();
        int ans = 0;
        for (int i=0; i<n; i++) {
            unordered_map <double, int> tracker;
            for (int j=0; j<n; j++) {
                int x = points[i][0]-points[j][0];
                int y = points[i][0]-points[j][1];
                double angle = atan2(y, x);
                tracker[angle]++;
            }
            int maxi = 0;
            for (auto p : tracker) if (maxi<p.second) maxi = p.second;
            if (ans<maxi) ans = maxi;
        }
        return ans;
    }
};
// @lc code=end

