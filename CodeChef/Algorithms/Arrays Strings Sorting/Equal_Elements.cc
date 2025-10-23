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
        vector <int> arr(n);
        for (int i=0; i<n; i++) cin>>arr[i];
        vector <int> count(n);
        int max = 0;
        for (int i=0; i<n; i++) {
            count[arr[i]-1]++;
            if (max<count[arr[i]-1]) max = count[arr[i]-1];
        }
        cout<<n-max<<endl;
    }
    return 0;
}