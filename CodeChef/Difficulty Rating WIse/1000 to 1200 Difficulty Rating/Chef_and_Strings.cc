// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/CHEFSTR1

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector <int> s(n);
        for (int i=0; i<n; i++) cin>>s[i];
        long long ans = 0;
        for (int i=1; i<n; i++) {
            ans+=(abs(s[i]-s[i-1])-1);
        }
        cout<<ans<<endl;
    }
    return 0;
}