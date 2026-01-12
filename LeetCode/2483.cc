#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int bestClosingTime(string customers) {
        int n = customers.length();
        int closed = 0;
        for (int i=0; i<n; i++) if (customers[i]=='Y') closed++;
        int penality = closed;
        int ans = 0;
        int opens = 0;
        for (int i=1; i<=n; i++) {
            if (customers[i-1]=='N') opens++;
            else closed--;
            if (penality>opens+closed) {
                penality = opens+closed;
                ans = i;
            }
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