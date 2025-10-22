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
        n = n%3;
        switch(n) {
            case 0 : cout<<"Normal"<<endl;
            break;
            case 1 : cout<<"Huge"<<endl;
            break;
            case 2 : cout<<"Small"<<endl;
            break;
        }
    }
    return 0;
}