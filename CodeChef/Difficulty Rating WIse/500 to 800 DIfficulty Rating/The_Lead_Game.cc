#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    int p1_total = 0, p2_total = 0;
    int max_lead = 0, winner = 0;

    while (t--) {
        int s1, s2;
        cin >> s1 >> s2;
        p1_total += s1;
        p2_total += s2;

        int lead = abs(p1_total - p2_total);

        if (lead > max_lead) {
            max_lead = lead;
            winner = (p1_total > p2_total) ? 1 : 2;
        }
    }

    cout << winner << " " << max_lead << "\n";
    return 0;
}
