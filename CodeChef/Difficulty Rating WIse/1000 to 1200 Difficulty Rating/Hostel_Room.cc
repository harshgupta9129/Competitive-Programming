// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/HOSTELROOM

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
        int max = x;
        for (int i=0; i<n; i++) {
            int a;
            cin>>a;
            if (a<0) x+=a;
            else x+=a;
            if (max < x) max = x;
        }
        cout<<max<<endl;
    }
    return 0;
}