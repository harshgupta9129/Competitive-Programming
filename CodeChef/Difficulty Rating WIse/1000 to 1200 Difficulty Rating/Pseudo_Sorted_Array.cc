// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/PSEUDOSORT

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector <int> arr(n);
        for (int i=0; i<n; i++) cin>>arr[i];
        int count = 0;   
        for (int i=0; i<n-1; i++) {
            if (arr[i]>arr[i+1]) {
                swap(arr[i],arr[i+1]);
                break;
            }
        }
        for (int i=0; i<n-1; i++) {
            if (arr[i]<=arr[i+1]) count++;
        }
        if (count==n-1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}