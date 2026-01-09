#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        int len = to_string(n).length();
        int ans = 9*(len-1);
        n = n/pow(10,len-1);
        ans+=n;
        cout<<ans<<endl;
    }
    return 0;
}