#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin>>n;
    int ans;
    cin>>ans;
    ans = abs(ans);
    for (int i=0; i<n-1; i++) {
        int x;
        cin>>x;
        ans = min(abs(x),ans);
    }
    cout<<ans<<endl;
}