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
        vector <string> problem(n);
        int a=0,b=0;
        for (int i=0; i<n; i++) {
            cin>>problem[i];
            if (problem[i]=="LTIME108") a++;
            else b++;
        }
        cout<<b<<" "<<a<<endl;
    }
    return 0;
}