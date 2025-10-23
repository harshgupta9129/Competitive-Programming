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
        vector <int> freq(n,0);
        for (int i=0; i<n; i++) {
            int x;
            cin>>x;
            freq[x-1]++;
        }
        int max1 = 0, max2= 0;
        for (int i=0; i<n; i++) {
            if (max1<freq[i]) {
                max2 = max1;
                max1 = freq[i];
            }
            else if (max2<freq[i]) max2 = freq[i];
        }
        cout<<(max1!=max2 ? "Yes" : "No")<<endl;
    }
    return 0;
}