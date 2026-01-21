#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin>>n>>s;
        int count0 = 0;
        int count1 = 0;
        for (char c : s) {
            if (c=='0') count0++;
            else count1++;
        }
        int moves = min(count1, count0);
        cout<<(moves%2 ? "Zlatan" : "Ramos")<<"\n";
    }
    return 0;
}