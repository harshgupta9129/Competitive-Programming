// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/POSPROD

#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin>>n;
        long long countpos = 0;
        long long countneg = 0;
        for (int i=0; i<n; i++) {
            long long x;
            cin>>x;
            if (x<0) countneg++;
            else if (x>0) countpos++;
        }
        long long ans = (countpos * (countpos - 1)) / 2 + (countneg * (countneg - 1)) / 2;
        cout<<ans<<endl;
    }
    return 0;
}