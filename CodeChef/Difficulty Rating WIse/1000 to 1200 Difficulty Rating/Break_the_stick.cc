// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n,x;
        cin>>n>>x;
        n-=x;
        if (x%2==0) {
            if (n%2==0) cout<<"YES";
            else cout<<"NO";
        }
        else {
            if (n%2!=0) cout<<"YES";
            else if (n>=2) cout<<"YES";
            else cout<<"NO";
        }
        cout<<endl;
    }
    return 0;
}