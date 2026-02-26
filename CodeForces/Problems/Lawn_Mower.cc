#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n,d;
        cin>>n>>d;
        cout<<(n/d)*(d-1)+n%d<<endl;
    }
    return 0;
}