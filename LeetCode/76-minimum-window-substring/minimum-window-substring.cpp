class Solution {
public:
    string minWindow(string s, string t) {
        int slen = s.length();
        int tlen = t.length();
        vector <int> tfreq(256, 0);
        vector <int> sfreq(256, 0);

        // Store occurrence of characters of t
        for (char c : t) tfreq[c]++;
        int i=0;
        int start_idx = -1;
        int minLen = INT_MAX;
        int count = 0;
        for (int j=0; j<slen; j++) {
            // Count occurrence of characters of string s
            sfreq[s[j]]++;

            // If S's char matches with P's char and s freq is Less than or equal then increase count
            if (tfreq[s[j]] > 0 && sfreq[s[j]] <= tfreq[s[j]]) count++;

            // If all characters are matched
            if (count==tlen) {
                
                // Try to minimize the window
                while (tfreq[s[i]] == 0 || sfreq[s[i]] > tfreq[s[i]]) {
                    if (sfreq[s[i]] > tfreq[s[i]]) sfreq[s[i]]--;
                    i++;
                }

                // Update window size
                if (minLen > j-i+1) {
                    start_idx = i;
                    minLen = j-i+1;
                }
            }
        }
        if (start_idx == -1) return "";
        return s.substr(start_idx, minLen);
    }
};