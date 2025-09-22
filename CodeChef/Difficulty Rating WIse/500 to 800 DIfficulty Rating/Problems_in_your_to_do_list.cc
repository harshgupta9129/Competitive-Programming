// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/TODOLIST

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
        for (int x : arr) if (x>=1000) count++;
        cout<<count<<endl;
    }
    return 0;
}