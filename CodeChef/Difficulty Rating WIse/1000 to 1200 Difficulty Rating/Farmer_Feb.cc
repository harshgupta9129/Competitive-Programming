// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/POTATOES

#include <bits/stdc++.h>
using namespace std;

bool isprime(int n) {
    if (n < 2) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i * i <= n; i += 2)
        if (n % i == 0) return false;
    return true;
}

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int a,b;
        cin>>a>>b;
        int c = 1;
        int sum = a+b+c;
        if (sum%2==0) c++;
        while (true) {
            sum = a+b+c;
            if (isprime(sum)) {
                cout<<c<<endl;
                break;
            }
            c+=2;
        }
    }
    return 0;
}