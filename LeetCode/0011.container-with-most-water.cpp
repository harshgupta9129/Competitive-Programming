/*
 * @lc app=leetcode id=11 lang=cpp
 *
 * [11] Container With Most Water
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size()-1;
        int ans = 0;
        int width = right;
        while (left<right) {
            int level = min(height[left], height[right]);
            ans = max(ans, level*width);
            if (height[left]<height[right]) left++;
            else right--;
            width--;
        }
        return ans;
    }
};
// @lc code=end

