#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // This function checks whether a given string is a palindrome or not
    bool ispali(string &s) {
        int i = 0, j = s.length() - 1;

        // Compare characters from both ends moving towards the center
        while (i < j) {
            // If any mismatch is found, it is not a palindrome
            if (s[i++] != s[j--]) return false;
        }

        // If all characters matched, it is a palindrome
        return true;
    }

    // Recursive function to generate all palindrome partitions
    void solve(int i, int n, string &s,
               vector<string> &sub,
               vector<vector<string>> &ans) {

        // If we have reached the end of the string,
        // store the current partition
        if (i == n) {
            ans.push_back(sub);
            return;
        }

        string temp;

        // Try forming substrings starting from index i
        while (i < n) {
            temp += s[i];   // Extend the substring character by character

            // If current substring is a palindrome
            if (ispali(temp)) {
                sub.push_back(temp);          // Choose this substring
                solve(i + 1, n, s, sub, ans); // Recur for remaining string
                sub.pop_back();               // Backtrack to try other options
            }

            i++; // Move to next character to expand substring
        }
    }

    // Main function that starts the palindrome partitioning
    vector<vector<string>> partition(string s) {
        vector<string> sub;             // Stores current partition
        vector<vector<string>> ans;     // Stores all valid partitions

        // Start recursion from index 0
        solve(0, s.length(), s, sub, ans);

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