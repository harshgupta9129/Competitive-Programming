#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector <int> data(n);
        for (int i=0; i<n; i++) cin>>data[i];
        sort(data.begin(),data.end());
        cout<<(data[n-1]-data[0])<<endl;
    }
    return 0;
}