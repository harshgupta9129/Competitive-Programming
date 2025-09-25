// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/ZEROSTRING

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin>>n>>s;
        int count1 = 0,count0 = 0;
        for (char c : s) {
            if (c=='1') count1++;
            else count0++;
        }
        int ans = 0;
        if (count1 > count0) {
            ans++;
            swap(count1,count0);
        }
        cout<<count1+ans<<endl;
    }
    return 0;
}