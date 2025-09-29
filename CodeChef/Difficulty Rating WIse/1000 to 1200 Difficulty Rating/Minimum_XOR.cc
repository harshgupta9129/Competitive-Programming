// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/MINMXOR

#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector <int> arr(n);
        int ans = 0; 
        for (int i=0; i<n; i++) {
            cin>>arr[i];
            ans^=arr[i];
        }
        if (ans==0) {
            cout<<ans<<endl;
            continue;
        }
        int minans = ans;
        for (int i=0; i<n; i++) {
            int temp = ans^arr[i];
            if (temp < minans) minans = temp;
        }
        cout<<minans<<endl;
    }
    return 0;
}