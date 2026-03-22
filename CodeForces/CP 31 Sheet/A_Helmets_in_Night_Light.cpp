#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n,p;
        cin>>n>>p;
        vector <int> a(n),b(n);
        for (int i=0; i<n; i++) cin>>a[i];
        for (int i=0; i<n; i++) cin>>b[i];
        vector <vector <int>> tracker;
        for (int i=0; i<n; i++) tracker.push_back({b[i],a[i]});
        sort(tracker.begin(), tracker.end());
        int curr = n-1;
        long long cost = p;
        for (auto z : tracker) {
            int bi = z[0];
            int ai = z[1];
            if (bi>=p) break;
            if (curr==0) break;
            int take = min(curr, ai);
            cost+=1LL*take*bi;
            curr-=take;
        }
        cost+=1LL*curr*p;
        cout<<cost<<endl;
    }
    return 0;
}