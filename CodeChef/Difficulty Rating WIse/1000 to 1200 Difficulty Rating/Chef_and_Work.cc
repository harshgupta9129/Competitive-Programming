// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/CHEFNWRK

#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin>>n>>k;
        vector <int> arr(n);
        for (int i=0; i<n; i++) cin>>arr[i];
        int round = 0;
        int sum = 0;
        bool flag = 1;
        for (int i=0; i<n; i++) {
            if (sum+arr[i]<=k) sum+=arr[i];
            else if (arr[i]<=k) {
                sum = arr[i];
                round++;
            }
            else {
                flag = 0;
                break;
            }
        }
        if (flag) cout<<round+1<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}