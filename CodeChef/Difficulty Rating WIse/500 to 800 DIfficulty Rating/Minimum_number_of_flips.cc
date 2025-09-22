// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/MINFLIPS

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        int sum =0;
        for (int i=0; i<n; i++) {
            int x;
            cin>>x;
            sum+=x;
        }
        if (n%2!=0) cout<<-1<<endl;
        else cout<<abs(sum)/2<<endl;
    }
    return 0;
}