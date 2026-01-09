#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin>>n>>k;
        vector <int> arr(n);
        for (int i=0; i<n; i++) cin>>arr[i];
        sort(arr.begin(),arr.end());
        vector <int> temp;
        int count = 1;
        for (int i=0; i<n-1; i++) {
            if (arr[i+1]-arr[i]<=k) count++;
            else {
                temp.push_back(count);
                count=1;
            }
        }
        temp.push_back(count);
        cout<<n-*max_element(temp.begin(), temp.end())<<endl;
    }
    return 0;
}