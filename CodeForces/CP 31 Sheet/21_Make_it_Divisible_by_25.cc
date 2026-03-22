#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin>>n;
        string s = to_string(n);
        int pos1 = -1, pos2 = -1;
        int l = s.length();
        for (int i=l-1; i>=0; i--) {
            if (s[i]=='0') {
                if (pos1==-1) pos1 = i;
                else if (pos2==-1) pos2 = i;
            } 
        }
        int ans = INT_MAX;
        if (pos1!=-1 && pos2!=-1) ans = min(ans,l-pos2-2);
        pos1 = -1, pos2 = -1;
        for (int i=l-1; i>=0; i--) {
            if (s[i]=='5' && pos1==-1 ) pos1 = i;
            if (s[i]=='2' && pos1!=-1 && pos2==-1) pos2 = i;
        }
        if (pos1!=-1 && pos2!=-1) ans = min(ans,l-pos2-2);
        pos1 = -1, pos2 = -1;
        for (int i=l-1; i>=0; i--) {
            if (s[i]=='0' && pos1==-1) pos1 = i;
            if (s[i]=='5' && pos1!=-1 && pos2==-1) pos2 = i;
        }
        if (pos1!=-1 && pos2!=-1) ans = min(ans,l-pos2-2);
        pos1 = -1, pos2 = -1;
        for (int i=l-1; i>=0; i--) {
            if (s[i]=='5' && pos1==-1) pos1 = i;
            if (s[i]=='7' && pos1!=-1 && pos2==-1) pos2 = i;
        }
        if (pos1!=-1 && pos2!=-1) ans = min(ans,l-pos2-2);
        cout<<ans<<endl;
    }
    return 0;
}