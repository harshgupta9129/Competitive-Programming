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
        vector <int> arr(7,0);
        for (int i=0; i<n; i++) {
            int x;
            cin>>x;
            if (x>=1 && x<=7 && arr[x-1]==0) arr[x-1] = i+1; 
        }
        sort(arr.begin(),arr.end());
        cout<<arr[6]<<endl;
    }
    return 0;
}