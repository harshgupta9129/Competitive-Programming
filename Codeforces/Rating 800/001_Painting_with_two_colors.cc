// 2134A	Painting With Two Colors

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n,a,b;
        cin>>n>>a>>b;
        // For symetricity
        bool blue_centerable = ((n-b)%2==0);
        bool ok = 0;

        if (blue_centerable) {
            // if a less that b then blue covers all max no red present
            if (a<=b) ok = 1;

            // if greater them red follows symetricity
            else if ((n-a)%2==0) ok = 1;
        }
        cout<<(ok ? "YES\n" : "NO\n");
    }
    return 0;
}