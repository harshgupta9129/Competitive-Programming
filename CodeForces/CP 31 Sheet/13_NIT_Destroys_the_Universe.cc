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
            cout<<(arr[0]==0 ? 0 : 1)<<endl;
            continue;
        }
        int count = 0;
        for (int i=0; i<n; i++) if (arr[i]==0) count++;
        if (count==n) cout<<0<<endl;
        else if (count==0) cout<<1<<endl;
        else {
            int temp = 0;
            int find = 0;
            for (int i=0; i<n; i++) {
                if (arr[i]!=0) {
                    temp++;
                    find=1;
                }
                else if (find) break;
            }
            if (temp==(n-count)) cout<<1<<endl;
            else cout<<2<<endl;
        }
    }
    return 0;
}