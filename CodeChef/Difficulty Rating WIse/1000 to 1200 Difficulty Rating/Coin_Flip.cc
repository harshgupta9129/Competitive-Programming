// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/CONFLIP

#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int g;
        cin>>g;
        while (g--) {
            int i,n,q;
            cin>>i>>n>>q;
            if (n%2) {
                if (i!=q) cout<<(n+1)/2<<endl;
                else cout<<n/2<<endl;;
            }
            else cout<<n/2<<endl;
        }
    }
    return 0;
}