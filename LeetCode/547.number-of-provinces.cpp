/*
 * @lc app=leetcode id=547 lang=cpp
 *
 * [547] Number of Provinces
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void bfs (int i, vector <int> &visited, vector <vector <int>> &adj) {
        queue <int> q;
        q.push(i);
        visited[i]=1;
        while (q.size()!=0) {
            int temp = q.front();
            q.pop();
            for (int x : adj[temp]) {
                if (!visited[x]) {
                    q.push(x);
                    visited[x]=1;
                }
            }
        }
    }

    void dfs (int i, vector <int> &visited, vector <vector <int>> &adj) {
        visited[i]=1;
        for (int x : adj[i]) {
            if (!visited[x]) dfs(x, visited, adj);
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector <vector <int>> adj(n);
        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                if (isConnected[i][j]) adj[i].push_back(j);
            }
        }
        int ans = 0;
        vector <int> visited(n, 0);
        for (int i=0; i<n; i++) {
            if (!visited[i]) {
                ans++;
                // bfs(i, visited, adj);
                dfs(i, visited, adj);
            }
        }
        return ans;
    }
};
// @lc code=end

