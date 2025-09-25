// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/EVENTUAL

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string str;
        cin>>n>>str;
        int ans = 0;
        vector <int> freq(26,0);
        for (int i=0; i<n; i++) {
            freq[str[i]-'a']++;
        }
        bool flag = true;
        for (int i : freq) {
            if(i%2!=0) {
                flag = false;
                break;
            }
        }
        cout<<(flag ? "YES" : "NO")<<endl;
    }
    return 0;
}