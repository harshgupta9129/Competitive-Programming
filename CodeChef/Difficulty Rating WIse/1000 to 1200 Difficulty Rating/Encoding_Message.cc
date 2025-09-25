// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/ENCMSG

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string str;
        cin>>n>>str;
        for (int i=1; i<n; i+=2) {
            swap(str[i-1],str[i]);
        }
        for (int i=0; i<n; i++) {
            str[i] = 'z' - str[i] + 97;
        }
        cout<<str<<endl;
    }
    return 0;
}