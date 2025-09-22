// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/NIBBLE

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        cout<<(n%4==0 ? "Good" : "Not Good")<<endl;
    }
    return 0;
}