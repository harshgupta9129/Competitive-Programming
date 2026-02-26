#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        
        vector<int> a(n), L(n), R(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
            L[i] = i-1;
            R[i] = i+1;
        }
        R[n-1] = -1;
        
        set<int> peaks;
        for(int i=1; i<n-1; i++){
            if(a[i] > a[i-1] && a[i] > a[i+1]){
                peaks.insert(i);
            }
        }
        
        int ans = 0;
        
        while(!peaks.empty()){
            auto it = peaks.begin();
            int i = *it;
            peaks.erase(it);
            
            if(L[i] == -1 && R[i] == -1) continue;
            
            int left = L[i], right = R[i];
            
            if(left != -1 && right != -1){
                if(a[left] < a[right]){
                    int toRem = left;
                    int ll = L[toRem], rr = R[toRem];
                    
                    ans++;
                    if(ll != -1) R[ll] = rr;
                    if(rr != -1) L[rr] = ll;
                    
                    if(ll != -1 && rr != -1){
                        int j = ll;
                        if(R[j] == rr && a[j] > a[rr] && a[j] > a[ (L[j]>=0)?a[L[j]]:0 ]){
                        }
                    }
                } else {
                    int toRem = right;
                    int ll = L[toRem], rr = R[toRem];
                    
                    ans++;
                    if(ll != -1) R[ll] = rr;
                    if(rr != -1) L[rr] = ll;
                }
            } else if(left != -1){
                int toRem = left;
                int ll = L[toRem];
                ans++;
                if(ll != -1) R[ll] = i;
                L[i] = ll;
            } else if(right != -1){
                int toRem = right;
                int rr = R[toRem];
                ans++;
                if(rr != -1) L[rr] = i;
                R[i] = rr;
            }
            
            peaks.clear();
            int cur = 0;
            vector<bool> vis(n,false);
            while(cur != -1){
                int nxt = R[cur];
                if(cur>0 && R[cur] != -1){
                    int lft = L[cur], rgt = R[cur];
                    if(lft != -1 && rgt != -1 && a[cur] > a[lft] && a[cur] > a[rgt]){
                        peaks.insert(cur);
                    }
                }
                cur = nxt;
            }
        }
        
        cout << ans << "\n";
    }
    return 0;
}