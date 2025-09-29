// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/PERFCONT

#include <bits/stdc++.h>
using namespace std;
 
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n,p;
        cin>>n>>p;
        vector <int> arr(n);
        for (int i=0; i<n; i++) cin>>arr[i];
        int easy = 0, hard = 0;
        for (int i=0; i<n; i++) {
            if (arr[i] >= p/2) easy++;
            if (arr[i] <= p/10) hard++;
        }
        if (easy==1 && hard==2) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    return 0;
}