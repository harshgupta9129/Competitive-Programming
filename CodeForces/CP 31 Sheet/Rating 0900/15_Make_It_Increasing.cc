#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector <int> arr(n);
        for (int i=0; i<n; i++) cin>>arr[i];
        int ans = 0;
        for (int i=n-2; i>=0; i--) {
            if (arr[i+1]==0) break;
            if (arr[i+1]>arr[i]) continue;
            else {
                while (arr[i+1]<=arr[i]) {
                    arr[i]/=2;
                    ans++;
                }
            }
        }
        bool check = 1;
        for (int i=0; i<n-1; i++) {
            if (arr[i+1]<=arr[i]) {
                check = 0;
                break;
            }
        }
        cout<<(check ? ans : -1)<<endl;

    }
    return 0;
}