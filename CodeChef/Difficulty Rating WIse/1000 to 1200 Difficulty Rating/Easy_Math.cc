// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/RPD

#include <bits/stdc++.h>
using namespace std;

int sumdigit(int n) {
    int ans = 0;
    while (n) {
        ans+=n%10;
        n/=10;
    }
    return ans;
}

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector <int> arr(n);
        for (int i=0; i<n; i++) cin>>arr[i];
        int maxans = 0;
        for (int i=0; i<n-1; i++) {
            for (int j=i+1; j<n; j++) {
                int temp = sumdigit(arr[i]*arr[j]);
                if (temp > maxans) maxans = temp;
            }
        }
        cout<<maxans<<endl;
    }
    return 0;
}