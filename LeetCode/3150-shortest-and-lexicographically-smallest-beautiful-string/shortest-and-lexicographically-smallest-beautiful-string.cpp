class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n = s.length();
        int count = 0;
        int i=0;
        int len = INT_MAX;
        for (int j=0; j<n; j++) {
            if (s[j]=='1') count++;
            while (count>k) {
                if (s[i++]=='1') count--;
            }
            while (i<j && s[i]=='0') i++;
            if (count==k) len = min(len, j-i+1);
        }
        if (len == INT_MAX) return "";
        vector <string> sub;
        i=0;
        count = 0;
        for (int j=0; j<n; j++) {
            if (s[j]=='1') count++;
            while (count>k) {
                if (s[i++]=='1') count--;
            }
            while (i<j && s[i]=='0') i++;
            if (count==k && j-i+1 == len) sub.push_back(s.substr(i, len)); 
        }
        sort(sub.begin(), sub.end());
        return sub[0];
    }
};