// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHN15A

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin>>n>>k;
        int count = 0;
        for (int i=0; i<n; i++) {
            int x;
            cin>>x;
            if ((x+k)%7==0) count++;
        }   
        cout<<count<<endl;
    }
    return 0;
}