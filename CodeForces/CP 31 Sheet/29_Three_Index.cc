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
        vector <int> left(n);
        left[0]=0;
        for (int i=1; i<n; i++) {
            if (arr[left[i-1]]>arr[i]) left[i] = i;
            else left[i]=left[i-1];
        }
        vector <int> right(n);
        right[n-1]=n-1;
        for (int i=n-2; i>=0; i--) {
            if (arr[right[i+1]]>arr[i]) right[i] = i;
            else right[i]=right[i+1];
        }
        int a = -1, b = -1, c = -1;
        for (int i=1; i<n-1; i++) {
            if (arr[left[i-1]]<arr[i] && arr[i]>arr[right[i+1]]) {
                a=left[i-1]+1;
                b=i+1;
                c=right[i+1]+1;
                break;
            }
        }
        if (a==-1) cout<<"NO"<<endl;
        else {
            cout<<"YES"<<endl;
            cout<<a<<" "<<b<<" "<<c<<endl;
        }
    }
    return 0;
}