#include <bits/stdc++.h>
using namespace std;

long long get_sum_digits(long long n) {
    long long sum=0;
    while (n>0) {
        sum+=n%10;
        n/=10;
    }
    return sum;
}

void solve() {
    long long x;
    cin>>x;
    
    int count=0;
    
    for (int k=1; k<=200; k++) {
        long long y=x+k;
        if (y-get_sum_digits(y)==x) {
            count++;
        }
    }
    
    cout<<count<<"\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while (t--) {
        solve();
    }

    return 0;
}