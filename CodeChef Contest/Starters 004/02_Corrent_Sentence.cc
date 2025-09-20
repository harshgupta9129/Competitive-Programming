#include <bits/stdc++.h>
using namespace std;

int category_Check (char c) {
    if (c>='a' && c<='m') return 1;
    if (c>='N' && c<='Z') return 2;
    return 0;
}

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        bool flag = 1;
        for (int i=0; i<n; i++) {
            string str;
            cin>>str;
            int category = category_Check(str[0]);
            for (int j=0; j<(int)str.length(); j++) {
                int temp = category_Check(str[j]);
                if (!temp || temp!=category) {
                    flag = 0;
                }
            }
        }
        cout<<(flag ? "YES" : "NO")<<endl;
    }
    return 0;
}