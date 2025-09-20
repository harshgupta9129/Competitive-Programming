// 2128A	Recycling Center

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n,c;
        cin>>n>>c;
        vector <int> arr(n);
        for (int i=0; i<n; i++) cin>>arr[i];
        sort(arr.begin(), arr.end());
        int pos = -1;
        for (int i=0; i<n; i++) {
            if (arr[i]<=c) pos = i;
            else break;
        }
        int coin = n-1 - pos;
        for (int i=pos; i>=0; i--) {
            if (arr[i]<=c) {
                transform(arr.begin(), arr.end(), arr.begin(), [](int x) { return x * 2; });
            } 
            else coin++;
        }
        cout<<coin<<endl;
    }
    return 0;
}