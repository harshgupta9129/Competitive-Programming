#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    while(t--) {
        int n,m;
        cin>>n>>m;
        vector <int> arr(n);
        for (int i=0; i<n; i++) cin>>arr[i];
        vector <int> check (m,0);
        for (int i=0; i<n; i++) {
            check[arr[i]-1]++;
        }
        bool flag = 0;
        for (int i=0; i<m; i++) {
            if (check[i]==0) flag = 1;
        }
        cout<<(flag ? "YES" : "NO")<<endl;
    }
    return 0;
}