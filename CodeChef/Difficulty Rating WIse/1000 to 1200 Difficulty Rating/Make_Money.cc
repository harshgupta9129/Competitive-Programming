// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/MAKEMONEY

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n,x,c;
        cin>>n>>x>>c;
        vector <int> arr(n);
        int sum = 0;
        int coin = 0;
        for (int i=0; i<n; i++) {
            cin>>arr[i];
            if (x-arr[i] > c) {
                arr[i] = x;
                coin+=c;
            }
            sum+=arr[i];
        }
        cout<<sum-coin<<endl;
    }
    return 0;
}