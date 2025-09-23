// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/EZSPEAK

#include <bits/stdc++.h>
using namespace std;

bool consonent (char x) {
    if (x=='a' || x=='e' || x=='i' || x=='o' || x=='u') return 0;
    return 1;
}

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string str;
        cin>>n>>str;
        bool pre_con = 0;
        int count = 0;
        for (int i=0; i<n; i++) {
            if (count == 4) {
                break;
            }
            if (consonent(str[i])) {
                if (pre_con) count++;
                else {
                    pre_con = 1;
                    count = 1;
                }
            }
            else {
                count = 0;
                pre_con = 0;
            }
        }
        cout<<(count==4 ? "NO" : "YES")<<endl;
    }
    return 0;
}