// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/INFERNO

#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n,x;
        cin>>n>>x;
        vector <float> arr(n);
        for (int i=0; i<n; i++) cin>>arr[i];
        sort(arr.begin(),arr.end());
        int time1 = arr[n-1];
        int time2 = 0;
        for (int i=0; i<n; i++) {
            time2+=ceil(arr[i]/x);
        }
        cout<<min(time1,time2)<<endl;
    }
    return 0;
}