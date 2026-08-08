class Solution {
public:
    vector<int> validSequence(string word1, string word2) {
        int n = word1.size();
        int m = word2.size();

        // suf[i] = index in word1 where word2[i] can be matched
        // when matching word2[i...m-1] from right to left.
        vector<int> suf(m, -1);

        int j = n - 1;

        for (int i = m - 1; i >= 0; i--) {
            while (j >= 0 && word1[j] != word2[i]) {
                j--;
            }

            if (j < 0)
                break;

            suf[i] = j;
            j--;
        }

        vector<int> ans;

        int p = 0;
        bool usedMismatch = false;

        for (int i = 0; i < n && p < m; i++) {

            // Exact match
            if (word1[i] == word2[p]) {
                ans.push_back(i);
                p++;
            }

            // Use the one allowed mismatch
            else if (!usedMismatch) {

                // If this is the last character, mismatch is allowed.
                //
                // Otherwise, the remaining suffix of word2 must be
                // matchable strictly after index i.
                if (p == m - 1 ||
                    (suf[p + 1] != -1 && suf[p + 1] > i)) {

                    ans.push_back(i);
                    p++;
                    usedMismatch = true;
                }
            }
        }

        // Couldn't construct the complete sequence
        if (p != m)
            return {};

        return ans;
    }
};