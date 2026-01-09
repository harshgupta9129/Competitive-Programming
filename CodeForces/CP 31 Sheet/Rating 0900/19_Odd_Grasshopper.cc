#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long pos, turns;
        cin>>pos>>turns;
        if (pos%2) {
            int temp = turns%4;
            if (temp==1) pos+=turns;
            if (temp==2) pos-=1;
            if (temp==3) pos-=(1+turns);
        }
        else {
            int temp = turns%4;
            if (temp==1) pos-=turns;
            if (temp==2) pos+=1;
            if (temp==3) pos+=(1+turns);
        }
        cout<<pos<<endl;
    }
    return 0;
}