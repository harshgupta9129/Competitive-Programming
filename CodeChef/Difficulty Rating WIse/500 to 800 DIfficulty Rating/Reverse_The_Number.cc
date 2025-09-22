// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/FLOW007

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        string s = to_string(n);
        n = s.length();
        for (int i=0; i<n/2; i++) swap(s[i], s[n-1-i]);
        n = stoi(s);
        cout<<n<<endl;
    }
    return 0;
}