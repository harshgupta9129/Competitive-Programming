/*
 * @lc app=leetcode id=1689 lang=cpp
 *
 * [1689] Partitioning Into Minimum Number Of Deci-Binary Numbers
 */

// @lc code=start
#include<bits/stdc++.h>>
using namespace std;

class Solution {
public:
    int minPartitions(string n) {
      return *max_element(n.begin(), n.end())-'0';  
    }
};
// @lc code=end

