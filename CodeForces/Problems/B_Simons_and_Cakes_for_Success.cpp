#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long temp = n;
        long long k = 1;
        for (long long p=2; p*p<=temp; p++) {
            if (temp%p==0) {
                k*=p;     
                while (temp % p == 0) temp/=p;
            }
        }
        if (temp>1) {
            k*=temp;
        }
        cout<<k<<"\n";
    }
    return 0;
}