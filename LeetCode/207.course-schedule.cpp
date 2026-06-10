/*
 * @lc app=leetcode id=207 lang=cpp
 *
 * [207] Course Schedule
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool detectcyclebydfs(int node, vector <int> &pathvisited, vector <int> &isvisited, vector <vector <int>> &adj) {
        isvisited[node]=1;
        pathvisited[node]=1;
        for (int next : adj[node]) {
            if (!isvisited[next]) {
                if (detectcyclebydfs(next, pathvisited, isvisited, adj)) return true;
            }
            else if (pathvisited[next]) return true;
        }
        pathvisited[node]=0;
        return false;
    }

    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int n = numCourses;
        vector <vector <int>> adj(n);
        for (vector <int> p : prerequisites) adj[p[1]].push_back(p[0]);
        vector <int> isvisited(n, 0);
        vector <int> pathvisited(n, 0);
        for (int i=0; i<n; i++) {
            if (!isvisited[i]) if (detectcyclebydfs(i, pathvisited, isvisited, adj)) return false;
        }
        return true;
    }
};
// @lc code=end

