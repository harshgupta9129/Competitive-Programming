#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if (n==0) return 1;
        int ans = 10;
        for (int i=2; i<=n; i++) {
            int rem = 1;
            int temp = 1;
            int mul = 9;
            for (int j=1; j<=i; j++) {
                temp*=mul;
                if (rem) rem = 0;
                else mul--;
            }
            ans+=temp;
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