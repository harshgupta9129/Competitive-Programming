/*
 * @lc app=leetcode id=1356 lang=cpp
 *
 * [1356] Sort Integers by The Number of 1 Bits
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector <vector <int>> store;
        for (int x : arr) {
            store.push_back({__builtin_popcount(x), x});
        }
        sort(store.begin(), store.end());
        for (int i=0; i<arr.size(); i++) {
            arr[i]=store[i][1];
        }
        return arr;
    }
};
// @lc code=end

