#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        int a = 1, b = n;
        bool turn = true;
        vector <int> ans(n);
        for (int i=n-1; i>=0; i--) {
            if (turn) {
                ans[i]=b--;
                turn = 0;
            }
            else {
                ans[i]=a++;
                turn = 1;
            }
        }
        for (int i=0; i<n; i++) cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}