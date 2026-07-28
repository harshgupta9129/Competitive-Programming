class Solution {
public:
    string smallestPalindrome(string s) {
        vector <int> freq(26, 0);
        for (char c : s) freq[c-'a']++;
        char c = '+';
        int k = 0;
        int n = s.length();
        for (int i=0; i<26; i++) {
            if (freq[i]==1) {
                c = 'a'+i;
                freq[i]--;
            }
            for (int j=1; j<=freq[i]/2; j++) {
                s[k] = s[n-1-k] = 'a'+i;
                k++;
            }
        }
        if (c!='+') s[n/2] = c;
        return s;
    }
};