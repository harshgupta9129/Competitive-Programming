#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int n = hand.size();
        if (n % groupSize) return false;

        unordered_map<int, int> freq;
        for (int x : hand) freq[x]++;

        vector<vector<int>> temp;
        for (auto p : freq) temp.push_back({p.first, p.second});
        sort(temp.begin(), temp.end());

        n = temp.size();
        int i = 0;

        while (i < n) {
            if (temp[i][1] == 0) {
                i++;
                continue;
            }

            int curr = temp[i][0];
            int j = i;
            int size = groupSize;

            while (size--) {
                if (j >= n || temp[j][0] != curr || temp[j][1] == 0)
                    return false;

                temp[j][1]--;
                curr++;
                j++;
            }
        }
        return true;
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