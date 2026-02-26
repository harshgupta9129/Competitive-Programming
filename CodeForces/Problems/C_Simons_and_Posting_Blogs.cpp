#include <bits/stdc++.h>
using namespace std;

const int MAX_VAL = 1000005;
bool seen[MAX_VAL];
bool used[MAX_VAL];

void solve() {
    int n;
    cin >> n;
    vector<vector<int>> blogs(n);
    vector<int> to_clear;

    for (int i=0; i<n; i++) {
        int l;
        cin>>l;
        vector<int> a(l);
        for (int j=0; j<l; j++) {
            cin>>a[j];
        }
        for (int j=l-1; j>=0; j--) {
            if (!seen[a[j]]) {
                seen[a[j]]=true;
                blogs[i].push_back(a[j]);
                to_clear.push_back(a[j]);
            }
        }
        
        for (int x : to_clear) seen[x] = false;
        to_clear.clear();
    }
    vector<bool> picked(n, false);
    vector<int> Q;
    vector<int> used_clear;
    for (int step=0; step<n; step++) {
        int best_idx=-1;
        vector<int> best_arr;
        bool first=true;

        for (int i=0; i<n; i++) {
            if (picked[i]) continue;
            vector<int> cur;
            for (int x : blogs[i]) {
                if (!used[x]) {
                    cur.push_back(x);
                }
            }
            if (first || cur<best_arr) {
                best_arr=cur;
                best_idx=i;
                first=false;
            }
        }
        picked[best_idx]=true;
        for (int x : best_arr) {
            Q.push_back(x);
            used[x] = true;
            used_clear.push_back(x);
        }
    }
    for (int x : used_clear) used[x]=false;
    for (int i=0; i<Q.size(); i++) {
        cout<<Q[i]<<(i+1==Q.size()?"":" ");
    }
    cout<<"\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}