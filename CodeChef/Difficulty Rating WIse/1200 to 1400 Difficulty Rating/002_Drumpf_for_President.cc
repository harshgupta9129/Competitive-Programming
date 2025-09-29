// https://www.codechef.com/problems/STUDVOTE

#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long t;
    cin >> t;
    while (t--) {
        long long n,k;
        cin>>n>>k;
        vector <long long> vote(n+1);
        for (long long i=1; i<=n; i++) {
            long long x;
            cin>>x;
            if (i==x) vote[x]=INT16_MIN;
            vote[x]++;
        }
        long long count = 0;
        for (long long i=1; i<=n; i++) if (vote[i]>=k) count++;
        cout<<count<<endl;
    }
    return 0;
}