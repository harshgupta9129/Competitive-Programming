class Solution {
public:
    int atmost (string s, int k) {
        int n = s.length();
        int ans = 0;
        int i=0;
        unordered_map <char, int> mp;
        for (int j=0; j<n; j++) {
            mp[s[j]]++;
            while (mp.size()>k) {
                if (--mp[s[i]]==0) mp.erase(s[i]);
                i++;
            }
            ans+=(j-i+1);
        }
        return ans;
    }
    int numberOfSubstrings(string s) {
        return atmost(s, 3) - atmost(s, 2);
    }
};