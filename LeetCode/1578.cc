#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int n = colors.size();
        int i=0;
        int ans = 0;
        while (i<n) {
            int j=i+1;
            int time = neededTime[i];
            while (j<n && colors[i]==colors[j]) {
                time+=neededTime[j];
                j++;
            }
            if (j-i==1) {
                i=j;
                continue;
            }
            int temp = *max_element(neededTime.begin()+i, neededTime.begin()+j);
            ans+=(time-temp);
            i=j;
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