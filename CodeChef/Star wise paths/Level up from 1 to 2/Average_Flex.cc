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
        vector <int> score(n);
        for (int i=0; i<n; i++) cin>>score[i];
        int ans = 0;
        for (int i=0; i<n; i++) {
            int min = 0;
            int max = 0;
            for (int j=0; j<n; j++) {
                if (score[i]>=score[j]) min++;
                else max++;
            }
            if (min>max) ans++;
        }
        cout<<ans<<endl;

    }
    return 0;
}