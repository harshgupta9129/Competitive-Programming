#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int a,b,c;
        cin>>a>>b>>c;
        bool check = false;
        if ((a+c)/2.0==(a+c)/2) {
            if (((a+c)/2)%b==0) check = true; 
        }
        int temp = 2*b-c;
        if (temp>0 && temp%a==0) check = true;
        temp = 2*b-a;
        if (temp>0 && temp%c==0) check = true;
        cout<<(check ? "YES" : "NO")<<endl;
    }
    return 0;
}