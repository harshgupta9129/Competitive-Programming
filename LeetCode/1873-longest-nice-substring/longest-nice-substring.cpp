class Solution {
public:
    string longestNiceSubstring(string s) {
        int n= s.length();
        string ans = "";
        for (int i=0; i<n; i++) {
            unordered_map <char, int> mp;
            for (int j=i; j<n; j++) {
                mp[s[j]]++;
                bool check = true;
                for (auto [key, value] : mp) {
                    if (key >= 'a' && key <= 'z') {
                        if (!mp.count(toupper(key))) {
                            check = false; 
                            break;
                        }
                    }
                    else {
                        if (!mp.count(tolower(key))) {
                            check = false;
                            break;
                        }
                    }
                }
                if (check && ans.length() < j-i+1) ans = s.substr(i, j-i+1);
            }
        }
        return ans;
    }
};