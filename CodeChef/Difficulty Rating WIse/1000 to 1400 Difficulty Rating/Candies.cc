// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/CNDY

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector <int> a(2*n);
        for(int i=0; i<2*n; i++) cin>>a[i];
        sort(a.begin(),a.end());
        bool flag = 0;
        for (int i=2; i<2*n; i++) {
            if (a[i-2]==a[i-1] && a[i-1]==a[i]) flag = 1;
        }
        cout<<(flag ? "NO" : "YES")<<endl;
    }
    return 0;
}