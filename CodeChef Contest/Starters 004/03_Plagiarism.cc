#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n,m,k;
        cin>>n>>m>>k;
        vector <int> disqualify;
        vector <int> count(n,0);
        for (int i=0; i<k; i++) {
            int x;
            cin>>x;
            if (x<=n) {
                count[x-1]++;
                if (count[x-1]==2) disqualify.push_back(x);
            }
        }
        sort(disqualify.begin(), disqualify.end());
        cout<<disqualify.size();
        for (int x : disqualify) cout<<" "<<x;
        cout<<endl;
    }
    return 0;
}