// https://www.codechef.com/problems/LONGSEQ

#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long t;
    cin >> t;
    while (t--) {
        string s;
        cin>>s;
        long long count1 = 0,count0 = 0;
        long long n = (long long)s.length();
        for (long long i=0; i<n; i++) {
            if (s[i]=='0') count0++;
            else count1++;
        }
        if (n==1) {
            cout<<"Yes"<<endl;
            continue;
        }
        cout<<(count0==1 || count1==1 ? "Yes" : "No")<<endl;
    }
    return 0;
}