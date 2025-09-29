// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/PERMUTATION

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
        vector <long long> arr(n);
        for (long long i=0; i<n; i++) cin>>arr[i];
        sort(arr.begin(),arr.end());
        long long ans = 0;
        bool flag = true;
        for (long long i=0; i<n; i++) {
            if (arr[i]>i+1) {
                flag = false;
                break;
            }
            ans+=(i+1-arr[i]);
        }
        if (flag) cout<<ans<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}