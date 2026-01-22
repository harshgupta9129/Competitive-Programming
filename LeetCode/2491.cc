#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(), skill.end());
        int n = skill.size();
        int i=0, j=n-1;
        int temp = skill[i]+skill[j];
        long long ans = 0;
        while (i<j) {
            if (skill[i]+skill[j]!=temp) return -1;
            ans+=(skill[i++]*skill[j--]);
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