/*
 * @lc app=leetcode id=797 lang=cpp
 *
 * [797] All Paths From Source to Target
 */

// @lc code=start

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solve (int curr, int reach, vector <int> &path, unordered_set <int> &visit, vector <vector <int>> &ans, vector<vector<int>>& graph) {
        if (curr == reach) {
            ans.push_back(path);
            return;
        }
        for (int x : graph[curr]) {
            if (visit.count(x)) continue;
            path.push_back(x);
            visit.insert(x);
            solve(x, reach, path, visit, ans, graph);
            path.pop_back();
            visit.erase(x);
        }
    }

    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int n = graph.size();
        vector <int> path(1, 0);
        unordered_set <int> visit;
        visit.insert(0);
        vector <vector <int>> ans;
        solve(0, n-1, path, visit, ans, graph);
        return ans;
    }
};
// @lc code=end

