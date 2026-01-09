#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int a,b,c;
        cin>>a>>b>>c;
        bool turn = true;
        if (c%2) turn = false;
        int diff = a-b;
        if (diff>1) cout<<"First"<<endl;
        else if (diff<-1) cout<<"Second"<<endl;
        else if (diff==0) {
            if (turn) cout<<"Second"<<endl;
            else cout<<"First"<<endl;
        }
        else if (diff==1) cout<<"First"<<endl;
        else cout<<"Second"<<endl;
    }
    return 0;
}