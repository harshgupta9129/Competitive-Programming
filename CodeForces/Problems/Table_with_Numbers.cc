#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n,h,l;
        cin>>n>>h>>l;
        vector <int> arr(n);
        for (int i=0; i<n; i++) cin>>arr[i];
        sort(arr.begin(), arr.end());
        int ans = 0;
        int i=0, j=n-1;
        if (h<l) {
            while (i<j) {
                if (arr[i]<=h && arr[j]<=l) {
                    ans++;
                    i++;
                    j--;
                }
                else j--;
            }
        }
        else {
            while (i<j) {
                if (arr[j]<=h && arr[i]<=l) {
                    ans++;
                    i++;
                    j--;
                }
                else j--;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}