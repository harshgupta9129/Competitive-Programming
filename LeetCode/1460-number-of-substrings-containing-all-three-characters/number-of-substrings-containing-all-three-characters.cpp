class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.length();
        int i = 0;
        int ans = 0;
        int countA = 0, countB = 0, countC = 0;
        for (int j=0; j<n; j++) {
            if (s[j]=='a') countA++;
            else if (s[j]=='b') countB++;
            else countC++;
            while (countA>0 && countB>0 && countC>0) {
                ans+=(n-j);
                if (s[i]=='a') countA--;
                else if (s[i]=='b') countB--;
                else countC--;
                i++;
            }
        }
        return ans;
    }

    // At Most Approach
    // int atmost (string s, int k) {
    //     int n = s.length();
    //     int ans = 0;
    //     int i=0;
    //     unordered_map <char, int> mp;
    //     for (int j=0; j<n; j++) {
    //         mp[s[j]]++;
    //         while (mp.size()>k) {
    //             if (--mp[s[i]]==0) mp.erase(s[i]);
    //             i++;
    //         }
    //         ans+=(j-i+1);
    //     }
    //     return ans;
    // }
    // int numberOfSubstrings(string s) {
    //     return atmost(s, 3) - atmost(s, 2);
    // }
};