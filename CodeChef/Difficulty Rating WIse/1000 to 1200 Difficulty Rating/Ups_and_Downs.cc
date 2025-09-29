// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/ANUUND

#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin>>n;
        vector <long long> arr(n);
        for (long long i=0; i<n; i++) cin>>arr[i];
        sort(arr.begin(),arr.end());
        long long i=0, j=n-1;
        long long flag = 1;
        while (i<=j) {
            if (flag) {
                cout<<arr[i++]<<" ";
                flag = 0;
            }
            else {
                cout<<arr[j--]<<" ";
                flag = 1;
            }
        }
        cout<<endl;
    }
    return 0;
}