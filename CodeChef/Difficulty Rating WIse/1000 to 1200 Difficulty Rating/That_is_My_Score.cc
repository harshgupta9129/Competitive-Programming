// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/WATSCORE

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector <int> score(9,0);
        int ans = 0;
        for (int i=0; i<n; i++) {
            int a,b;
            cin>>a>>b;
            if (a>8) continue;
            ans-=score[a];
            score[a] = max(score[a],b);
            ans+=score[a];
        }
        cout<<ans<<endl;
    }
    return 0;
}