// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/CHEFSTEP

#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); 

    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin>>n>>k;
        for (int i=0; i<n; i++) {
            int x;
            cin>>x;
            cout<<(x%k ? 0 : 1);
        }
        cout<<endl;
    }
    return 0;
}