// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/JOHNY

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector <int> a(n);
        for (int i=0; i<n; i++) cin>>a[i];
        int k;
        cin>>k;
        int len = a[k-1];
        sort(a.begin(),a.end());
        auto ans = find(a.begin(),a.end(),len);
        cout<<ans-a.begin()+1<<endl;
    }
    return 0;
}