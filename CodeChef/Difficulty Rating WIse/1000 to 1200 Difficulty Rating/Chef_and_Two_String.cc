// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/CHEFSTLT

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        string s1,s2;
        cin>>s1>>s2;
        int n = s1.length();
        int min = 0, max = 0;
        for (int i=0; i<n; i++) {
            if (s1[i]=='?' && s2[i]=='?') max++;
            else if (s1[i]=='?' || s2[i]=='?') max++;
            else if (s1[i]!=s2[i]) {
                max++;
                min++;
            }
        }
        cout<<min<<" "<<max<<endl;
    }
    return 0;
}