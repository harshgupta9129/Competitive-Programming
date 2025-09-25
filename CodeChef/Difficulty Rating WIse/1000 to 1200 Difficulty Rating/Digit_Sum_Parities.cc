// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/DIGSMPAR

#include <bits/stdc++.h>
using namespace std;

int sumdigit (int n) {
    int ans = 0;
    while (n) {
        ans+=(n%10);
        n/=10;
    }
    return ans;
}

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        int x = n+1;
        while (sumdigit(n)%2==sumdigit(x)%2) {
            x++;
        }
        cout<<x<<endl;
    }
    return 0;
}