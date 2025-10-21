#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n,s;
        cin>>n>>s;
        int best_rating = 0;
        for (int i=0; i<n; i++) {
            int x,y;
            cin>>x>>y;
            if (best_rating < y && x<=s) best_rating = y; 
        }
        cout<<best_rating<<endl;
    }
    return 0;
}