// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/MATPAN

#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        vector <int> cost(26);
        for (int i=0; i<26; i++) cin>>cost[i];
        string s;
        cin>>s;
        vector <bool> alpha(26,false);
        for (int i=0; i<(int)s.length(); i++) alpha[s[i]-'a'] = true;
        int price = 0;
        for (int i=0; i<26; i++) if (!alpha[i]) price+=cost[i];
        cout<<price<<endl;
    }
    return 0;
}