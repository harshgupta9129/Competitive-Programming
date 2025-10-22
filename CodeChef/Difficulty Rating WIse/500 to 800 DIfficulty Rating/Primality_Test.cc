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
        bool prime = true;
        for (int i=2; i<n; i++) {
            if (n%i==0) {
                prime = false;
                break;
            }
        }
        if (n==1) prime = false;
        cout<<(prime ? "Yes" : "No")<<endl;
    }
    return 0;
}