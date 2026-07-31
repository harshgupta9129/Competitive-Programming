class Solution {
public:
    int minimumPushes(string word) {
        unordered_map <char, int> mp;
        for (char c : word) mp[c]++;
        vector <vector <int>> arr;
        for (auto it : mp) arr.push_back({it.second, it.first});
        sort(arr.rbegin(), arr.rend());
        int ans = 0;
        for (int i=0; i<arr.size(); i++) {
            if (i<=7) ans+=arr[i][0];
            else if (i<=15) ans+=arr[i][0]*2;
            else if (i<=23) ans+=arr[i][0]*3;
            else ans+=arr[i][0]*4;
        } 
        return ans;
    }
};