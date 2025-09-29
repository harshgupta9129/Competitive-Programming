// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/PETSTORE

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
        vector <int> freq(101,0);
        for (int i=0; i<n; i++) {
            int x;
            cin>>x;
            freq[x]++;
        }
        int flag = 1;
        for (int i=1; i<=100; i++) {
            if (freq[i]%2) {
                flag = false;
                break;
            }
        }
        cout<<(flag ? "YES" : "NO")<<endl;
    }
    return 0;
}