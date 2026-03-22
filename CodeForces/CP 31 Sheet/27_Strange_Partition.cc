#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n,x;
        cin>>n>>x;
        vector <int> arr(n);
        long long sum = 0;
        for (int i=0; i<n; i++) {
            cin>>arr[i];
            sum+=arr[i];
        }
        long long maxi = 0;
        for (int i=0; i<n; i++) maxi+=(arr[i]+x-1)/x;
        long long mini = (sum+x-1)/x;
        cout<<mini<<" "<<maxi<<endl;
    }
    return 0;
}