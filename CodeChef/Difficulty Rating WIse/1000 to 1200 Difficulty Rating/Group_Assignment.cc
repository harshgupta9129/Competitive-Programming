// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/GRPASSN

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector <int> freq(n+1,0);
        for (int i=0; i<n; i++) {
            int x;
            cin>>x;
            freq[x]++;
        }
        bool flag = true;
        for (int i=2; i<=n; i++) {
            if (freq[i]==0 || freq[i]%i==0) {}
            else flag = false;
        }
        cout<<(flag ? "YES" : "NO")<<endl;
    }
    return 0;
}