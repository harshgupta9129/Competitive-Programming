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
        vector <int> arr(n);
        for (int i=0; i<n; i++) cin>>arr[i];
        sort(arr.begin(), arr.end());
        int length = 1;
        int currlength = 1;
        for (int i=1; i<n; i++) {
            int diff = arr[i]-arr[i-1];
            if (diff<=1) currlength+=diff;
            else currlength = 1;
            if (length<currlength) {
                length = currlength;
            }
        }
        cout<<length<<endl;
    } 
    return 0;
}