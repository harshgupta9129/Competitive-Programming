#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        string s,m;
        cin>>s>>m;
        vector <int> skip(26,0);
        int curr = s.length();
        int ans = true;
        for (int i=m.length()-1; i>=0; i--) {
            int skipper = skip[m[i]-'A'];
            int index = s.length();
            for (int j=s.length(); j>=0; j--) {
                if (s[j]==m[i]) {
                    if (skipper) skipper--;
                    else {
                        index = j;
                        break;
                    }
                }
            }
            if (curr<=index) {
                ans = false;
                break;
            }
            curr = index;
            skip[m[i]-'A']++;
        }
        cout<<(ans ? "YES" : "NO")<<endl;
    }
    return 0;
}