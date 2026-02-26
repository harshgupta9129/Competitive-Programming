#include<bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

void solve() {
    int n, m;
    cin >> n >> m;

    int limit = n + m;
    vector <int> a(n);
    vector <int> b(m);

    vector <int> unique_a;
    vector <int> temp_a(n);

    for (int i=0; i<n; ++i) cin >> temp_a[i];
    sort(temp_a.begin(), temp_a.end());
    if (n > 0) unique_a.push_back(temp_a[0]);

    for (int i=1; i<n; ++i) {
        if(temp_a[i] != temp_a[i-1]) unique_a.push_back(temp_a[i]);
    }

    for (int &y : b) cin >> y;
    long long lcm_val = 1;
    for (int x : unique_a) {
        long long g = gcd(lcm_val, x);
        long long factor = x / g;
        if (limit / factor < lcm_val) {
            lcm_val = limit + 1; 
            break;
        }
        lcm_val *= factor;
    }
    vector<bool> alice_map(limit + 1, false);
    for (int x : unique_a) {
        for (int j = x; j <= limit; j += x) {
            alice_map[j] = true;
        }
    }
    int alice = 0;
    int bob = 0;
    int both = 0;
    for (int y : b) {
        bool alice_can = alice_map[y];
        bool bob_can = (lcm_val > limit) ? true : (y % lcm_val != 0);
        if (alice_can && !bob_can) {
            alice++;
        } else if (!alice_can && bob_can) {
            bob++;
        } else if (alice_can && bob_can) {
            both++;
        }
    }
    if (both % 2 == 1) {
        alice++; 
    }
    if (alice > bob) cout << "Alice\n";
    else cout << "Bob\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}