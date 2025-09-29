// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/CHEFZOT

#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;
    vector <int> arr(n);
    for (int i=0; i<n; i++) cin>>arr[i];
    int currlength = 0;
    int ans = 0;
    for (int i=0; i<n; i++) {
        if (arr[i]) currlength++;
        else {
            if (currlength>ans) ans = currlength;
            currlength=0;
        } 
    }
    if (currlength>ans) ans = currlength;
    cout<<ans<<endl;
    return 0;
}