// https://www.codechef.com/problems/CFMM

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
        vector <long long> freq(26,0);
        for (long long i=0; i<n; i++) {
            string s;
            cin>>s;
            long long len = s.length();
            for (long long j=0; j<len; j++) {
                freq[s[j]-'a']++;
            }
        }
        long long c = freq['c'-'a']/2;
        long long o = freq['o'-'a'];
        long long d = freq['d'-'a'];
        long long e = freq['e'-'a']/2;
        long long h = freq['h'-'a'];
        long long f = freq['f'-'a'];
        cout<<min(c,min(o,min(d,min(e,min(h,f)))))<<endl;
    }
    return 0;
}