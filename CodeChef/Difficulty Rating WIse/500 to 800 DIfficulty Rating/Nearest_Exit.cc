// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/NEARESTEXIT

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin>>x;
        cout<<(x<51 ? "LEFT" : "RIGHT")<<endl;
    }
    return 0;
}