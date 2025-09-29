// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/TALAZY

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n, b, m;
        cin >> n >> b >> m;

        long long time = 0;
        while (n > 0) {
            long long tasks = (n + 1) / 2;
            time += tasks * m;
            n -= tasks;
            m *= 2;
            if (n > 0) time += b;
        }

        cout << time << "\n";
    }

    return 0;
}
