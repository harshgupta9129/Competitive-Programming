#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numRabbits(vector<int>& answers) {
        sort(answers.begin(), answers.end());
        int i=0;
        int n = answers.size();
        int ans = 0;
        while (i<n) {
            if (answers[i]==0) {
                ans++;
                i++;
                continue;
            }
            int temp = answers[i]+1;
            ans+=temp;
            int j=i;
            while (temp && j<n) {
                if (answers[i]==answers[j]) temp--;
                else break;
                j++;
            }
            i=j;
        }
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