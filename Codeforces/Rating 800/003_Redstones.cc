// 2133A	Redstone?

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        vector <int> arr(n);
        for (int i=0; i<n; i++) {
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        bool check = false;
        for (int i=1; i<n; i++) {
            if (arr[i-1] == arr[i]) {
                check = true;
                break;
            }
        }
        cout<<(check ? "YES\n" : "NO\n");
    }
    return 0;
}