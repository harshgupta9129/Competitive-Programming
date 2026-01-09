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
        vector <int> c;
        sort(a.begin(),a.end());
        c.push_back(a[n-1]);
        for (int i=n-2 ;i>=0; i--) {
            if (a[i]==a[i+1]) c.push_back(a[i]);  
            else break;
        }
        int m = n-c.size();
        if (m==0) {
            cout<<-1<<endl;
            continue;
        }
        cout<<m<<" "<<n-m<<endl;
        for (int i=0; i<m; i++) cout<<a[i]<<" ";
        cout<<endl;
        for (int i=0; i<n-m; i++) cout<<c[i]<<" ";
        cout<<endl;
    }
    return 0;
}