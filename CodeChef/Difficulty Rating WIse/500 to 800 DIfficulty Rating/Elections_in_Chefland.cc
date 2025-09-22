// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/ELECTN

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n,x;
        cin>>n>>x;
        int count = 0;
        vector <int> arr(n);
        for (int i=0; i<n; i++) {
            cin>>arr[i];
            if (arr[i]>=x) count++;
        }
        cout<<count<<endl;
    }
    return 0;
}