// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/REMOVECARDS

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector <int> a(n);
        for (int i=0; i<n; i++) cin>>a[i];
        sort(a.begin(), a.end());
        int maxcount = 0;
        int count = 1;
        for (int i=1; i<n; i++) {
            if (a[i-1]==a[i]) count++;
            else {
                maxcount = max(maxcount,count);
                count = 1;
            }
        }
        cout<<n-max(maxcount,count)<<endl;
    }
    return 0;
}