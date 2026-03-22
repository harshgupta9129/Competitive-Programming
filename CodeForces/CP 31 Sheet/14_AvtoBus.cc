#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin>>n;
        if (n%2) cout<<-1<<endl;
        else {
            long long maxi = n/4;
            long long mini = n/6;
            if (n%6) mini+=1;
            if (mini > maxi) cout << -1 << '\n';
            else cout<<mini<<" "<<maxi<<endl; 
        }
    }
    return 0;
}