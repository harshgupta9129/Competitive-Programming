// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/ATM2

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin>>n>>k;
        vector <int> arr(n);
        for (int i=0; i<n; i++) {
            cin>>arr[i];
            if (k>=arr[i]) {
                cout<<1;
                k-=arr[i];
            }
            else cout<<0;
        }
        cout<<endl;
    }
    return 0;
}