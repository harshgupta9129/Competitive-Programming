#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n,a,b;
        cin>>n>>a>>b;
        int round = 1;
        while (n!=pow(2,round)) {
            round++;
        }
        cout<<round*a + (round-1)*b<<endl;
    }
    return 0;
}