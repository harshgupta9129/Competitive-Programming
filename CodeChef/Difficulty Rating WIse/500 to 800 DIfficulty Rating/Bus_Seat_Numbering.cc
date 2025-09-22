// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SEATNUMBER

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        if (n<=15) {
            cout<<"Lower ";
            if (n<=10) cout<<"Double"<<endl;
            else cout<<"Single"<<endl;
        }
        else {
            cout<<"Upper ";
            if (n<=25) cout<<"Double"<<endl;
            else cout<<"Single"<<endl;
        }
    }
    return 0;
}