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
        vector <int> petrol (n);
        for (int i=0; i<n; i++) cin>>petrol[i];
        int fuel = petrol[0];
        petrol[0] = 0;
        int pos = 1;
        int ans = 0;
        while (fuel) {
            fuel = fuel - 1 + petrol[pos%n];
            petrol[pos%n] = 0;
            pos++;
            ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}