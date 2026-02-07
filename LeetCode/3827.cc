#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countMonobit(int n) {
        if (n==0) return 1;
        int ans = 1;
        int i=0;
        int j=0;
        while (true) {
            i+=pow(2,j);
            if (i<=n) ans++;
            else break;
            j++;
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