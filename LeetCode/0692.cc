#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {   
        unordered_map<string,int> freq;
        for(string &w : words) freq[w]++;
        vector<pair<string,int>> v(freq.begin(), freq.end());
        sort(v.begin(), v.end(), [](auto &a, auto &b){
            if(a.second == b.second) return a.first < b.first; 
            return a.second > b.second;
        });
        vector<string> ans;
        for(int i = 0; i < k; i++) ans.push_back(v[i].first);
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