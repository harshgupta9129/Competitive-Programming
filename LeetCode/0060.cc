#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string getPermutation(int n, int k) {

        // Precompute factorials:
        // fact[i] = i!  (used to count permutations in each block)
        vector<int> fact(n + 1, 1);
        for (int i = 1; i <= n; i++)
            fact[i] = fact[i - 1] * i;

        // done[i] = true means number i is already used in the permutation
        vector<bool> done(n + 1, false);

        // Final answer string
        string ans;

        // We will decide each position one by one
        for (int i = 0; i < n; i++) {

            // temp will store all unused numbers in increasing order
            string temp;
            for (int j = 1; j <= n; j++) {
                if (done[j]) continue;
                temp += char(j + '0');
            }

            // Number of permutations starting with one fixed digit
            // For remaining (n - i) digits:
            // (n - i)! / (n - i) = (n - i - 1)!
            int pic = fact[n - i] / (n - i);

            // Decide which block k lies in (1-based indexing)
            int pos = (k + pic - 1) / pic;

            // Pick the pos-th unused digit
            ans += temp[pos - 1];

            // Mark that digit as used
            done[temp[pos - 1] - '0'] = true;

            // Reduce k to position within the chosen block
            k -= pic * (pos - 1);
        }

        // Final k-th permutation
        return ans;
    }
};


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        
    }
    return 0;
}