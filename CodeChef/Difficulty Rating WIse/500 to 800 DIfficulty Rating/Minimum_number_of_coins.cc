#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin>>x;
        if (x%5) cout<<-1<<endl;
        else {
            int coin10 = x/10;
            int coin5 = (x - (x/10)*10)/5;
            cout<<coin10 + coin5<<endl;
        }
    }
    return 0;
}