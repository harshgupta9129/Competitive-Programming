// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/ADJSUMPAR

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector <int> b(n);
        for (int i=0; i<n; i++) cin>>b[i];
        vector <int> a(n,-1);
        a[0] = 0;
        for (int i=0; i<n-1; i++) {
            if (b[i]==0) {
                a[i+1] = a[i];
            }
            else a[i+1] = !a[i];
        }
        cout<<((a[0]+a[n-1])%2==b[n-1] ? "YES" : "NO")<<endl;
    }
    return 0;
}