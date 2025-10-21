#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int w1,w2,x1,x2,M;
        cin>>w1>>w2>>x1>>x2>>M;
        int change = w2-w1;
        cout<<(change>=x1*M && change<=x2*M ? 1 : 0)<<endl;
    }
    return 0;
}