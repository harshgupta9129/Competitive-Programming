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
        if (n==1) {
            cout<<0<<endl;
            continue;
        }
        vector <int> ans;
        for (int i=1; i<n; i++) ans.push_back(arr[i-1]-arr[i]);
        int temp = arr[1];
        for (int i=2; i<n; i++) temp = max(temp,arr[i]);
        ans.push_back(temp-arr[0]);
        temp = arr[0];
        for (int i=1; i<n-1; i++) temp = min(temp,arr[i]);
        ans.push_back(arr[n-1]-temp);
        cout<<*max_element(ans.begin(),ans.end())<<endl;
    }
    return 0;
}