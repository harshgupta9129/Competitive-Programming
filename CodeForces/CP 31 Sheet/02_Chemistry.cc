#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        string s;
        cin>>n>>k>>s;
        vector <int> freq(26,0);
        for (int i=0; i<n; i++) freq[s[i]-'a']++;
        int oddcount = 0;
        for (int i=0; i<26; i++) {
            if (freq[i]%2) oddcount++;
        }
        if (k>=oddcount-1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}