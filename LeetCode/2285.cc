#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        vector <int> freq(n, 0);
        for (vector <int> x : roads) {
            freq[x[0]]++;
            freq[x[1]]++;
        }
        vector <vector<int>> temp(n);
        for (int i=0; i<n; i++) temp[i] = {i,freq[i]};
        sort(temp.begin(), temp.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[1] < b[1];
        });
        vector <int> value(n,0);
        int curr = 1;
        for (int i=0; i<n; i++) {
            value[temp[i][0]] = curr;
            curr++;
        }
        long long ans = 0;
        for (vector <int> p : roads) {
            ans+=value[p[0]];
            ans+=value[p[1]];
        }
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