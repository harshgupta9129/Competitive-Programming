// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/CHEGLOVE

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector <int> a(n);
        vector <int> b(n);
        for (int i=0; i<n; i++) cin>>a[i];
        for (int i=0; i<n; i++) cin>>b[i];
        int frontcount = 0;
        int backcount = 0;
        for (int i=0; i<n; i++) {
            if (a[i]<=b[i]) frontcount++;
            if (a[i]<=b[n-i-1]) backcount++;
        }
        if (frontcount==backcount && frontcount==n) cout<<"both"<<endl;
        else if (frontcount==n) cout<<"front"<<endl;
        else if (backcount==n) cout<<"back"<<endl;
        else cout<<"none"<<endl;
    }
    return 0;
}