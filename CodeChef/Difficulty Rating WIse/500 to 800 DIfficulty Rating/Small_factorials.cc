#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector <int> ans(1,1);
        for (int i=2; i<=n; i++) {
            int carry = 0;
            for (int j=0; j < ans.size(); j++) {
                int temp = ans[j]*i + carry;
                ans[j] = temp%10;
                carry = temp/10;
            }
            while (carry) {
                ans.push_back(carry%10);
                carry/=10;
            }
        }
        for (int i = ans.size()-1; i>=0; i--) cout<<ans[i];
        cout<<endl;
    }
    return 0;
}