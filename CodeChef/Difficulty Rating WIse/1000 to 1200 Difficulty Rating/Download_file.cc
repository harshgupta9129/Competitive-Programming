// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/DWNLD

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
        int mb = 0;
        for (int i=0; i<n; i++) {
            int a,b;
            cin>>a>>b;
            if (k>=a) k-=a;
            else if (k) {
                a-=k;
                k=0;
                mb+=a*b;
            }
            else mb+=a*b;
        }
        cout<<mb<<endl;
    }
    return 0;
}