#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n,x,k;
        cin>>n>>x>>k;
        int temp = k/x;
        if (temp>n) cout<<n<<endl;
        else cout<<temp<<endl;
    }
    return 0;
}