/*
 * @lc app=leetcode id=210 lang=cpp
 *
 * [210] Course Schedule II
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool dfs(int node, vector<int>& vis, vector<int>& pathVis, vector<int>& topo, vector<vector<int>>& adj) {
        vis[node] = 1;
        pathVis[node] = 1;

        for (int next : adj[node]) {
            if (!vis[next]) {
                if (dfs(next, vis, pathVis, topo, adj))
                    return true;
            } else if (pathVis[next]) {
                return true;
            }
        }

        pathVis[node] = 0;
        topo.push_back(node);

        return false;
    }
    
    // Kahn's Algorithms
    vector <int> bfs (int n, vector <vector <int>> &adj) {
        vector <int> indegree (n, 0);
        for (vector <int> p : adj) {
            for (int x : p) indegree[x]++;
        }
        vector <int> ans;
        queue <int> q;
        for (int i=0; i<n; i++) if (!indegree[i]) q.push(i);
        while (q.size()) {
            int node = q.front();
            q.pop();
            ans.push_back(node);
            for (int x : adj[node]) {
                indegree[x]--;
                if (indegree[x]==0) q.push(x);
            }
        }
        if (ans.size()!=n) return {};
        return ans;
    }

    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses);

        for (auto& p : prerequisites) {
            adj[p[1]].push_back(p[0]);
        }

        // vector<int> vis(numCourses, 0);
        // vector<int> pathVis(numCourses, 0);
        // vector<int> topo;

        // for (int i = 0; i < numCourses; i++) {
        //     if (!vis[i]) {
        //         if (dfs(i, vis, pathVis, topo, adj))
        //             return {};
        //     }
        // }

        // reverse(topo.begin(), topo.end());
        // return topo;
        return bfs(numCourses, adj);
    }
};
// @lc code=end

