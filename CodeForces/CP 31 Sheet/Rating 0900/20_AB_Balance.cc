#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin>>s;
        if (s.length()>1) {
            s[0]=s[s.length()-1];
        }
        cout<<s<<endl;
    }
    return 0;
}