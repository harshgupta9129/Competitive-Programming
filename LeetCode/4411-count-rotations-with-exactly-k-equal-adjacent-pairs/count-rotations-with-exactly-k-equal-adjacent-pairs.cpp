class Solution {
public:
    int countRotations(string s, int k) {
        int n = s.length();
        s+=s.substr(0, n-1);
        int curr = 0;
        for (int i=0; i<n-1; i++) if (s[i]==s[i+1]) curr++;
        int i=0, j=n;
        int ans = 0;
        if (curr==k) ans++;
        while (j<=2*(n-1)) {
            if (s[i]==s[i+1]) curr--;
            i++;
            if (s[j]==s[j-1]) curr++;
            j++;
            if (curr==k) ans++;
        }
        return ans;
    }
};