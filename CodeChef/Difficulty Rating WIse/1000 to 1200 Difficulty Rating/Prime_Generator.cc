// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/PRIME1

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

int main () {
    int t;
    cin >> t;
    while (t--) {
        int a,b;
        cin>>a>>b;
        for (int i=a; i<=b; i++) {
            if (isPrime(i)) cout<<i<<endl;
        }
        cout<<endl;
    }
    return 0;
}