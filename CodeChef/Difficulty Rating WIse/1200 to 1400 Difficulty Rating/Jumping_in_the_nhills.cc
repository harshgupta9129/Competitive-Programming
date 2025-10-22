// https://www.codechef.com/problems/HILLS

#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long t;
    cin >> t;
    while (t--) {
        long long n,u,d;
        cin>>n>>u>>d;
        vector <long long> arr(n);
        for (long long i=0; i<n; i++) cin>>arr[i];
        long long para = 1;
        long long curr = 1;
        for (long long i = 1; i < n; i++) {
            long long diff = arr[i] - arr[i-1];

            if (diff > 0) {               
                if (diff <= u) curr++;
                else break;
            } 
            else if (diff < 0) {          
                if (-diff <= d) curr++;
                else if (para) {        
                    curr++;
                    para--;
                } 
                else break;
            } 
            else curr++;
        }
        cout<<curr<<endl;
    }
    return 0;
}