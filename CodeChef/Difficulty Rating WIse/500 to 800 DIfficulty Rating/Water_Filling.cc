// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/WATERFILLING

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int a,b,c;
        cin>>a>>b>>c;
        cout<<(a+b+c > 1 ? "Not now" : "Water filling time")<<endl;
    }
    return 0;
}