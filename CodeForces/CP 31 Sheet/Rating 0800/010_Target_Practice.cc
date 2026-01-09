#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        string s[10];
        for (int i=0; i<10; i++) cin>>s[i];
        int score = 0;
        for (int i=0; i<5; i++) {
            for (int j=i; j<10-i; j++) if (s[i][j]=='X') score+=(i+1);
            for (int j=i+1; j<10-i; j++) if (s[j][9-i]=='X') score+=(i+1);
            for (int j=i; j<10-i-1; j++) if (s[9-i][j]=='X') score+=(i+1);
            for (int j=i+1; j<10-i-1; j++) if (s[j][i]=='X') score+=(i+1);
        }
        cout<<score<<endl;
    }
    return 0;
}