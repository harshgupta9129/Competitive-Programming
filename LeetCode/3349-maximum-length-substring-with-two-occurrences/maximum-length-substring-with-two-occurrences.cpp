class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n = s.length();
        unordered_map <char, int> mp;
        int maxLen = 0;
        int i=0;
        for (int j=0; j<n; j++) {
            mp[s[j]]++;
            while (mp[s[j]]>2) {
                mp[s[i++]]--;
            }
            maxLen = max(maxLen, j-i+1);
        }
        return maxLen;
    }
};