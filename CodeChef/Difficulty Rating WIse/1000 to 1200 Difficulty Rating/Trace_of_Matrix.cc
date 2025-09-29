// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/TRACE

#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin>>n;
        vector <vector <long long>> arr(n,vector <long long>(n));
        for (long long i=0; i<n; i++) {
            for (long long j=0; j<n; j++) {
                cin>>arr[i][j];
            }
        }
        long long ans = 0;
        for (long long j=0; j<n; j++) {
            long long sum = 0;
            long long a = 0;
            long long b = j;
            while (a<n && b<n) {
                sum+=arr[a++][b++];
            }
            if (ans<sum) ans = sum;
        }
        for (long long i=0; i<n; i++) {
            long long sum = 0;
            long long a = i;
            long long b = 0;
            while (a<n && b<n) {
                sum+=arr[a++][b++];
            }
            if (ans<sum) ans = sum;
        }
        cout<<ans<<endl;
    }
    return 0;
}