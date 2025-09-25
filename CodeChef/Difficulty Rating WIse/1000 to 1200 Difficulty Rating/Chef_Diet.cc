// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/DIET

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin>>n>>k;
        int protein = 0;
        vector <int> arr(n);
        for (int i=0; i<n; i++) cin>>arr[i];
        int i=0;
        for (i=0; i<n; i++) {
            protein+=arr[i];
            if (protein>=k) protein-=k;
            else {
                cout<<"NO "<<i+1<<endl;
                break;
            }
        }
        if (i==n) cout<<"YES"<<endl;
    }
    return 0;
}