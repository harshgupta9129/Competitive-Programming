/*
 * @lc app=leetcode id=802 lang=cpp
 *
 * [802] Find Eventual Safe States
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool dfs(int node, vector<int> &isvisited, vector <int> &pathvisited, vector <int> &check, vector <vector <int>> &adj) {
        isvisited[node]=1;
        pathvisited[node]=1;
        for (int next : adj[node]) {
            if (!isvisited[next]) {
                if (dfs(next, isvisited, pathvisited, check, adj)) return true;
            }
            if (pathvisited[next]) return true;
        }
        pathvisited[node]=0;
        check[node]=1;
        return false;
    }

    vector<int> eventualSafeNodes(vector<vector<int>>& adj) {
        int n = adj.size();
        vector <int> isvisited(n, 0);
        vector <int> pathvisited(n, 0);
        vector <int> check(n, 0);
        for (int i=0; i<n; i++) {
            if (!isvisited[i]) dfs(i, isvisited, pathvisited, check, adj);
        }
        vector <int> ans;
        for (int i=0; i<n; i++) {
            if (check[i]) ans.push_back(i);
        }
        return ans;
    }
};
// @lc code=end

