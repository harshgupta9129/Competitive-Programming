// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/QTOO_2523

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        string str;
        cin>>str;
        sort(str.begin(), str.end());
        bool flag = 0;
        for (int i=1; i<n; i++) {
            if (str[i-1]==str[i]) flag = 1;
        }
        if (flag) {
            if (n>2) cout<<n-2<<endl;
            else cout<<0<<endl;
        }
        else cout<<-1<<endl;
    }
    return 0;
}