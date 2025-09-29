// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/MOVIEWKN

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
        vector <int> l(n);
        vector <int> r(n);
        for (int i=0; i<n; i++) cin>>l[i];
        for (int i=0; i<n; i++) cin>>r[i];
        int index = 0;
        int max = 0;
        int rmax = 0;
        for (int i=0; i<n; i++) {
            int curr = l[i]*r[i];
            if (curr>max) {
                max = curr;
                index = i+1;
                rmax = r[i];
            }
            else if (curr == max && rmax<r[i]) {
                index = i+1;
                rmax = r[i];
            }
        }
        cout<<index<<endl;
    }
    return 0;
}