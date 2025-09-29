// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/POOK

#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        if (n==1) cout<<1<<endl;
        if (n==2) cout<<1<<endl;
        if (n==3) cout<<1<<endl;
        if (n>3) cout<<n<<endl;
    }
    return 0;
}