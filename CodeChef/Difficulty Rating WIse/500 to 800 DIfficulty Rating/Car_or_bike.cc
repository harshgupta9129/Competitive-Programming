// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/TRAVELFAST

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int x,y;
        cin>>x>>y;
        if (x>y) cout<<"CAR";
        else if (x<y) cout<<"BIKE";
        else cout<<"SAME";
        cout<<endl;
    }
    return 0;
}