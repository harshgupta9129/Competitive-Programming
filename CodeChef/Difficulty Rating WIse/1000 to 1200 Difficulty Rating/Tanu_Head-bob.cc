// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/HEADBOB

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin>>n>>s;
        int i=0, y=0;
        for (int j=0; j<n; j++) {
            if (s[j]=='I') i++;
            if (s[j]=='Y') y++;
        }
        if (i && y) cout<<"NOT SURE"<<endl;
        else if (i==y) cout<<"NOT SURE"<<endl;
        else if (i) cout<<"INDIAN"<<endl;
        else cout<<"NOT INDIAN"<<endl; 
    }
    return 0;
}