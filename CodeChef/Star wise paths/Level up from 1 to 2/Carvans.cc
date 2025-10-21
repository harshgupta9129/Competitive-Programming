#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector <int> speed(n);
        for (int i=0; i<n; i++) cin>>speed[i];
        int number = 1;
        int current_max = speed[0];
        for (int i=1; i<n; i++) {
            if (current_max >= speed[i]) {
                number++;
                current_max = speed[i];
            }
        }
        cout<<number<<endl;
    }
    return 0;
}