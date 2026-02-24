#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector <string> a(n);
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        for (int i = 0; i < n; i++) {
            getline(cin, a[i]);
        }
        string curr = "Begin";
        for (int i=n-1; i>=0; i--) {
            int pos = a[i].find(' ');
            cout<<curr<<a[i].substr(pos, a[i].length())<<endl;
            curr = a[i].substr(0, pos);
            if (curr=="Left") curr = "Right";
            else curr = "Left";
        }
    }
    return 0;
}