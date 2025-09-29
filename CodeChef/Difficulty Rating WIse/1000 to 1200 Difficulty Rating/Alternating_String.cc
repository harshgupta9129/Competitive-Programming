// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/ALTSTR

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
        string s;
        cin>>s;
        int count0 = 0, count1 = 0;
        for (int i=0; i<n; i++) {
            if (s[i]=='0') count0++;
            else count1++;
        }
        if (count1<count0) cout<<2*count1+1<<endl;
        else if (count1>count0) cout<<2*count0+1<<endl;
        else cout<<n<<endl;
    }
    return 0;
}