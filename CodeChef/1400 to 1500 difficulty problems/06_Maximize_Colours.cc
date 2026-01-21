#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        vector <int> color(3);
        for (int i=0; i<3; i++) cin>>color[i];
        int ans = 0;
        sort(color.rbegin(), color.rend());
        for (int i=0; i<3; i++) {
            for (int j=i+1; j<3; j++) {
                if (color[i]>1 && color[j]>1) {
                    color[i]--;
                    color[j]--;
                    ans++;
                }
            }
            if (color[i]>0) ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}

