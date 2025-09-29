// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/CLIPLX

#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int x,y;
        cin>>x>>y;
        int ans = 0;
        while (x>y) {
            ans++;
            y++;
        }
        cout<<ans<<endl;
    }
    return 0;
}