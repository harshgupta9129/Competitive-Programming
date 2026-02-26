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

        vector<int> p(n), a(n);
        vector<int> pos(n+1);

        for (int i=0; i<n; i++) {
            cin>>p[i];
            pos[p[i]]=i;
        }

        for (int i=0; i<n; i++) {
            cin>>a[i];
        }

        vector<bool> used(n+1, false);
        int last_pos=-1;
        bool posi=true;

        for (int i=0; i<n; i++) {
            if (i==0 || a[i]!=a[i-1]) {
                if (used[a[i]]) {
                    posi=false;
                    break;
                }
                used[a[i]]=true;
                if (pos[a[i]]<last_pos) {
                    posi=false;
                    break;
                }

                last_pos=pos[a[i]];
            }
        }

        cout<<(posi?"YES":"NO")<<endl;
    }

    return 0;
}