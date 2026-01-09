#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector <int> block;
        int prev = -1;
        for (int i=0; i<n; i++) {
            if (s[i]=='#') {
                block.push_back(i-prev-1);
                prev = i;
            }
        }
        block.push_back(n-prev-1);
        int ans = 0;
        for (int i=0; i<block.size(); i++) {
            if (block[i]<3) ans+=block[i];
            else {
                ans = 2;
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}