#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solve (int i, int s, vector<vector<int>>& requests, vector <int> &build, int req, int &ans) {
        bool check = true;
        for (int x : build) {
            if (x!=0) {
                check = false;
                break;
            }
        }
        if (i==s) {
            if (check) ans = max(ans, req);
            return;
        }
        build[requests[i][0]]--;
        build[requests[i][1]]++;
        solve (i+1, s, requests, build, req+1, ans);
        build[requests[i][0]]++;
        build[requests[i][1]]--;
        solve (i+1, s, requests, build, req, ans);
    } 

    int maximumRequests(int n, vector<vector<int>>& requests) {
        vector <int> build(n, 0);
        int ans = 0;
        solve (0, requests.size(), requests, build, 0, ans);
        return ans;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        
    }
    return 0;
}