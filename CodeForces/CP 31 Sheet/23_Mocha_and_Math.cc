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
        for (int i=0; i<n-1; i++) {
            int temp = arr[i]&arr[i+1];
            arr[i]=temp;
            arr[i+1]=temp;
        }
        for (int i=n-2; i>=0; i--) {
            int temp = arr[i]&arr[i+1];
            arr[i]=temp;
            arr[i+1]=temp;
        }
        cout<<*max_element(arr.begin(), arr.end())<<endl;
    }
    return 0;
}