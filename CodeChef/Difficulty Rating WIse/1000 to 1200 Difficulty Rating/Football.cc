// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/MSNSADM1

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector <int> a(n);
        vector <int> b(n);
        for (int i=0; i<n; i++) cin>>a[i];
        for (int i=0; i<n; i++) cin>>b[i];
        vector <int> score(n,0);
        int maxscore = INT16_MIN;
        for (int i=0; i<n; i++) {
            score[i]+=a[i]*20;
            score[i]-=b[i]*10;
            if (score[i]<0) score[i]=0;
            maxscore = max(maxscore, score[i]);
        }
        cout<<maxscore<<endl;
    }
    return 0;
}