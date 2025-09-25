// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/COUNTP

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector <int> arr(n);
        int odd = 0;
        int sum = 0;
        for (int i=0; i<n; i++) {
            cin>>arr[i];
            if (arr[i]%2) odd++;
            sum+=arr[i];
        }
        if (sum%2==0 && odd>=2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}