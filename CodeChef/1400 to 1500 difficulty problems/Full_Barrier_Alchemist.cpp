#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n,h,y1,y2,l;
        cin>>n>>h>>y1>>y2>>l;
        vector <vector <int>> a(n, vector <int> (2, 0));
        for (int i=0; i<n; i++) cin>>a[i][0]>>a[i][1];
        y1 = h-y1;
        int i=0;
        for (i=0; i<n; i++) {
            if (a[i][0]==1) {
                if (y1<=a[i][1]) {}
                else if (l>1) l--;
                else break;
            }
            else {
                if (y2>=a[i][1]) {}
                else if (l>1) l--;
                else break;
            }
        }
        cout<<i<<endl;
    }
    return 0;
}